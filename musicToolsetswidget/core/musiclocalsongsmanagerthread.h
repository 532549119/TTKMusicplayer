#ifndef MUSICLOCALSONGSMANAGERTHREAD_H
#define MUSICLOCALSONGSMANAGERTHREAD_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2014 - 2016 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QThread>
#include <QStringList>
#include <QFileInfoList>
#include "musiclibexportglobal.h"

class MUSIC_CORE_EXPORT MusicLocalSongsManagerThread : public QThread
{
    Q_OBJECT
public:
    explicit MusicLocalSongsManagerThread(QObject *parent = 0);
    ~MusicLocalSongsManagerThread();

    void setFindFilePath(const QString &path);
    void setFindFilePath(const QStringList &path);
    void stopAndQuitThread();

Q_SIGNALS:
    void setSongNamePath(const QFileInfoList &name);

public Q_SLOTS:
    void start();
    void run();

protected:
    QFileInfoList findFile(const QString &path);

    bool m_run;
    QStringList m_path;

};

#endif // MUSICLOCALSONGSMANAGERTHREAD_H

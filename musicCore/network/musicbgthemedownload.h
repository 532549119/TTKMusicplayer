#ifndef MUSICBGTHEMESLIDE_H
#define MUSICBGTHEMESLIDE_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2014 - 2016 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QObject>
#include "musicobject.h"
#include "musiclibexportglobal.h"

class MUSIC_NETWORK_EXPORT MusicBgThemeDownload : public QObject
{
    Q_OBJECT
public:
    MusicBgThemeDownload(const QString &name, const QString &save,
                         QObject *parent = 0);
    ~MusicBgThemeDownload();

    void startToDownload();

Q_SIGNALS:
    void musicBgDownloadFinished();

public Q_SLOTS:
    void downLoadFinished();
    void bgDownLoadFinished();

protected:
    QString m_artName;
    QString m_savePath;
    int m_index;
    int m_counter;

};

#endif // MUSICBGTHEMESLIDE_H

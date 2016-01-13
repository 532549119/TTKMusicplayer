#ifndef MUSICLOCALSONGSEARCHPOPTABLEWIDGET_H
#define MUSICLOCALSONGSEARCHPOPTABLEWIDGET_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2014 - 2016 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QWidget>
#include "musicabstracttablewidget.h"

#define ROW_HEIGHT 25

class QPushButton;

class MUSIC_SEARCH_EXPORT MusicLocalSongSearchPopTableWidget : public MusicAbstractTableWidget
{
    Q_OBJECT
public:
    explicit MusicLocalSongSearchPopTableWidget(QWidget *parent = 0);
    virtual ~MusicLocalSongSearchPopTableWidget();

    void clearAllItems();
    void createItems(int index, const QString &name, const QString &time);

Q_SIGNALS:
    void setText(const QString &text);

public Q_SLOTS:
    virtual void listCellClicked(int row, int column) override;

};


class MUSIC_SEARCH_EXPORT MusicLocalSongSearchPopWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MusicLocalSongSearchPopWidget(QWidget *parent = 0);
    ~MusicLocalSongSearchPopWidget();

    void createItems();

Q_SIGNALS:
    void setText(const QString &text);

public Q_SLOTS:
    void clearButtonClicked();

protected:
    virtual void leaveEvent(QEvent *event) override;
    QString utcTimeToLocal(const QString &time) const;

    MusicLocalSongSearchPopTableWidget *m_popTableWidget;
    QPushButton *m_clearButton;

};

#endif // MUSICLOCALSONGSEARCHPOPTABLEWIDGET_H

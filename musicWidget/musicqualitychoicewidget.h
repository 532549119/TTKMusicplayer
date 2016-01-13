#ifndef MUSICQUALITYCHOICEWIDGET_H
#define MUSICQUALITYCHOICEWIDGET_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2014 - 2016 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QToolButton>
#include "musicabstracttablewidget.h"

class MUSIC_WIDGET_EXPORT MusicQualityChoiceTableWidget : public MusicAbstractTableWidget
{
    Q_OBJECT
public:
    explicit MusicQualityChoiceTableWidget(QWidget *parent = 0);
    virtual ~MusicQualityChoiceTableWidget();

public Q_SLOTS:
    virtual void listCellClicked(int row, int column) override;
    void createItems();

};


class QMenu;

class MUSIC_WIDGET_EXPORT MusicQualityChoiceWidget : public QToolButton
{
    Q_OBJECT
public:
    explicit MusicQualityChoiceWidget(QWidget *parent = 0);
    ~MusicQualityChoiceWidget();

Q_SIGNALS:
    void researchQueryByQuality();

public Q_SLOTS:
    void listCellClicked(int row);
    void getQualityString(QString &string);

protected:
    void initWidget();
    QMenu *m_menu;
    QString m_currentQuality;

};

#endif // MUSICQUALITYCHOICEWIDGET_H

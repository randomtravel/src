#ifndef AQUISITEDATA_H
#define AQUISITEDATA_H

#include <QObject>
class AquisiteData : public QObject
{
    Q_OBJECT

public:
    explicit AquisiteData(QWidget *parent = 0);
    ~AquisiteData();

};

#endif // AQUISITEDATA_H

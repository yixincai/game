#ifndef THING_H
#define THING_H
#include <QGraphicsRectItem>
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QRectF>
/**
  This class maintains the location, size, and speed of a QGraphicsPixmapItem.
  It is easier to do the arithmetic with this data, and then update the position
  separately, then to extract coordinates from the QRectF that is contained within
  the QGraphicsRectItem
  */
class Thing : public QGraphicsPixmapItem {
public:
    Thing();
    Thing(QPixmap *pm, int x, int y, int vx, int vy );
    void setX( int x );
    void setY( int y );
    void setVelocityX( int vx );
    void setVelocityY( int vy );
    void setPixmap(QPixmap*);
    int getX();
    int getY();
    int getVelocityX();
    int getVelocityY();
    virtual void move(int x, int y) = 0;
    virtual void loseHP() = 0;
    virtual void changeDir() = 0;
    int getHP();
protected:
    int x;
    int y;
    int velocityX;
    int velocityY;
    QPixmap* pic;
    int hp;
};

#endif // THING_H

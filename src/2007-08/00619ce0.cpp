// from server: 36% by colin
struct Point {
    char pad[0x1c];
    float posX;
    float posY;
    float posZ;
    float forceX;
    float forceY;
    float forceZ;
};

struct PointToPointBreakConnector {
    char pad[8];
    Point* point0;
    Point* point1;
    float k;
    float breakForce;
    bool broken;
    void computeForce(bool throttling);
};

void PointToPointBreakConnector::computeForce(bool throttling) {
    if (broken) {
        return;
    }

    float dx = point1->posX - point0->posX;
    float dy = point1->posY - point0->posY;
    float dz = point1->posZ - point0->posZ;

    float negK = -k;
    dx *= negK;
    dy *= negK;
    dz *= negK;

    float mag = (dx < 0 ? -dx : dx) + (dy < 0 ? -dy : dy) + (dz < 0 ? -dz : dz);

    broken = !(mag <= breakForce);

    point0->forceX += dx;
    point0->forceY += dy;
    point0->forceZ += dz;

    point1->forceX -= dx;
    point1->forceY -= dy;
    point1->forceZ -= dz;
}

// from server: 41% by tester
struct Point {
    char pad[0x1c];
    float x;
    float y;
    float z;
    float vx;
    float vy;
    float vz;
};

struct PointToPointBreakConnector {
    char pad[8];
    Point* point0;
    Point* point1;
    float k;
    float breakForce;
    bool broken;
    void computeForce(float dt, bool throttling);
};

void PointToPointBreakConnector::computeForce(float dt, bool throttling)
{
    if (!broken) {
        float fx = (point1->x - point0->x) * -k;
        float fy = (point1->y - point0->y) * -k;
        float fz = (point1->z - point0->z) * -k;

        float mag = (fx < 0 ? -fx : fx) + (fy < 0 ? -fy : fy) + (fz < 0 ? -fz : fz);
        broken = breakForce < mag;

        point0->vx += fx;
        point0->vy += fy;
        point0->vz += fz;
        point1->vx -= fx;
        point1->vy -= fy;
        point1->vz -= fz;
    }
}

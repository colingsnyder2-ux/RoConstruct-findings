// from server: 40% by colin
struct Vector3 {
    float x, y, z;
};

struct Vector3int16 {
    short x, y, z;
};

struct Contact {
    char pad[0x10];
    float radius0;
    float radius1;
    float radius2;
};

extern "C" float __stdcall floor(double);
extern "C" bool __stdcall g3d_intersect(const Vector3& a, const Vector3& b, const Vector3& c, const Vector3& d, Vector3* out, Vector3* out2);

extern int g_9625ac;

struct BallBallContact : public Contact {
    bool computeIsColliding(float overlapIgnored, int* gridPos, Vector3int16* out);
};

bool BallBallContact::computeIsColliding(float overlapIgnored, int* gridPos, Vector3int16* out) {
    int i0min, i0max, i1min, i1max, i2min, i2max;

    if (radius0 > 0.0f) i0min = 0; else i0min = -1;
    if (radius0 >= 0.0f) i0max = 1; else i0max = 0;
    if (radius1 > 0.0f) i1min = -1; else i1min = 0;
    if (radius1 >= 0.0f) i1max = 1; else i1max = 0;
    if (radius2 > 0.0f) i2min = -1; else i2min = 0;
    if (radius2 >= 0.0f) i2max = 1; else i2max = 0;

    Vector3 center;
    center.x = (float)gridPos[0];
    center.y = (float)gridPos[1];
    center.z = (float)gridPos[2];

    float r = (float)g_9625ac * 2.0f + overlapIgnored;
    float r2 = r * r;

    for (int k = 1; k <= 3; ++k) {
        for (int i = i0min; i <= i0max; ++i) {
            for (int j = i1min; j <= i1max; ++j) {
                for (int l = i2min; l <= i2max; ++l) {
                    int ax = i < 0 ? -i : i;
                    int ay = j < 0 ? -j : j;
                    int az = l < 0 ? -l : l;
                    if (ax + ay + az != k) continue;

                    Vector3 p;
                    p.x = (float)i;
                    p.y = (float)j;
                    p.z = (float)l;

                    Vector3 q;
                    q.x = p.x + center.x;
                    q.y = p.y + center.y;
                    q.z = p.z + center.z;

                    Vector3 dir;
                    dir.x = (float)g_9625ac * p.x;
                    dir.y = (float)g_9625ac * p.y;
                    dir.z = (float)g_9625ac * p.z;

                    Vector3 out1, out2;
                    if (g3d_intersect(center, q, dir, dir, &out1, &out2)) {
                        float dx = out1.x - center.x;
                        float dy = out1.y - center.y;
                        float dz = out1.z - center.z;
                        if (dx*dx + dy*dy + dz*dz <= r2) {
                            float fx = out1.x + dir.x;
                            float fy = out1.y + dir.y;
                            float fz = out1.z + dir.z;
                            out->x = (short)floor((double)fx);
                            out->y = (short)floor((double)fy);
                            out->z = (short)floor((double)fz);
                            return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}

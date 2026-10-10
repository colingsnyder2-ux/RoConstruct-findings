// from server: 32% by colin
struct Vector3 {
    float x;
    float y;
    float z;
};

struct Contact {
    char pad[0x10];
    float radius0;
    float radius1;
    float radius2;
    float posX;
    float posY;
    float posZ;
};

struct BallBallContact {
    void generateDataForMovingAssemblyStage(Vector3* out);
};

void BallBallContact::generateDataForMovingAssemblyStage(Vector3* out) {
    float r0 = ((Contact*)this)->radius0;
    float r1 = ((Contact*)this)->radius1;
    float r2 = ((Contact*)this)->radius2;

    float len = r0 * r0 + r1 * r1 + r2 * r2;
    float inv = 1.0f / len;

    float nx = r0 * inv;
    float ny = r1 * inv;
    float nz = r2 * inv;

    out->x = 0.0f;
    out->y = 0.0f;
    out->z = 0.0f;

    out->x = ((Contact*)this)->posX;
    out->y = ((Contact*)this)->posY;
    out->z = ((Contact*)this)->posZ;

    out->x = nx;
    out->y = ny;
    out->z = nz;
}

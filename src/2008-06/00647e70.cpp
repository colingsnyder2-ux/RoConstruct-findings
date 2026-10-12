// from server: 81% by king_originala
extern "C" double __cdecl fabs(double);
#pragma intrinsic(fabs)

struct Vector3
{
    float x, y, z;
};

struct Block
{
    Vector3 vertices[8];
    Block(const Vector3& size);
};

Block::Block(const Vector3& size)
{
    vertices[0].x = 0.0f;
    vertices[0].y = 0.0f;
    vertices[0].z = 0.0f;
    vertices[1].x = 0.0f;
    vertices[1].y = 0.0f;
    vertices[1].z = 0.0f;
    vertices[2].x = 0.0f;
    vertices[2].y = 0.0f;
    vertices[2].z = 0.0f;
    vertices[3].x = 0.0f;
    vertices[3].y = 0.0f;
    vertices[3].z = 0.0f;
    vertices[4].x = 0.0f;
    vertices[4].y = 0.0f;
    vertices[4].z = 0.0f;
    vertices[5].x = 0.0f;
    vertices[5].y = 0.0f;
    vertices[5].z = 0.0f;
    vertices[6].x = 0.0f;
    vertices[6].y = 0.0f;
    vertices[6].z = 0.0f;
    vertices[7].x = 0.0f;
    vertices[7].y = 0.0f;
    vertices[7].z = 0.0f;

    double x = -fabs(size.x);
    double y = -fabs(size.y);
    double z = -fabs(size.z);
    float* p = &vertices[1].z;

    for (int i = 2; i != 0; --i)
    {
        x *= -1.0f;
        for (int j = 2; j != 0; --j)
        {
            y *= -1.0f;
            z *= -1.0f;
            p[-5] = x;
            p[-4] = y;
            p[-3] = z;
            z *= -1.0f;
            p[-2] = x;
            p[-1] = y;
            p[0] = z;
            p += 6;
        }
    }
}

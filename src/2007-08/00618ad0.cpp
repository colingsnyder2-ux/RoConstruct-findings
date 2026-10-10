// from server: 42% by colin
struct Edge {
    char pad0[0xc];
    void* field_c;
    void* field_10;
};

struct Vec3 {
    float x, y, z;
};

extern "C" void __stdcall sub_530100(void* p);

void Edge_compute(Edge* self, Vec3* out1, Vec3* out2, Vec3* in);

void Edge_compute(Edge* self, Vec3* out1, Vec3* out2, Vec3* in)
{
    void* a = self->field_c;
    sub_530100(a);

    float ax = in->x - *(float*)((char*)a + 0xa8);
    float ay = in->y - *(float*)((char*)a + 0xac);
    float az = in->z - *(float*)((char*)a + 0xb0);

    float m00 = *(float*)((char*)a + 0xc0);
    float m01 = *(float*)((char*)a + 0xc4);
    float m02 = *(float*)((char*)a + 0xc8);

    float r0x = m01 * az - m02 * ay;
    float r0y = m02 * ax - m00 * az;
    float r0z = m00 * ay - m01 * ax;

    float t0x = r0x + *(float*)((char*)a + 0xb4);
    float t0y = r0y + *(float*)((char*)a + 0xb8);
    float t0z = r0z + *(float*)((char*)a + 0xbc);

    void* b = self->field_10;
    sub_530100(b);

    float bx = in->x - *(float*)((char*)b + 0xa8);
    float by = in->y - *(float*)((char*)b + 0xac);
    float bz = in->z - *(float*)((char*)b + 0xb0);

    float n00 = *(float*)((char*)b + 0xc0);
    float n01 = *(float*)((char*)b + 0xc4);
    float n02 = *(float*)((char*)b + 0xc8);

    float s0x = n01 * bz - n02 * by;
    float s0y = n02 * bx - n00 * bz;
    float s0z = n00 * by - n01 * bx;

    float t1x = s0x + *(float*)((char*)b + 0xb4);
    float t1y = s0y + *(float*)((char*)b + 0xb8);
    float t1z = s0z + *(float*)((char*)b + 0xbc);

    float dx = t1x - t0x;
    float dy = t1y - t0y;
    float dz = t1z - t0z;

    float ix = in->x;
    float iy = in->y;
    float iz = in->z;

    out1->x = dx * dy + ix * iz + dz * iy;
    out2->x = dx * ix - dz * iy - dy * iz;
    out2->y = dy * ix - dx * iz - dz * iy;
    out2->z = dz * ix - dy * ix - dx * iz;
}

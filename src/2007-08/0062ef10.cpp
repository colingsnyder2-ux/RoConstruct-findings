// from server: 42% by colin
struct Vector3 {
    float x, y, z;
};

struct Matrix3 {
    float m[3][3];
};

struct CoordinateFrame {
    Matrix3 rotation;
    Vector3 translation;
};

struct Box {
    Vector3 center;
    Matrix3 axes;
    Vector3 halfExtents;
};

struct RenderDevice {
    void* vtable;
};

struct PartDragger {
    void* vtable;
};

extern "C" {
    void __cdecl sub_4E0180(void*, void*, void*);
    void* __cdecl sub_507050(void*, void*, void*);
    void __cdecl sub_50B010(void*, void*);
}

extern float g_795B48;
extern float g_79646C;
extern double g_792AF8;

void PartDragger_render3dAdorn(PartDragger* self, const CoordinateFrame* cframe, RenderDevice* rd, Box* box, Vector3* color)
{
    float scale = g_795B48;
    float v0 = cframe->translation.x * scale;
    float v1 = cframe->translation.y * scale;
    float v2 = cframe->translation.z * scale;

    int outer = 0;
    do {
        int i = 0;
        do {
            float f0, f1, f2;
            if (i == 0) {
                f0 = g_79646C;
                f1 = 0.0f;
                f2 = 0.0f;
            } else {
                f0 = 0.0f;
                f1 = 0.0f;
                f2 = 0.0f;
            }

            float t0 = f0;
            float t1 = f1;
            float t2 = f2;

            float a0 = v0 + (float)g_792AF8;
            float a1 = v1 + (float)g_792AF8;
            float a2 = v2 - (float)g_792AF8;

            float b0 = a0 * t0;
            float b1 = a1 * t1;
            float b2 = a2 * t2;

            float c0 = cframe->rotation.m[0][0] * b0 + cframe->rotation.m[0][1] * b1 + cframe->rotation.m[0][2] * b2 + cframe->translation.x;
            float c1 = cframe->rotation.m[1][0] * b0 + cframe->rotation.m[1][1] * b1 + cframe->rotation.m[1][2] * b2 + cframe->translation.y;
            float c2 = cframe->rotation.m[2][0] * b0 + cframe->rotation.m[2][1] * b1 + cframe->rotation.m[2][2] * b2 + cframe->translation.z;

            Vector3 p;
            p.x = c0;
            p.y = c1;
            p.z = c2;

            void* tmp = sub_507050(rd, &p, &p);
            sub_50B010(tmp, &p);

            Vector3 col;
            col.x = color->x;
            col.y = color->y;
            col.z = color->z;

            float d0 = c0 + (float)g_792AF8;
            float d1 = c1 + (float)g_792AF8;
            float d2 = c2 - (float)g_792AF8;

            Vector3 q;
            q.x = d0;
            q.y = d1;
            q.z = d2;

            sub_4E0180(&q, &p, &p);

            i += 4;
        } while (i < 12);

        outer++;
    } while (outer < 2);
}

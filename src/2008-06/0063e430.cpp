// from server: 41% by colin
struct G3DVector3 {
    float x, y, z;
};

struct G3DMatrix3 {
    float m[9];
};

struct G3DCoordinateFrame {
    G3DVector3 translation;
    G3DMatrix3 rotation;
};

struct G3DCamera {
    float field[9];
    void copyFrom(const G3DCamera*);
    void getColumn(int, G3DVector3*) const;
};

struct G3DImage {
    int width, height;
};

extern "C" {
    float __stdcall sqrtf(float);
    float __stdcall sinf(float);
    float __stdcall cosf(float);
}

extern float g_81e380;
extern float g_826e70;
extern float g_828b60;
extern float g_8438c0;
extern float g_84a340;
extern float g_96f044;
extern float g_96f048;
extern float g_96f04c;
extern int g_96f050;
extern float g_97bec8;
extern float g_97becc;
extern float g_97bed0;
extern int g_97bed4;

int __stdcall sub_615d90(int, int, float*);
void __stdcall sub_513240(G3DCamera*, float*, int);
void __stdcall sub_513220(void*, int);
void* __stdcall sub_513e20();
float __stdcall sub_518470(float);
void* __stdcall sub_660180(void*, void*);
float __stdcall sub_5ded80(float, float, float);
void __stdcall sub_613e30(void*, void*, void*);

struct SlingshotTool {
    char pad[0x24];
    float x, y, z;
    SlingshotTool* method(int, int, int);
};

SlingshotTool* SlingshotTool::method(int a, int b, int c) {
    float v1 = 0.0f, v2 = 0.0f, v3 = 0.0f;
    int r = sub_615d90(c, 0, &v1);
    float dx, dy, dz;
    if (r != 0) {
        dx = v1 - this->x;
        dy = v2 - this->y;
        dz = v3 - this->z;
        float len = sqrtf(dx*dx + dy*dy + dz*dz);
        float inv = 1.0f / len;
        dx *= inv;
        dy *= inv;
        dz *= inv;
    } else {
        float tmp = g_828b60;
        G3DVector3 col;
        sub_513240((G3DCamera*)this, &tmp, 2);
        dx = tmp * col.x;
        dy = col.y * tmp;
        dz = tmp * col.z;
    }
    float nx = dx * g_81e380 + this->x;
    float ny = dy * g_81e380 + this->y;
    float nz = dz * g_81e380 + this->z;
    if (r == 0) {
        void* p = sub_513e20();
        sub_513220((char*)this + 0x30, (int)p);
    } else {
        float ax = v1 - nx;
        float ay = v2 - ny;
        float az = v3 - nz;
        float ang = sub_518470(g_826e70);
        if (!(g_97bed4 & 1)) {
            g_97bed4 |= 1;
            g_97bec8 = 0.0f;
            g_97becc = g_8438c0;
            g_97bed0 = 0.0f;
        }
        void* q = sub_660180(&g_97bec8, (char*)this + 0x30);
        float qy = *(float*)((char*)q + 4);
        float s = sinf(sub_5ded80(g_84a340, az, ay));
        float co = cosf(s);
        ax *= co;
        az *= s;
        void* p = sub_513e20();
        sub_513220((char*)this + 0x30, (int)p);
    }
    *(float*)((char*)this + 0x6c) = nx;
    *(float*)((char*)this + 0x70) = ny;
    *(float*)((char*)this + 0x74) = nz;
    if (!(g_96f050 & 1)) {
        g_96f050 |= 1;
        g_96f044 = 0.0f;
        g_96f048 = 0.0f;
        g_96f04c = 0.0f;
    }
    float fx = dx * g_84a340;
    float fy = dy * g_84a340;
    float fz = dz * g_84a340;
    sub_613e30((char*)this + 0x30, (char*)this + 0x30, (char*)this + 0x30);
    return this;
}

// from server: 42% by colin
struct Vec3 { float x, y, z; };
struct Vec4 { float x, y, z, w; };

struct Obj {
    char pad0[0x104];
    void* ptr104;
    char pad1[0x40];
    void* ptr148;
    char pad2[8];
    void func(void* arg);
};

extern "C" {
    void* __cdecl sub_573770(int);
    void __cdecl sub_573310(void*, void*);
    void __cdecl sub_4f35d0(void*, void*, void*);
    void* __cdecl sub_573290();
    void* __cdecl sub_514a20();
    void* __cdecl sub_514a60();
    int __cdecl sub_558ac0(void*, void*);
    void __cdecl sub_5bdef0(void*, void*);
    void* __cdecl sub_7baf10(int, int, int);
    void* __cdecl sub_5cf160(void*, void*);
    int __cdecl sub_642750(void*, void*, void*);
    void __cdecl sub_642de0(void*, void*, int);
    void __cdecl sub_642520(void*, void*);
    void* __cdecl sub_5148e0();
    void __cdecl sub_802468(void*);
}

extern float g_8249f8;
extern float g_81c434;
extern float g_819bac;
extern float g_81e380;

void Obj::func(void* arg)
{
    void* p = sub_573770(0xc);
    Vec4 v;
    sub_573310(this, &v);
    float a = v.y - v.x;
    float b = v.x;
    float c = v.z;
    float d = v.w;
    float e = a * g_8249f8;
    float f = g_81c434;
    float g = b + f;
    float h = c - f;
    float i = d - f;
    float j = e + f;
    Vec4 out;
    sub_4f35d0(&out, &g, &h);
    char* q = *(char**)arg;
    q = q + 0x2c;
    void* r = sub_573290();
    void* fn = *(void**)q;
    ((void(__thiscall*)(void*, void*, void*))fn)(arg, &out, r);
    Vec3* cam = (Vec3*)sub_514a20();
    Vec4 camv;
    camv.x = cam->x;
    camv.y = cam->y;
    camv.z = cam->z;
    camv.w = 1.0f;
    Vec4 tmp;
    sub_4f35d0(&tmp, &camv, &camv);
    void* fn2 = *(void**)(*(char**)arg + 0x2c);
    ((void(__thiscall*)(void*, void*, void*))fn2)(arg, &tmp, &camv);
    Vec3* cam2 = (Vec3*)sub_514a60();
    Vec4 cam2v;
    cam2v.x = cam2->x;
    cam2v.y = cam2->y;
    cam2v.z = cam2->z;
    cam2v.w = 1.0f;
    int n = sub_558ac0(ptr148, this);
    n++;
    void* str;
    sub_5bdef0(&str, &n);
    void* ebp = str;
    float fx = camv.x + camv.y;
    float fy = camv.z + camv.w;
    float fz = g_819bac;
    float fw = fx * fz;
    float fv = fy * fz;
    void* fn3 = *(void**)(*(char**)arg + 0x34);
    void* r3 = sub_7baf10(2, 2, 0);
    ((void(__thiscall*)(void*, void*, void*, void*, void*, double, void*))fn3)(arg, &out, ebp, &tmp, &camv, (double)n, r3);
    sub_802468(&str);
    if (ptr148) {
        void* vt = *(void**)ptr148;
        char ok = ((char(__thiscall*)(void*))*(void**)((char*)vt + 0x80))(ptr148);
        if (ok) {
            Vec3* c3 = (Vec3*)sub_5148e0();
            Vec4 cv;
            cv.x = c3->x;
            cv.y = c3->y;
            cv.z = c3->z;
            cv.w = 1.0f;
            Vec4 t2;
            sub_4f35d0(&t2, &cv, &cv);
            float ff = g_81e380;
            void* fn4 = *(void**)(*(char**)arg + 0x28);
            ((void(__thiscall*)(void*, void*, void*, float))fn4)(arg, &t2, &cv, ff);
        }
        void* s = sub_5cf160(ptr148, &str);
        char bl = sub_642750((char*)this + 0x150, arg, s);
        sub_802468(&str);
        if (bl) {
            float f1 = (float)n;
            float f2 = v.x + f1;
            float f3 = v.y + f1;
            float f4 = v.z - f1;
            float f5 = v.w - f1;
            void* fn5 = *(void**)(*(char**)ptr148 + 0x7c);
            char r5 = ((char(__thiscall*)(void*))fn5)(ptr148);
            sub_642de0((char*)this + 0x150, arg, r5);
        } else {
            void* p2 = (char*)ptr148 + 0x110;
            void* fn6 = *(void**)(*(char**)this + 4);
            ((void(__thiscall*)(void*, void*))fn6)(this, p2);
        }
    } else {
        sub_642520(this, arg);
    }
}

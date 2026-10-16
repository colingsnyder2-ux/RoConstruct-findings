// from server: 66% by colin


struct Vec3 { float x, y, z; };
struct Mat3 { float m[9]; };
struct Frame { Mat3 rot; Vec3 pos; };

struct AxisMoveTool {
    char pad0[0x10];
    void* unk14;
    void func(void* arg);
};

struct Helper {
    void* sub_510960();
    char sub_640B40(Vec3* v);
    void sub_513220(void* src);
    void* sub_5107B0(void* out);
};

extern "C" void* __cdecl sub_513E20();
extern "C" void __cdecl sub_6776A0(void* a, void* b, void* c, int d, void* e);

extern float g_819bac;

void AxisMoveTool::func(void* arg)
{
    Vec3 a;
    Vec3 b;
    Vec3 c;
    Vec3 d;
    Frame f;

    Helper* h = (Helper*)this;

    void* p = h->sub_510960();
    a.x = *(float*)p;
    a.y = *(float*)((char*)p + 4);
    a.z = *(float*)((char*)p + 8);

    p = h->sub_510960();
    b.x = -*(float*)p;
    b.y = -*(float*)((char*)p + 4);
    b.z = -*(float*)((char*)p + 8);

    if (h->sub_640B40(&a)) {
        c.x = (b.x + a.x) * g_819bac;
        c.y = (b.y + a.y) * g_819bac;
        c.z = (b.z + a.z) * g_819bac;

        void* q = sub_513E20();
        h->sub_513220(q);

        f.pos.x = c.x;
        f.pos.y = c.y;
        f.pos.z = c.z;

        d.x = b.x - a.x;
        d.y = b.y - a.y;
        d.z = b.z - a.z;

        void* unk = *(void**)((char*)this + 0x14);
        void* obj = *(void**)((char*)unk + 0x288);
        void* (*fn)(void*) = *(void* (**)(void*))((char*)obj + 8);
        void* r = fn(obj);
        void* r2 = h->sub_5107B0(&d);

        sub_6776A0(&f, &d, arg, 1, (char*)r2 + 0x24);
    }
}

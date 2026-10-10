// from server: 34% by colin
struct GuiDrawImage {
    char pad[0x30];
};

struct TextureId {
    char pad[0x10];
};

struct Vector2 {
    float x;
    float y;
};

struct Vector3 {
    float x;
    float y;
    float z;
};

struct Rect {
    float x0;
    float y0;
    float x1;
    float y1;
};

struct Widget {
    char pad[0xbc];
    void* field_bc;
    char pad2[0x40];
    void* field_100;
    char pad3[0x04];
    void* field_108;
};

struct BackpackItem : Widget {
    void drawImpl(void* arg);
};

extern "C" void* __cdecl sub_00555a10(int size);
extern "C" void __cdecl sub_005555b0(void* out, void* self);
extern "C" void __cdecl sub_004e0180(void* out, void* a, void* b);
extern "C" void* __cdecl sub_00555530();
extern "C" void* __cdecl sub_0050b1c0();
extern "C" void* __cdecl sub_0050b200();
extern "C" void* __cdecl sub_0050b080();
extern "C" int __cdecl sub_0053fb30(void* self);
extern "C" void __cdecl sub_005804b0(void* out, void* a);
extern "C" void* __cdecl sub_00736ed0(int a, int b, int c);
extern "C" void __cdecl sub_0059ca10(void* out, void* a);
extern "C" int __cdecl sub_00600bd0(void* self, void* a, void* b);
extern "C" void __cdecl sub_00601260(void* self, void* a, void* b);
extern "C" void __cdecl sub_00600960(void* self, void* a);
extern "C" void __cdecl sub_0077e6ac(void* p);

extern float g_7ab980;
extern float g_797988;
extern float g_797e9c;
extern float g_797b38;

void BackpackItem::drawImpl(void* arg)
{
    void* mem = sub_00555a10(0xc);
    *(void**)((char*)this + 0x14) = mem;

    Vector2 size;
    sub_005555b0(&size, this);

    float w = size.x;
    float h = size.y;
    float dx = (h - w) * g_7ab980;
    float dy = g_797988;

    Rect r1;
    float a = w + dx;
    float b = h + dy;
    float c = w - dx;
    float d = h - dy;
    sub_004e0180(&r1, &c, &a);

    void* vtable = *(void**)arg;
    void* vt28 = *(void**)((char*)vtable + 0x28);
    void* p = sub_00555530();
    void* out;
    ((void (__thiscall*)(void*, void*, void*))vt28)(arg, &out, p);

    Vector3* v1 = (Vector3*)sub_0050b1c0();
    Vector3 pos1 = *v1;
    float one = 1.0f;

    Rect r2;
    sub_004e0180(&r2, &pos1, &one);

    void* vtable2 = *(void**)arg;
    void* vt2_28 = *(void**)((char*)vtable2 + 0x28);
    ((void (__thiscall*)(void*, void*, void*))vt2_28)(arg, &r2, &pos1);

    Vector3* v2 = (Vector3*)sub_0050b200();
    Vector3 pos2 = *v2;
    float one2 = 1.0f;

    void* field_bc = *(void**)((char*)this + 0xbc);
    int n = sub_0053fb30(this);
    n += 1;

    void* out2;
    sub_005804b0(&out2, &pos2);
    void* ebp = out2;

    float fx = r1.x0 + r1.x1;
    float fy = r1.y0 + r1.y1;
    float fz = g_797e9c;
    fx *= fz;
    fy *= fz;

    void* vtable3 = *(void**)arg;
    void* vt3_30 = *(void**)((char*)vtable3 + 0x30);
    void* p2 = sub_00736ed0(2, 2, 0);
    float fn = (float)n;
    ((void (__thiscall*)(void*, void*, void*, void*, double, void*, void*))vt3_30)(arg, &out2, &ebp, &fx, (double)fn, &pos2, p2);

    sub_0077e6ac(&out2);

    void* field_100 = *(void**)((char*)this + 0x100);
    if (field_100 != 0) {
        void* vt4 = *(void**)field_100;
        void* vt4_84 = *(void**)((char*)vt4 + 0x84);
        char res = ((char (__thiscall*)(void*))vt4_84)(field_100);
        if (res != 0) {
            Vector3* v3 = (Vector3*)sub_0050b080();
            Vector3 pos3 = *v3;
            float one3 = 1.0f;

            Rect r3;
            sub_004e0180(&r3, &pos3, &one3);

            float f = g_797b38;
            void* vt5 = *(void**)arg;
            void* vt5_24 = *(void**)((char*)vt5 + 0x24);
            ((void (__thiscall*)(void*, void*, void*, float))vt5_24)(arg, &r3, &pos3, f);
        }

        void* field_100b = *(void**)((char*)this + 0x100);
        void* out3;
        sub_0059ca10(&out3, &out2);
        void* field_108 = (char*)this + 0x108;
        int res2 = sub_00600bd0(field_108, arg, out3);
        sub_0077e6ac(&out2);
        if (res2 != 0) {
            float fn2 = (float)(int)arg;
            float fx2 = r1.x0 + fn2;
            float fy2 = r1.y0 + fn2;
            float fz2 = r1.x1 - fn2;
            float fw2 = r1.y1 - fn2;
            void* vt6 = *(void**)field_100b;
            void* vt6_80 = *(void**)((char*)vt6 + 0x80);
            void* p3 = ((void* (__thiscall*)(void*))vt6_80)(field_100b);
            sub_00601260(field_108, arg, p3);
        } else {
            void* field_100c = *(void**)((char*)this + 0x100);
            void* vt7 = *(void**)this;
            void* vt7_8 = *(void**)((char*)vt7 + 8);
            void* p4 = (char*)field_100c + 0xc8;
            ((void (__thiscall*)(void*, void*))vt7_8)(this, p4);
        }
    }
    sub_00600960(this, arg);
}

// from server: 31% by atomic.potato
struct Sub1 { char pad0[0x14]; bool b14; char pad15[0x17]; bool b2c; char pad2d[0x3]; void* p20; char pad24[0xc]; float x30; float x34; float x38; };

struct GroupDragTool
{
    char pad0[0x14];
    bool b14;
    char pad15[0x17];
    bool b2c;
    char pad2d[0x3];
    Sub1* p20;
    char pad24[0xc];
    float x30;
    float x34;
    float x38;

    bool func(int);
};

struct Vec3 { float x, y, z; };

extern "C" {
    void* __cdecl func_475020();
    void* __cdecl func_4f7830(void*);
    void* __cdecl func_51e100(void*, void*);
    bool __cdecl func_5ac3d0(void*, void*, void*);
    void __cdecl func_5e05c0(void*, void*);
    bool __cdecl func_5e0640(void*);
    void* __cdecl func_5e0720(void*, void*, int);
    void __cdecl func_5e0960(void*, void*, void*);
    void __cdecl func_5e1060(void*, void*, void*);
    void* __cdecl func_5e3bd0(void*, void*, int);
}

bool GroupDragTool::func(int a)
{
    if (b14 && b2c && func_5e0640(p20))
    {
        void* r1 = func_475020();
        void* r2 = func_4f7830(r1);
        void* r3 = func_51e100((char*)this + 0x30, r2);
        void* r4 = func_5e3bd0(p20, (char*)this + 0x58, a);
        if (func_5ac3d0(r4, r3, (char*)this + 0x10))
        {
            Vec3 v;
            void* p = func_5e0720(p20, &v, a);
            v.x = *(float*)p;
            v.y = *(float*)((char*)p + 4);
            v.z = *(float*)((char*)p + 8);
            func_5e05c0(p20, &v);
            Vec3 w;
            func_5e1060(&w, &v, 0);
            w.x -= x30;
            w.y -= x34;
            w.z -= x38;
            Vec3 u;
            func_5e1060(&u, &w, 0);
            x30 = u.x;
            x34 = u.y;
            x38 = u.z;
            func_5e0960(p20, &w, &u);
        }
    }
    return false;
}

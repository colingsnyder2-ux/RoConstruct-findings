// from server: 42% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Vec3 { float x, y, z; };
struct Vec6 { float a, b, c, d, e, f; };

struct RefCounted {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual Vec6* v21(Vec6* out);
    volatile long refcount1;
    volatile long refcount2;
};

struct ArrayOfPtrs {
    RefCounted** begin;
    RefCounted** end;
};

struct Obj {
    char pad0[0x148];
    RefCounted** arrBegin;
    RefCounted** arrEnd;
};

struct Inner {
    char pad0[0x288];
    virtual void* v0();
    virtual void* v1();
    char pad2[0x2d4 - 0x28c];
    Vec6 field2d4;
};

struct Camera {
    char pad0[0xc];
    Inner* inner;
};

struct Command {
    char pad0[4];
    void* field4;
    Camera* camera;
    virtual bool isEnabled();
    virtual void doIt(void* dataState);
};

extern Vec3* __cdecl func_00510960();
extern void __cdecl func_0057dee0(Vec6* dst, Vec6* src);
extern void* __cdecl func_005807b0(void* p);
extern void* __cdecl func_00581d80(ArrayOfPtrs* arr, int idx);
extern void __cdecl func_0058c5c0(void* a, void* b);
extern void* __cdecl func_005bd820(void* p);
extern void* __cdecl func_005cddd0(void* p);
extern void* __cdecl func_005ce0d0(void* p, Vec6* v);
extern void* __cdecl func_005ce400(void* p, Vec6* v);

extern float g_96f044;
extern float g_96f048;
extern float g_96f04c;
extern int g_96f050;

bool Command::isEnabled()
{
    return true;
}

void Command::doIt(void* dataState)
{
    Camera* cam = this->camera;
    Inner* inner = cam->inner;

    Vec3* p1 = func_00510960();
    Vec3 v1;
    v1.x = p1->x;
    v1.y = p1->y;
    v1.z = p1->z;

    Vec3* p2 = func_00510960();
    Vec6 box;
    box.a = -p2->x;
    box.b = -p2->y;
    box.c = -p2->z;
    box.d = v1.x;
    box.e = v1.y;
    box.f = v1.z;

    ArrayOfPtrs arr;
    arr.begin = 0;
    arr.end = 0;

    ArrayOfPtrs* a = (ArrayOfPtrs*)func_00581d80((ArrayOfPtrs*)&arr, 1);
    Obj* obj = (Obj*)a;
    int count = (int)((obj->arrEnd - obj->arrBegin));
    if (count < 1) {
        _invalid_parameter_noinfo();
    }

    ArrayOfPtrs* a2 = (ArrayOfPtrs*)func_00581d80((ArrayOfPtrs*)&arr, 1);
    Obj* obj2 = (Obj*)a2;
    int count2 = (int)((obj2->arrEnd - obj2->arrBegin));
    if (count2 == 0) {
        _invalid_parameter_noinfo();
    }

    RefCounted* first = obj2->arrBegin[0];
    Vec6 tmp;
    Vec6* r = first->v21(&tmp);
    box.a = r->a;
    box.b = r->b;
    box.c = r->c;
    box.d = r->d;
    box.e = r->e;
    box.f = r->f;

    int total = (int)((obj2->arrEnd - obj2->arrBegin));
    if (total > 1) {
        int i = 1;
        while (i < total) {
            if (i >= total) {
                _invalid_parameter_noinfo();
            }
            RefCounted* item = obj2->arrBegin[i];
            Vec6 tmp2;
            Vec6* r2 = item->v21(&tmp2);
            func_0057dee0(&box, r2);
            total = (int)((obj2->arrEnd - obj2->arrBegin));
            i++;
        }
    }

    Inner* inner2 = cam->inner;
    void* q = inner2->v1();
    func_005cddd0(q);

    Inner* inner3 = cam->inner;
    void* q2 = inner3->v1();
    func_005ce0d0(q2, &box);

    void* sp = func_005807b0(cam);
    func_005bd820(sp);

    Command* self = this;
    self->isEnabled();

    void* f4 = this->field4;
    void* str;
    if (*(int*)((char*)f4 + 0x1c) < 0x10) {
        str = (char*)f4 + 8;
    } else {
        str = *(void**)((char*)f4 + 8);
    }
    func_0058c5c0(str, cam);

    self->isEnabled();

    RefCounted* rc = (RefCounted*)arr.begin;
    if (rc) {
        if (_InterlockedExchangeAdd(&rc->refcount1, -1) == 1) {
            rc->v1();
            if (_InterlockedExchangeAdd(&rc->refcount2, -1) == 1) {
                rc->v2();
            }
        }
    }
}

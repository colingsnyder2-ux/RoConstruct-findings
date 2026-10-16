// from server: 34% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    volatile long refCount;
    volatile long weakCount;
};

struct Obj {
    char pad[0x9c];
    float x;
    float y;
    float z;
};

struct Vec3 {
    float x, y, z;
};

struct Mat34 {
    float m[12];
};

struct Ptr {
    void* p;
};

struct S {
    char pad0[8];
    void* field8;
    char pad1[0x24 - 0xc];
    int field24;
    RefCounted* field28;

    void* get8a();
    void* get8b();
    void* get8c();
    void* get8d();
    void* get8e();
    void method643f10(Vec3* a, Vec3* b, float c);
};

extern "C" void* __cdecl sub_005d8b10();

void* S::get8a()
{
    void* p = sub_005d8b10();
    return p ? (char*)p + 0x228 : 0;
}

void* S::get8b()
{
    void* p = sub_005d8b10();
    return p ? (char*)p + 0x228 : 0;
}

void* S::get8c()
{
    void* p = sub_005d8b10();
    return p ? (char*)p + 0x228 : 0;
}

void* S::get8d()
{
    void* p = sub_005d8b10();
    return p ? (char*)p + 0x228 : 0;
}

void* S::get8e()
{
    void* p = sub_005d8b10();
    return p ? (char*)p + 0x228 : 0;
}

extern "C" void* __cdecl sub_005d9160(void*);
extern "C" void* __cdecl sub_005d90a0(void*);
extern "C" void* __cdecl sub_005d90c0(void*);
extern "C" void* __cdecl sub_005d90e0(void*);
extern "C" void* __cdecl sub_005e82c0(void*);
extern "C" void __cdecl sub_004766a0(void*, Vec3*, Vec3*);
extern "C" void* __cdecl sub_00518830(Vec3*, Vec3*, Vec3*);
extern "C" void __cdecl sub_004025b0(void*, void*);

extern float g_819bac;
extern float g_81e37c;
extern float g_83a6e4;
extern float g_827494;
extern float g_972898;
extern float g_97289c;
extern float g_9728a0;
extern int g_9728a4;

void S::method643f10(Vec3* a, Vec3* b, float c)
{
}

void __cdecl target(S* self)
{
    void* p = sub_005d9160(self->field8);
    if (!p)
        return;

    void* q = sub_005d90a0(self->field8);
    void* r = sub_005e82c0(q);
    void* s = sub_005d90a0(self->field8);
    Obj* o = (Obj*)((char*)s + 0x9c);
    float f1 = o->x * g_819bac;
    float f2 = o->y * g_819bac;
    float f3 = o->z * g_819bac;

    float f4 = 1.0f;
    float f5;
    if (self->field24 != 0)
        f5 = g_81e37c;
    else
        f5 = g_83a6e4;

    void* t = sub_005d90c0(self->field8);
    if (t)
    {
        void* u = sub_005d90c0(self->field8);
        Obj* o2 = (Obj*)((char*)u + 0x9c);
        f4 = o2->z * f5 + g_827494;
    }
    else
    {
        void* v = sub_005d90e0(self->field8);
        if (v)
        {
            void* w = sub_005d90e0(self->field8);
            Obj* o3 = (Obj*)((char*)w + 0x9c);
            f4 = o3->z * f5 + g_827494;
        }
    }

    Vec3 v1;
    v1.x = -f2;
    v1.y = 0.0f;
    v1.z = 0.0f;
    Vec3 v2;
    v2.x = 0.0f;
    v2.y = 0.0f;
    v2.z = 0.0f;
    sub_004766a0(r, &v1, &v2);

    if ((g_9728a4 & 1) == 0)
    {
        g_9728a4 |= 1;
        g_972898 = 0.0f;
        g_97289c = 1.0f;
        g_9728a0 = 0.0f;
    }

    Vec3 v3;
    v3.x = -g_972898;
    v3.y = -g_97289c;
    v3.z = -g_9728a0;
    Vec3 v4;
    sub_00518830(&v3, &v4, &v4);

    Vec3 v5;
    v5.x = f2;
    v5.y = 0.0f;
    v5.z = 0.0f;
    Vec3 v6;
    v6.x = 0.0f;
    v6.y = 0.0f;
    v6.z = 0.0f;
    self->method643f10(&v5, &v6, f2);

    self->field24 = 0;
    sub_004025b0(&self->field28, &self->field28);

    bool b = self->field24 != 0;

    if (b)
        return;

    float f6 = f2;
    int i1 = -1;
    for (;;)
    {
        float f7 = (float)i1 * f1;
        int i2 = -1;
        for (;;)
        {
            float f8 = (float)i2 * f3;
            if ((g_9728a4 & 1) == 0)
            {
                g_9728a4 |= 1;
                g_972898 = 0.0f;
                g_97289c = 1.0f;
                g_9728a0 = 0.0f;
            }
            Vec3 v7;
            v7.x = -g_972898;
            v7.y = -g_97289c;
            v7.z = -g_9728a0;
            Vec3 v8;
            sub_00518830(&v7, &v8, &v8);

            Vec3 v9;
            v9.x = v8.x;
            v9.y = v8.y;
            v9.z = v8.z;
            Vec3 v10;
            v10.x = v8.x;
            v10.y = v8.y;
            v10.z = v8.z;
            self->method643f10(&v9, &v10, f6);

            self->field24 = 0;
            RefCounted* rc = self->field28;
            if (rc != 0)
            {
                if (_InterlockedExchangeAdd(&rc->refCount, 1) == 0)
                {
                }
            }
            self->field28 = rc;

            bool b2 = self->field24 != 0;

            if (b2)
                return;

            i2 += 2;
            if (i2 <= 1)
                continue;
            break;
        }
        i1 += 2;
        if (i1 <= 1)
            continue;
        break;
    }
}

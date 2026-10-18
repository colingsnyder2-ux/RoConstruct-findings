// from server: 63% by colin
// roc 2008-06 0067f850  unit: Ogre::RbxEntity  size: 545 bytes

struct Vector3 {
    float x, y, z;
};

struct Camera {
    Vector3* getDerivedPosition();
};

struct RenderQueueGroup {
    virtual void vf0();
};

struct RenderQueue {
    RenderQueueGroup* getQueueGroup(unsigned char);
};

struct MovableObject {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7();
    virtual void vf8();
    virtual void vf9();
    virtual void vf10();
    virtual void vf11();
    virtual void vf12();
    virtual void vf13();
    virtual void vf14();
    virtual void vf15();
    virtual void vf16();
    virtual void vf17();
    virtual void vf18();
    virtual void vf19();
    virtual void vf20();
    virtual void vf21();
    virtual void vf22();
    virtual void vf23();
    virtual void vf24(Camera*);
    virtual void vf25();
    virtual void vf26();
    virtual void vf27(Vector3*);
    virtual void vf28(RenderQueueGroup*);
    virtual void vf29();
    virtual void vf30();
    virtual void vf31();
    virtual void vf32();
    virtual void vf33();
    virtual void vf34();
    virtual void vf35();
    virtual void vf36();
    virtual void vf37();
    virtual void vf38(int);
    virtual void vf39();
    virtual void vf40();
    virtual void vf41();
    virtual void vf42();
    virtual void vf43();
    virtual void vf44();
    virtual void vf45();
    virtual void vf46();
    virtual void vf47();
    virtual void vf48();
    virtual void vf49();
    virtual void vf50();
    virtual void vf51();
    virtual void vf52();
    virtual void vf53();
    virtual void vf54();
    virtual void vf55();
    virtual void vf56();
    virtual void vf57();
    virtual void vf58();
    virtual void vf59();
    virtual void vf60();
    virtual void vf61();
    virtual void vf62();
    virtual void vf63();
    virtual void vf64();
    virtual void vf65();
    virtual void vf66();
    virtual void vf67();
    virtual void vf68();
    virtual void vf69();
    virtual void vf70();
    virtual void vf71();
    virtual void vf72();
    virtual void vf73();
    virtual void vf74();
    virtual void vf75();
    virtual void vf76();
    virtual void vf77();
    virtual void vf78();
    virtual void vf79();
    virtual void vf80();
    virtual void vf81();
    virtual void vf82();
    virtual void vf83();
    virtual void vf84();
    virtual void vf85();
    virtual void vf86();
    virtual void vf87();
    virtual void vf88();
    virtual void vf89();
    virtual void vf90(Vector3*);
    virtual void vf91();
    virtual void vf92();
    virtual void vf93();
    virtual void vf94();
    virtual void vf95();
    virtual void vf96();
    virtual void vf97();
    virtual void vf98();
    virtual void vf99();
};

struct RbxEntity {
    char pad0[0x34];
    MovableObject* obj34;
    MovableObject* obj38;
    MovableObject* obj3c;
    MovableObject* obj40;
    MovableObject* obj44;
    MovableObject* obj48;
    char pad4c[0x38];
    char flag84;
    char flag85;
    char pad86[0x36];
    float fbc;
    float fc0;
    float fc4;
    float fc8;
    float fcc;
    float fd0;

    void func(Camera* cam, int a, int b, int c);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

typedef RenderQueueGroup* (__thiscall *GetQueueGroupFn)(RenderQueue*, unsigned char);

extern GetQueueGroupFn g_getQueueGroup;

extern "C" MovableObject* __cdecl sub_6A17C6(void*, const char*, const char*, int, int);

void RbxEntity::func(Camera* cam, int a, int b, int c)
{
    Vector3* p = cam->getDerivedPosition();
    float px = p->x;
    float py = p->y;
    float pz = p->z;

    Vector3 v1;
    v1.x = px + fc8;
    v1.y = py + fcc;
    v1.z = pz + fd0;
    obj44->vf27(&v1);

    Vector3 v2;
    v2.x = px + fbc;
    v2.y = py + fc0;
    v2.z = pz + fc4;
    obj40->vf27(&v2);

    Vector3 v3;
    v3.x = px;
    v3.y = py;
    v3.z = pz;
    obj48->vf27(&v3);

    RenderQueueGroup* g10 = g_getQueueGroup((RenderQueue*)a, 10);
    g10->vf0();
    g10->vf0();

    RenderQueueGroup* g20 = g_getQueueGroup((RenderQueue*)a, 20);
    g20->vf0();
    g20->vf0();

    obj38->vf38(10);
    obj38->vf24(cam);
    obj38->vf28(g10);

    obj34->vf38(20);
    obj34->vf24(cam);
    obj34->vf28(g20);

    if (flag84) {
        obj3c->vf38(20);
        obj3c->vf24(cam);
        obj3c->vf28(g20);
    }

    if (flag85) {
        MovableObject* o = obj48;
        Vector3 out;
        o->vf90(&out);
        while (true) {
            if (out.x == 0 || out.x == out.z) {
                _invalid_parameter_noinfo();
            }
            if (out.y == out.z) break;
            MovableObject* m = sub_6A17C6(0, (const char*)0x932ca8, (const char*)0x963070, 0, 0);
            m->vf38(10);
            m->vf24(cam);
            m->vf28(g10);
        }
    }
}

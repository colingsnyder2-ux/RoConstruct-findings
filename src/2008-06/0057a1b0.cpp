// from server: 24% by colin
struct VDataModel;

extern "C" void* __cdecl sub_49AC80(void*);
extern "C" void  __cdecl sub_573430(void*, void*);
extern "C" void* __cdecl sub_412710(void*);
extern "C" unsigned int __cdecl sub_48AE20(void*);
extern "C" void* __cdecl sub_6A17C6(void*, void*, void*, void*, void*);
extern "C" void  __cdecl sub_4F35D0(void*, void*, void*);
extern "C" void* __cdecl sub_573290();
extern "C" void* __cdecl sub_514A20();
extern "C" void* __cdecl sub_514A60();
extern "C" void* __cdecl sub_7BAF10(int, int, int);
extern "C" void  __cdecl sub_55BD80(void*, const char*);
extern "C" void  __cdecl sub_5A38F0(void*, void*);
extern "C" void  __cdecl sub_5CECC0(void*, void*);
extern "C" void* __cdecl sub_45DE20(void*);

struct StdString {
    char data[0x1c];
};

extern "C" void __cdecl std_string_ctor(StdString*);
extern "C" void __cdecl std_string_ctor_pchar(StdString*, const char*);
extern "C" void __cdecl std_string_ctor_copy(StdString*, const StdString*);
extern "C" void __cdecl std_string_dtor(StdString*);
extern "C" StdString* __cdecl std_string_assign(StdString*, const StdString*);
extern "C" bool __cdecl std_string_eq_pchar(const StdString*, const char*);
extern "C" StdString* __cdecl std_string_concat(StdString*, const StdString*, const StdString*);
extern "C" StdString* __cdecl std_string_concat_pchar(StdString*, const StdString*, const char*);
extern "C" StdString* __cdecl std_string_concat_pchar2(StdString*, const char*, const StdString*);

extern void* (__cdecl *g_fn_802460)(void*);
extern void* (__cdecl *g_fn_80236C)(void*, const char*);
extern void* (__cdecl *g_fn_802458)(void*, const char*);
extern void* (__cdecl *g_fn_802368)(void*, const char*, void*);
extern void* (__cdecl *g_fn_8023E4)(void*, const char*, void*);
extern void* (__cdecl *g_fn_8024A8)(void*, void*, void*);
extern void* (__cdecl *g_fn_80240C)(void*, void*);
extern void* (__cdecl *g_fn_802468)(void*);
extern void* (__cdecl *g_fn_80245C)(void*, void*);
extern void  (__cdecl *g_fn_802890)();

extern float g_f_819BAC;
extern float g_f_827488;
extern float g_f_82711C;
extern float g_f_81C434;

struct VDataModel {
    char pad0[0x1f4];
    void* field_1f4;
    char pad1[0x1fc - 0x1f8];
    void* field_1fc;
    char pad2[0x204 - 0x200];
    void* field_204;
    char pad3[0x214 - 0x208];
    void* field_214;
    char pad4[0x21c - 0x218];
    void* field_21c;
    char pad5[0x230 - 0x220];
    unsigned char field_230;
    char pad6[0x234 - 0x231];
    StdString field_234;
    char pad7[0x254 - 0x250];
    void* field_254;
    char pad8[0x259 - 0x258];
    unsigned char field_259;

    void method(void* a, void* b);
};

void VDataModel::method(void* a, void* b)
{
    if (!field_259)
        return;
    if (!a)
        return;
    if (!b)
        return;

    field_254 = b;

    {
        char* p = (char*)field_204 + 0x1a0;
        void** vtbl = *(void***)p;
        void (*fn)(void*, void*) = (void (*)(void*, void*))vtbl[2];
        fn(p, a);
    }

    void* r = sub_49AC80(this);
    void* arg;
    if (r)
        arg = field_1fc;
    else
        arg = field_214;
    sub_573430(a, arg);

    {
        void** vtbl = *(void***)field_21c;
        void (*fn)(void*, void*) = (void (*)(void*, void*))vtbl[0x60 / 4];
        fn(field_21c, a);
    }

    void* r2 = sub_412710(this);
    void* list = *(void**)((char*)r2 + 0x1a0);
    if (list) {
        unsigned int n = sub_48AE20(list);
        for (unsigned int i = 0; i < n; ++i) {
            void* inner = *(void**)((char*)list + 0x108);
            unsigned int cnt = (*(unsigned int*)((char*)inner + 0x10) - *(unsigned int*)((char*)inner + 0xc)) >> 3;
            if (i >= cnt)
                g_fn_802890();
            void* elem = *(void**)(*(unsigned int*)((char*)inner + 0xc) + i * 8);
            void* obj = sub_6A17C6(elem, (void*)0x92907C, (void*)0x939F70, 0, 0);
            if (obj) {
                void** vtbl = *(void***)obj;
                void (*fn)(void*, void*) = (void (*)(void*, void*))vtbl[2];
                fn(obj, a);
            }
            n = sub_48AE20(list);
        }
    }

    StdString progress;
    g_fn_802460(&progress);

    StdString msg;
    std_string_ctor(&msg);

    if (g_fn_80236C(&field_234, "[[[progress]]]")) {
        StdString s1, s2;
        g_fn_802458(&s1, "Bricks: ");
        g_fn_802458(&s2, "   Connectors: ");

        StdString m1, m2;
        {
            void** vtbl = *(void***)field_1f4;
            void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vtbl[0];
            fn(&field_1f4, &m1, (void*)"numPrimitives");
        }
        {
            void** vtbl = *(void***)field_1f4;
            void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vtbl[0];
            fn(&field_1f4, &m2, (void*)"numJoints");
        }

        StdString t1, t2, t3;
        g_fn_802368(&t1, "Loading...   Instances: ", &m1);
        g_fn_8023E4(&t2, "   Bricks: ", &t1);
        g_fn_8024A8(&t3, &t2, &s1);
        g_fn_80240C(&msg, &t3);

        std_string_dtor(&t3);
        std_string_dtor(&t2);
        std_string_dtor(&t1);
        std_string_dtor(&m2);
        std_string_dtor(&m1);
        std_string_dtor(&s2);
        std_string_dtor(&s1);
    } else {
        g_fn_80240C(&msg, &field_234);
    }

    if (*(unsigned int*)((char*)&msg + 0x10) > 0) {
        float v[4];
        {
            void** vtbl = *(void***)a;
            void (*fn)(void*, float*) = (void (*)(void*, float*))vtbl[4];
            fn(a, v);
        }
        float f0 = v[0];
        float f1 = v[1];
        float f2 = v[2];
        float f3 = v[3];

        float d0 = f1 - f0;
        float d1 = f2 + f1;
        float d2 = f3 + f2;

        float r0 = d0 * g_f_819BAC;
        float r1 = d1 * g_f_819BAC;
        float r2 = d2 * g_f_819BAC;

        float q0 = (float)(int)(r0 * g_f_827488);
        float q1 = (float)(int)(r1 * g_f_827488);
        float q2 = (float)(int)(r2 * g_f_827488);

        float s0 = q0 * g_f_82711C;
        float s1 = q1 * g_f_82711C;
        float s2 = q2 * g_f_82711C;

        float out[4];
        out[0] = s0;
        out[1] = s1;
        out[2] = s2;
        out[3] = 1.0f;

        sub_4F35D0(out, &out[0], &out[1]);

        void* cam = sub_573290();
        void* pos;
        {
            void** vtbl = *(void***)a;
            void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vtbl[0x2c / 4];
            fn(a, &pos, cam);
        }

        float* p = (float*)sub_514A20();
        float pv[4];
        pv[0] = p[0];
        pv[1] = p[1];
        pv[2] = p[2];
        pv[3] = 1.0f;

        sub_4F35D0(pv, &pv[0], &pv[1]);

        {
            void** vtbl = *(void***)a;
            void (*fn)(void*, void*, void*, float) = (void (*)(void*, void*, void*, float))vtbl[0x28 / 4];
            fn(a, &pv[0], &pv[1], g_f_81C434);
        }

        float* p2 = (float*)sub_514A60();
        float pv2[4];
        pv2[0] = p2[0];
        pv2[1] = p2[1];
        pv2[2] = p2[2];
        pv2[3] = 1.0f;

        void* obj = sub_7BAF10(2, 2, 0);
        {
            void** vtbl = *(void***)a;
            void (*fn)(void*, void*, void*, void*, void*, void*, void*, void*) =
                (void (*)(void*, void*, void*, void*, void*, void*, void*, void*))vtbl[0x34 / 4];
            fn(a, &pv2[0], &pv2[1], &pv2[2], &pv2[3], obj, &pv[0], &pv[1]);
        }
    }

    void* r3 = sub_45DE20(this);
    void* obj2 = *(void**)((char*)r3 + 0x130);
    if (obj2) {
        if (field_230) {
            StdString tmp;
            sub_55BD80(&tmp, "Textures\\ArrowCursor.png");
            StdString tmp2;
            g_fn_80245C(&tmp2, &tmp);
            *(void**)((char*)&tmp2 + 0x1c) = *(void**)((char*)&tmp + 0x1c);
            {
                void** vtbl = *(void***)obj2;
                void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vtbl[0x1c / 4];
                fn(obj2, a, &tmp2);
            }
            std_string_dtor(&tmp2);
            std_string_dtor(&tmp);
        } else {
            sub_5A38F0(field_204, a);
        }
        sub_5CECC0(obj2, a);
    }

    field_254 = 0;
    std_string_dtor(&msg);
    std_string_dtor(&progress);
}

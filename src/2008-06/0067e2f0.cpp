// from server: 26% by colin
struct OgreVector3 {
    float x, y, z;
    OgreVector3();
    OgreVector3(const OgreVector3 &);
    OgreVector3 &operator=(const OgreVector3 &);
    float distance(const OgreVector3 &) const;
};

struct OgreAxisAlignedBox {
    OgreAxisAlignedBox();
    ~OgreAxisAlignedBox();
    const OgreVector3 *getAllCorners() const;
};

struct OgreRay {
    OgreRay();
};

struct OgrePlane {
    OgrePlane(const OgreVector3 &, const OgreVector3 &);
};

struct OgreMath {
    static float Sqrt(float);
};

struct OgreLight {
    float getAttenuationRange() const;
};

struct OgreEntity {
    void *vtable;
    unsigned char pad0[0x270];
    void *field274;
    unsigned char pad1[0x4];
    unsigned char field279;
    unsigned char pad2[0x2];
    unsigned char field27c[0xc];
    unsigned char pad3[0x4];
    float field288;
    float field28c;
    float field290;
    unsigned char pad4[0x20];
    void *field2b0;
    void *field2b4;

    void func(void *a, void *b, void *c);
};

struct VecList {
    void *begin;
    void *end;
    void *cap;
};

struct PairList {
    void *begin;
    void *end;
    void *cap;
};

struct IntList {
    void *begin;
    void *end;
    void *cap;
};

extern "C" void __cdecl invalid_parameter();
extern "C" void *__cdecl rt_dynamic_cast(void *, void *, void *, int);
extern "C" void *__cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void *);

extern void *__cdecl fn_445dc0(void *, void *, void *, void *, void *);
extern void *__cdecl fn_4c7c60(void *, void *, void *, void *, void *);
extern void *__cdecl fn_5e6de0(void *, int, int);
extern void *__cdecl fn_6740e0(void *, void *);
extern void *__cdecl fn_678630(int);
extern void *__cdecl fn_67d820(void *, void *, void *, int);
extern void *__cdecl fn_67da70(void *, void *);
extern void *__cdecl fn_685140(void *);
extern void *__cdecl fn_6a067a(void *);
extern void *__cdecl fn_6a0920(int);
extern void *__cdecl fn_6a17c6(void *, void *, void *, void *, void *);
extern int __cdecl fn_6a17f0(float);

extern void *__cdecl g_804338;
extern void *__cdecl g_8043ec;
extern void *__cdecl g_804490;
extern void *__cdecl g_80459c;
extern void *__cdecl g_8045a0;
extern void *__cdecl g_8045a4;
extern void *__cdecl g_8045a8;
extern void *__cdecl g_8045ac;
extern void *__cdecl g_8045b0;
extern void *__cdecl g_8045b4;
extern void *__cdecl g_8045b8;
extern void *__cdecl g_8045bc;
extern void *__cdecl g_8045c0;
extern void *__cdecl g_8045c4;
extern void *__cdecl g_8045c8;
extern void *__cdecl g_8045cc;
extern void *__cdecl g_8045d0;
extern void *__cdecl g_8045d4;
extern void *__cdecl g_804e8c;
extern void *__cdecl g_80426c;
extern void *__cdecl g_804270;

extern float g_81c3b8;
extern float g_82746c;
extern float g_827494;
extern float g_819bac;
extern float g_819dcc;
extern float g_84e538;
extern double g_82d3f8;
extern double g_81eef0;
extern float g_82d030;
extern float g_819778;
extern int g_962f68;
extern unsigned char g_962f64;

void OgreEntity::func(void *a, void *b, void *c)
{
    VecList *vl = (VecList *)a;
    if ((unsigned int)vl->begin > (unsigned int)vl->end)
        invalid_parameter();
    void *e = vl->end;
    void *s = vl->begin;
    if ((unsigned int)e > (unsigned int)vl->cap)
        invalid_parameter();
    void *b0 = vl->begin;
    fn_445dc0(vl, (void *)((char *)this + 0x2c), s, b0, e);

    if (!field279) {
        void **vt = *(void ***)this;
        void (__thiscall *f)(void *, void *) = (void (__thiscall *)(void *, void *))vt[0x35];
        f(this, c);
        field279 = 1;
    }

    void *p = (char *)this + 0x27c;
    void *r = ((void *(__thiscall *)(void *))g_8045d4)(p);
    void *esi = r;
    for (int i = 0; i < 8; i++) {
        void **vt = *(void ***)c;
        char (__thiscall *f)(void *, void *, int) = (char (__thiscall *)(void *, void *, int))vt[0x5c];
        if (f(c, esi, 0)) {
            void *q = ((void *(__thiscall *)(void *))g_804490)(c);
            ((void (__thiscall *)(void *, void *))g_8045d0)(esi, q);
        }
        esi = (char *)esi + 0xc;
    }

    void *alloc = fn_6a0920(4);
    if (alloc) {
        *(void **)alloc = (char *)this + 0x6c;
    } else {
        alloc = 0;
    }
    *(void **)((char *)this + 0x6c) = alloc;
    *(void **)((char *)this + 0x78) = 0;
    *(void **)((char *)this + 0x7c) = 0;
    *(void **)((char *)this + 0x80) = 0;

    float f288 = field288;
    float zero = 0.0f;
    float one = 1.0f;
    float v[3];
    v[0] = f288;
    v[1] = zero;
    v[2] = zero;
    float w[3];
    w[0] = one;
    w[1] = zero;
    w[2] = zero;
    void *tmp = ((void *(__thiscall *)(void *, void *, void *))g_8045cc)(0, w, v);
    fn_67da70((char *)this + 0x6c, tmp);

    v[0] = *(float *)((char *)this + 0x27c);
    v[1] = zero;
    v[2] = zero;
    w[0] = g_81c3b8;
    w[1] = zero;
    w[2] = zero;
    tmp = ((void *(__thiscall *)(void *, void *, void *))g_8045cc)(0, w, v);
    fn_67da70((char *)this + 0x6c, tmp);

    v[0] = field28c;
    v[1] = zero;
    v[2] = zero;
    w[0] = one;
    w[1] = zero;
    w[2] = zero;
    tmp = ((void *(__thiscall *)(void *, void *, void *))g_8045cc)(0, w, v);
    fn_67da70((char *)this + 0x6c, tmp);

    v[0] = *(float *)((char *)this + 0x280);
    v[1] = zero;
    v[2] = zero;
    w[0] = g_81c3b8;
    w[1] = zero;
    w[2] = zero;
    tmp = ((void *(__thiscall *)(void *, void *, void *))g_8045cc)(0, w, v);
    fn_67da70((char *)this + 0x6c, tmp);

    v[0] = field290;
    v[1] = zero;
    v[2] = zero;
    w[0] = one;
    w[1] = zero;
    w[2] = zero;
    tmp = ((void *(__thiscall *)(void *, void *, void *))g_8045cc)(0, w, v);
    fn_67da70((char *)this + 0x6c, tmp);

    v[0] = *(float *)((char *)this + 0x284);
    v[1] = zero;
    v[2] = zero;
    w[0] = g_81c3b8;
    w[1] = zero;
    w[2] = zero;
    tmp = ((void *(__thiscall *)(void *, void *, void *))g_8045cc)(0, w, v);
    fn_67da70((char *)this + 0x6c, tmp);

    void **vt = *(void ***)c;
    void *(*getBox)(void *) = (void *(*)(void *))vt[0x5f];
    void *box = getBox(c);

    OgreAxisAlignedBox boxes[4];
    for (int i = 0; i < 4; i++)
        ((void (__thiscall *)(void *))g_8045c8)(&boxes[i]);

    const OgreVector3 *corners = ((const OgreVector3 *(__thiscall *)(void *))g_8045c4)(box);
    (void)corners;

    float minv = g_82d030;
    for (int i = 0; i < 4; i++) {
        float *bp = (float *)((char *)box + i * 0xc);
        float *cp = (float *)((char *)box + 0x38 + i * 0xc);
        float dx = cp[0] - bp[0];
        float dy = cp[1] - bp[1];
        float dz = cp[2] - bp[2];
        float len = OgreMath::Sqrt(dx * dx + dy * dy + dz * dz);
        (void)len;
    }

    float best = g_82d030;
    for (int i = 0; i < 4; i++) {
        void *corner = (char *)box + i * 0x18;
        int r = ((int (__thiscall *)(void *, void *))g_8045c0)((char *)this + 0x6c, corner);
        if (r == 2) {
            float d;
            ((void (__thiscall *)(void *, void *, void *))g_8045bc)(&d, corner, (char *)this + 0x6c);
            if (best > d)
                best = d;
        }
    }

    if (best == g_82d3f8) {
        if (g_82746c > best) {
            if (best < field288)
                best = field288;
        }
    }

    void **vt2 = *(void ***)c;
    float (*getRange)(void *) = (float (*)(void *))vt2[0x48];
    float range = getRange(c);
    float total = range + best;

    fn_6a067a(*(void **)((char *)this + 0x78));
    *(void **)((char *)this + 0x78) = 0;
    *(void **)((char *)this + 0x7c) = 0;
    *(void **)((char *)this + 0x80) = 0;
    fn_6a067a(*(void **)((char *)this + 0x6c));

    if (best == 0.0f) {
        void **vt3 = *(void ***)c;
        float (*f1)(void *) = (float (*)(void *))vt3[0x4a];
        float r1 = f1(c);
        void **vt4 = *(void ***)c;
        void (*f2)(void *, float) = (void (*)(void *, float))vt4[0x49];
        f2(c, total);
        (void)r1;
    }

    int kind = ((int (__thiscall *)(void *))g_8045b8)(b);
    if (kind == 1) {
        ((void (__thiscall *)(void *))g_804338)((char *)this + 0x6c);
        void **vt5 = *(void ***)c;
        void *(*f5)(void *) = (void *(*)(void *))vt5[0x5f];
        void *box2 = f5(c);
        void *pos = ((void *(__thiscall *)(void *))g_8045b4)(b);
        float px = *(float *)pos * g_84e538;
        float py = *(float *)((char *)pos + 4) * g_84e538;
        float pz = *(float *)((char *)pos + 8) * g_84e538;
        (void)px; (void)py; (void)pz;
        (void)box2;
    } else {
        float r = ((float (__thiscall *)(void *))g_8045b0)(b);
        void *pos = ((void *(__thiscall *)(void *))g_8045ac)(b);
        OgreVector3 p;
        p.x = *(float *)pos;
        p.y = *(float *)((char *)pos + 4);
        p.z = *(float *)((char *)pos + 8);
        void **vt6 = *(void ***)c;
        char (__thiscall *f6)(void *, void *, int) = (char (__thiscall *)(void *, void *, int))vt6[0x5d];
        if (f6(c, &p, 0)) {
            void *pos2 = ((void *(__thiscall *)(void *))g_8045ac)(b);
            void **vt7 = *(void ***)c;
            char (__thiscall *f7)(void *, void *, int) = (char (__thiscall *)(void *, void *, int))vt7[0x5c];
            char ok = f7(c, pos2, 0);
            if (!ok) {
                void **vt8 = *(void ***)b;
                void *(*f8)(void *, void *) = (void *(*)(void *, void *))vt8[0x36];
                f8(b, this);
            }
        }
        (void)r;
    }

    int n = ((int (__thiscall *)(void *))g_804e8c)(this);
    for (int i = 0; i < n; i++) {
        void *elem = *(void **)((char *)this + 0xe4 + i * 4);
        void *obj = fn_6a17c6(elem, (void *)0x96301c, (void *)0x962ffc, 0, 0);
        void *esi2 = obj;
        void *ecx2 = (char *)esi2 + 0xec;
        char ok = ((char (__thiscall *)(void *))((void **)*(void ***)ecx2)[1])(ecx2);
        if (!ok)
            continue;
        void **vt9 = *(void ***)esi2;
        void *(*f9)(void *) = (void *(*)(void *))vt9[1];
        void *r9 = f9(esi2);
        void *r10 = *(void **)((char *)r9 + 4);
        void *r11 = ((void *(__thiscall *)(void *, int, int))g_80426c)(r10, 0, 0);
        void *r12 = ((void *(__thiscall *)(void *))g_804270)(r11);
        char r13 = ((char (__thiscall *)(void *))g_8045a8)(r12);
        if (r13)
            continue;
        int mode = g_962f68;
        if (mode == 0) {
            void **vt10 = *(void ***)esi2;
            float (*f10)(void *) = (float (*)(void *))vt10[0x13];
            float v10 = f10(esi2);
            if (v10 == g_827494)
                continue;
        } else if (mode == 1) {
            void **vt11 = *(void ***)esi2;
            float (*f11)(void *) = (float (*)(void *))vt11[0x13];
            float v11 = f11(esi2);
            if (v11 == g_819bac)
                continue;
        }
        void **vt12 = *(void ***)esi2;
        char (__thiscall *f12)(void *) = (char (__thiscall *)(void *))vt12[0x11];
        if (f12(esi2)) {
            IntList *il = (IntList *)b;
            void *p2 = (char *)esi2 + 0xec;
            if (il->end < il->cap) {
                *(void **)il->end = p2;
                il->end = (char *)il->end + 4;
            } else {
                fn_4c7c60(il, il->end, &p2, 0, 0);
            }
            continue;
        }
        void *arr = *(void **)((char *)this + 0x2b0);
        int idx = i;
        if ((unsigned int)idx >= (unsigned int)((char *)*(void **)((char *)this + 0x2b4) - (char *)arr))
            invalid_parameter();
        if (*(unsigned char *)((char *)arr + idx) == 3)
            continue;
        if (*(unsigned char *)((char *)this + 0x279)) {
            int k = ((int (__thiscall *)(void *))g_8045b8)(b);
            if (k != 1)
                continue;
        }
        void *lst = *(void **)((char *)this + 0x28);
        void *lstEnd = *(void **)((char *)this + 0x2c);
        void *lstBegin = *(void **)((char *)this + 0x24);
        (void)lst; (void)lstEnd; (void)lstBegin;
        void *p3 = (char *)esi2 + 0xec;
        IntList *il2 = (IntList *)b;
        if (il2->end < il2->cap) {
            *(void **)il2->end = p3;
            il2->end = (char *)il2->end + 4;
        } else {
            fn_4c7c60(il2, il2->end, &p3, 0, 0);
        }
    }

    if (total == 0.0f) {
        void **vt13 = *(void ***)c;
        void (*f13)(void *, float) = (void (*)(void *, float))vt13[0x49];
        f13(c, total);
    }

    if (g_962f64 && field274 && g_962f68 >= 1) {
        void *r = fn_678630(0);
        float fy = *(float *)((char *)r + 4);
        float fz = *(float *)((char *)r + 8);
        int cnt = ((char *)*(void **)((char *)this + 0x2c) - (char *)*(void **)((char *)this + 0x24)) >> 2;
        float fc = (float)cnt;
        float ratio = fz / fy;
        float prod = fc * ratio;
        int rounded = fn_6a17f0(prod);
        if (1.0f > prod) {
            if ((float)(rounded * 2) > prod)
                goto skip;
        }
        float sum = prod + 1.0f;
        if (sum > g_819dcc)
            goto skip;
        void *alloc2 = fn_6a0920(4);
        if (alloc2)
            *(void **)alloc2 = (char *)this + 0x54;
        else
            alloc2 = 0;
        *(void **)((char *)this + 0x54) = alloc2;
        *(void **)((char *)this + 0x60) = 0;
        *(void **)((char *)this + 0x64) = 0;
        *(void **)((char *)this + 0x68) = 0;
        int cnt2 = ((char *)*(void **)((char *)this + 0x2c) - (char *)*(void **)((char *)this + 0x24)) >> 2;
        for (int i = 0; i < cnt2; i++) {
            void *elem = *(void **)((char *)this + 0x24 + i * 4);
            void *obj = elem ? (char *)elem - 0xec : 0;
            void *r2 = fn_685140(obj);
            void **vt14 = *(void ***)obj;
            float (*f14)(void *, void *) = (float (*)(void *, void *))vt14[8];
            float v14 = f14(obj, this);
            float sq = OgreMath::Sqrt(v14);
            (void)sq;
            void **vt15 = *(void ***)obj;
            float (*f15)(void *) = (float (*)(void *))vt15[0x13];
            float v15 = f15(obj);
            int isZero = (v15 == g_827494) ? 1 : 0;
            void **vt16 = *(void ***)obj;
            float (*f16)(void *) = (float (*)(void *))vt16[0x13];
            float v16 = f16(obj);
            int isOne = (v16 == g_819bac) ? 1 : 0;
            float base = *(float *)((char *)r2 + 0xec);
            float val = fc - base;
            val = val - (float)isZero * 100.0f;
            val = val - (float)isOne * 100.0f;
            (void)val;
        }
        fn_67d820(*(void **)((char *)this + 0x60), *(void **)((char *)this + 0x64), *(void **)((char *)this + 0x60), 0);
        int cnt3 = ((char *)*(void **)((char *)this + 0x64) - (char *)*(void **)((char *)this + 0x60)) >> 3;
        int count = 0;
        for (int i = 0; i < cnt3; i++) {
            if (1.0f <= *(float *)((char *)this + 0x60 + i * 8 + 4))
                count++;
        }
        int pick = (rounded < count) ? count : rounded;
        int pick2 = (rounded * 2 < pick) ? pick : rounded * 2;
        int final = pick2;
        float fpick = (float)final + prod;
        if (g_819dcc > fpick) {
            int r3 = fn_6a17f0(g_819dcc - fpick);
            final = r3;
        }
        fn_5e6de0(this, final, 0);
        for (int i = 0; i < final; i++) {
            void *elem = *(void **)((char *)this + 0x60 + i * 8);
            void *obj = elem ? (char *)elem + 0xec : 0;
            *(void **)((char *)this + 0x24 + i * 4) = obj;
        }
        fn_6a067a(*(void **)((char *)this + 0x60));
        *(void **)((char *)this + 0x60) = 0;
        *(void **)((char *)this + 0x64) = 0;
        *(void **)((char *)this + 0x68) = 0;
        fn_6a067a(*(void **)((char *)this + 0x54));
    }
skip:
    ;
}

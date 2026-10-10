// from server: 83% by colin
struct Listener {
    void evaluate();
};

struct MediaQueryEvaluator;

extern "C" int __stdcall sub_401000(int);

struct VTable1 {
    void* pad[3];
    int (__stdcall* fn0c)(void*, void*, const char*, int);
};

struct VTable2 {
    void* pad[11];
    int (__stdcall* fn2c)(void*, const char*);
};

struct VTable3 {
    void* pad[6];
    int (__stdcall* fn18)(void*, int, void*);
};

struct Obj1 {
    VTable1* vt;
};

struct Obj2 {
    VTable2* vt;
};

struct Obj3 {
    VTable3* vt;
};

struct MediaQueryMatcher {
    char pad[0x188];
    Obj1* m_obj1;
    Obj2* m_obj2;
};

struct EvalParams {
    int a;
    int b;
    int c;
    int d;
    int e;
};

void Listener::evaluate() {
    MediaQueryMatcher* self = (MediaQueryMatcher*)this;
    Obj1* o1 = self->m_obj1;
    Obj2* o2 = self->m_obj2;

    int r1 = o1->vt->fn0c(o1, o2, " deflate 1.2.3 Copyright 1995-2005 Jean-loup Gailly ", 0);
    if (r1 < 0) {
        sub_401000(r1);
    }

    int r2 = o2->vt->fn2c(o2, "DEST");
    if (r2 < 0) {
        sub_401000(r2);
    }

    Obj3* o3 = (Obj3*)o2;
    EvalParams p;
    p.a = 0x14;
    p.b = 0x10;
    p.c = 0;
    p.d = 0;
    p.e = 0x800;

    int r3 = o3->vt->fn18(o3, 1, &p);
    if (r3 < 0) {
        sub_401000(r3);
    }
}

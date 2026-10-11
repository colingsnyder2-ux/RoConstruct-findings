// from server: 40% by colin
// roc 2008-06 0057fdd0  unit: RBX::VModelInstance::?$FilteredSelection  size: 174 bytes

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Vec8 {
    void* a;
    void* b;
};

struct Container {
    char pad[0xc];
    Vec8* begin;
    Vec8* end;
    Vec8* cap;
};

struct Outer {
    char pad[0x190];
    Container c;
};

void __stdcall sub_557330(void*, void*);
void* __stdcall sub_57d860();
void __stdcall sub_4124c0(Vec8*, int, Vec8*);

struct S {
    char pad[0x190];
    Container c;
    void* f();
};

void* S::f() {
    sub_557330((void*)0x9753c8, (void*)0x57ddb0);
    int idx = (int)sub_57d860();
    Container* p = &this->c;
    int n = (int)((p->end - p->begin));
    if ((unsigned)(idx + 1) > (unsigned)n) {
        Vec8 tmp;
        tmp.a = 0;
        tmp.b = 0;
        sub_4124c0(&tmp, idx + 1, p->end);
        return 0;
    }
    if ((unsigned)idx >= (unsigned)((p->cap - p->begin))) {
        _invalid_parameter_noinfo();
    }
    Vec8* e = &p->begin[idx];
    void* r = e->a;
    if (r != 0) {
    }
    return r;
}

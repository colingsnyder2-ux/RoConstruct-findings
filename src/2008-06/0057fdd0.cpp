// from server: 49% by colin
// roc 2008-06 0057fdd0  unit: RBX::VModelInstance::?$FilteredSelection  size: 174 bytes

extern "C" void __stdcall _invalid_parameter_noinfo();

void* __stdcall make_value_0057d860();

void* func_0057d860()
{
    static void* value = make_value_0057d860();
    return value;
}

void __stdcall sub_00557330(void*, void*);
void __stdcall sub_004124c0(void*, int, void*);

struct Inner {
    char pad[0xc];
    void* begin;
    void* end;
    char pad2[0x10];
    void* begin2;
    void* end2;
};

struct Outer {
    char pad[0x190];
    Inner inner;
};

struct S {
    char pad[0x19c];
    void* field_19c;
    void* field_1a0;
    void f();
};

void S::f()
{
    sub_00557330((void*)0x9753c8, (void*)0x57ddb0);
    void* p = func_0057d860();
    int idx = (int)p;
    Outer* o = (Outer*)((char*)this + 0x190);
    int count = (int)(((char*)o->inner.end - (char*)o->inner.begin) >> 3);
    if (idx + 1 > count) {
        void* tmp[2];
        tmp[0] = 0;
        tmp[1] = 0;
        sub_004124c0(o, idx + 1, tmp);
        return;
    }
    int count2 = (int)(((char*)o->inner.end2 - (char*)o->inner.begin2) >> 3);
    if (idx >= count2) {
        _invalid_parameter_noinfo();
    }
    void** arr = (void**)o->inner.begin2;
    void* v = arr[idx];
    if (v != 0) {
    }
}

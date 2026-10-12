// from server: 30% by colin
// roc 2008-06 0042de90  unit: RBX::VScriptContext::?$FactoryProduct::Creator  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042de90

extern "C" void __stdcall _invalid_parameter_noinfo();

void* __stdcall make_value_0042d030();
void* func_0042d030();

void __stdcall sub_00557330(int, int);
void __stdcall sub_004124c0(int, int);
void __stdcall sub_00572a90(int, int);
void __stdcall sub_00600660(int);
void __stdcall sub_004025b0(int, int);

struct Vec8 {
    int* begin;
    int* end;
    int* cap;
};

struct Container {
    char pad[0x190];
    Vec8 vec;
    char pad2[0x1a0 - 0x190 - 12];
};

struct S {
    int f();
};

int S::f() {
    void* v = func_0042d030();
    int idx = (int)v;
    Container* c = (Container*)((char*)this + 0x190);
    int count = (int)((char*)c->vec.end - (char*)c->vec.begin) >> 3;
    int next = idx + 1;
    if ((unsigned)next > (unsigned)count) {
        int zero1 = 0;
        int zero2 = 0;
        sub_004124c0((int)&zero1, next);
    } else {
        int cnt2 = (int)((char*)c->vec.cap - (char*)c->vec.begin) >> 3;
        if (idx >= cnt2) {
            _invalid_parameter_noinfo();
        }
        int* p = c->vec.begin + idx * 2;
        if (*p != 0) {
            return *p;
        }
    }
    void* v2 = func_0042d030();
    int tmp = 0;
    sub_00572a90((int)this, (int)&tmp);
    int val = tmp;
    if (val == 0) {
        sub_00600660((int)&tmp);
        return 0;
    }
    int cnt3 = (int)((char*)c->vec.cap - (char*)c->vec.begin) >> 3;
    if (idx >= cnt3) {
        _invalid_parameter_noinfo();
    }
    int* slot = c->vec.begin + idx * 2;
    *slot = val;
    sub_004025b0((int)(slot + 1), (int)&tmp);
    sub_00600660((int)&tmp);
    return val;
}

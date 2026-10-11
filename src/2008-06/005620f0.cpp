// from server: 32% by colin
struct S {
    char pad0[0x130];
    int field130;
    char pad134[0x4];
    int field138;
    char pad13c[0x10];
    int field14c;
    int field150;
    char pad154[0x1c];
    int field170;
    char pad174[4];
    int field178;

    int f();
};

extern "C" void __stdcall func_00802890();
extern "C" void __stdcall func_0080240c(void* a, void* b);
extern "C" void __stdcall func_00802460(void* a);
extern "C" void* __cdecl func_006a0920(unsigned int size);
extern "C" void __cdecl func_0047d410(void* a, void* b, void* c);

void __fastcall func_00560fa0(void* self);
void __fastcall func_00561020(void* self);
void __fastcall func_00561070(void* self, void* arg);
void __fastcall func_0055d5e0(void* self, void* arg);
void __fastcall func_00594ce0(void* self);
void __fastcall func_00594d00(void* self);
void __fastcall func_00569ae0(void* self, void* arg);
void __fastcall func_005df620(void* self);
void __fastcall func_004025b0(void* self, void* arg);
void* __fastcall func_00560720(void* self, void* arg);
void* __fastcall func_0041d4b0(void* self, void* arg);

int S::f() {
    char buf[0x3c];
    char buf2[0x54];
    void* p;
    int result;
    int* pi;
    void* v;

    func_00560fa0(buf);
    func_00594ce0(&this->field130);
    if (this->field150 == 0) {
        func_00594d00(&this->field130);
        func_00561020(buf);
        return 0;
    }
    pi = (int*)this->field14c;
    result = *pi;
    if (this->field138 == 0) {
        func_00802890();
        if (result == *(int*)(0 + 0x14)) {
            func_00802890();
        }
        result += 8;
        func_0080240c(buf, (void*)result);
        v = (void*)(result + 0x20);
        *(int*)(buf2 + 0x1c) = *(int*)(result + 0x1c);
        func_00561070(buf2 + 0x20, v);
    } else {
        result = *(int*)this->field138;
        result += 8;
        func_0080240c(buf, (void*)result);
        v = (void*)(result + 0x20);
        *(int*)(buf2 + 0x1c) = *(int*)(result + 0x1c);
        func_00561070(buf2 + 0x20, v);
    }
    func_00594d00(&this->field130);
    p = func_006a0920(0x1c);
    if (p != 0) {
        func_00802460(p);
        v = p;
    } else {
        v = 0;
    }
    func_0055d5e0(buf2 + 0x5c, v);
    func_0047d410(buf2 + 0x5c, v, buf2 + 0x5c);
    func_0041d4b0(buf2 - 0x48, buf);
    func_00569ae0(buf2 - 0x48, v);
    func_005df620(buf2 - 0x48);
    func_00594ce0(&this->field170);
    func_00560720(&this->field178, buf);
    *(int*)buf2 = result;
    func_004025b0(buf2 + 4, buf2 + 0x5c);
    func_00594d00(&this->field170);
    return 0;
}

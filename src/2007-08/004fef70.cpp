// from server: 50% by tester
// roc 2007-08 004fef70  unit: std::D::DU?$char_traits::V?$basic_string::?$Table  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fef70

extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(long volatile*);
extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);
extern "C" void __cdecl memset(void*, int, unsigned int);

struct CNameItem {
    void assign(void*);
};

struct GImage {
    void release();
};

struct Target {
    int field0;
    int field4;
    int field8;
    CNameItem name;
    int field10;
    unsigned char field14;
    int field18;
    int field1c;
    int field20;
    int field24;

    Target* construct(void* a, int b);
};

Target* Target::construct(void* a, int b) {
    this->field0 = 0x797984;
    this->field4 = 0;
    this->field8 = 0;
    this->field0 = 0x79f90c;
    this->name.assign(a);
    this->field10 = b;
    this->field14 = 1;
    this->field18 = 0x79f8dc;
    this->field24 = 10;
    this->field1c = 0;
    this->field20 = (int)operator_new(0x28);
    memset((void*)this->field20, 0, this->field24 * 4);
    if (a != 0) {
        if (InterlockedDecrement((long volatile*)((char*)a + 4)) == 0) {
            ((GImage*)a)->release();
            (*(void (__thiscall**)(void*, int))*(int*)a)(a, 1);
        }
    }
    return this;
}

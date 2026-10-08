// from server: 80% by colin
// roc 2007-08 00573d60  unit: RBX::VPartInstance::?$FactoryProduct  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573d60
//
// 00573d60  56                   push esi
// 00573d61  8bf1                 mov esi, ecx
// 00573d63  56                   push esi
// 00573d64  e8c7970000           call 0x57d530
// 00573d69  83c404               add esp, 4
// 00573d6c  85c0                 test eax, eax
// 00573d6e  740e                 je 0x573d7e
// 00573d70  8b8ed8010000         mov ecx, dword ptr [esi + 0x1d8]
// 00573d76  51                   push ecx
// 00573d77  8bc8                 mov ecx, eax
// 00573d79  e8825d0300           call 0x5a9b00
// 00573d7e  5e                   pop esi
// 00573d7f  c3                   ret 

struct Base {
    void method(int);
};

struct S {
    char pad[0x1d8];
    int field_1d8;
    void target();
};

extern "C" void* __stdcall sub_57D530(void*);
extern "C" void __stdcall sub_5A9B00(void*, int);

void S::target() {
    void* p = sub_57D530(this);
    if (p) {
        sub_5A9B00(p, this->field_1d8);
    }
}

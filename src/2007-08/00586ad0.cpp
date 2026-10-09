// from server: 75% by colin
// roc 2007-08 00586ad0  unit: RBX::VHat::?$FactoryProduct  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00586ad0
//
// 00586ad0  83ec08               sub esp, 8
// 00586ad3  56                   push esi
// 00586ad4  57                   push edi
// 00586ad5  51                   push ecx
// 00586ad6  8d44240c             lea eax, [esp + 0xc]
// 00586ada  50                   push eax
// 00586adb  e8d0faffff           call 0x5865b0
// 00586ae0  8bc8                 mov ecx, eax
// 00586ae2  83c138               add ecx, 0x38
// 00586ae5  e886d5ffff           call 0x584070
// 00586aea  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 00586af0  8bf0                 mov esi, eax
// 00586af2  833e00               cmp dword ptr [esi], 0
// 00586af5  7502                 jne 0x586af9
// 00586af7  ffd7                 call edi
// 00586af9  8b0e                 mov ecx, dword ptr [esi]
// 00586afb  8b5604               mov edx, dword ptr [esi + 4]
// 00586afe  3b5104               cmp edx, dword ptr [ecx + 4]
// 00586b01  7502                 jne 0x586b05
// 00586b03  ffd7                 call edi
// 00586b05  8b4604               mov eax, dword ptr [esi + 4]
// 00586b08  5f                   pop edi
// 00586b09  83c010               add eax, 0x10
// 00586b0c  5e                   pop esi
// 00586b0d  83c408               add esp, 8
// 00586b10  c3                   ret 

struct Name {
    void* p;
};

struct CreatorMap {
    void* head;
};

struct FactoryProduct {
    void* field0;
    void* field4;
};

struct Creator {
    void* vtable;
    void* field4;
};

struct CreatableBase {
    static CreatorMap* getCreators();
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern void* __cdecl sub_5865b0(void*);
extern void* __cdecl sub_584070(void*);

extern void* (__cdecl* g_77e6d8)();

struct S {
    void* f();
};

void* S::f() {
    void* local;
    void* p = sub_5865b0(&local);
    void* q = sub_584070((char*)p + 0x38);
    Creator* c = (Creator*)q;
    void* (__cdecl* fn)() = g_77e6d8;
    if (c->vtable == 0) {
        fn();
    }
    void* a = c->vtable;
    void* b = c->field4;
    if (b == *(void**)((char*)a + 4)) {
        fn();
    }
    return (char*)c->field4 + 0x10;
}

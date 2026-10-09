// from server: 43% by colin
// roc 2007-08 005f1c70  unit: std::X::ZV?$allocator::$$A6AXH::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f1c70
//
// 005f1c70  6aff                 push -1
// 005f1c72  681bb67500           push 0x75b61b
// 005f1c77  64a100000000         mov eax, dword ptr fs:[0]
// 005f1c7d  50                   push eax
// 005f1c7e  64892500000000       mov dword ptr fs:[0], esp
// 005f1c85  51                   push ecx
// 005f1c86  56                   push esi
// 005f1c87  6a10                 push 0x10
// 005f1c89  8bf1                 mov esi, ecx
// 005f1c8b  e866e20300           call 0x62fef6
// 005f1c90  83c404               add esp, 4
// 005f1c93  89442404             mov dword ptr [esp + 4], eax
// 005f1c97  85c0                 test eax, eax
// 005f1c99  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f1ca1  741b                 je 0x5f1cbe
// 005f1ca3  83c604               add esi, 4
// 005f1ca6  56                   push esi
// 005f1ca7  8bc8                 mov ecx, eax
// 005f1ca9  e842ffffff           call 0x5f1bf0
// 005f1cae  5e                   pop esi
// 005f1caf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f1cb3  64890d00000000       mov dword ptr fs:[0], ecx
// 005f1cba  83c410               add esp, 0x10
// 005f1cbd  c3                   ret 
// 005f1cbe  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f1cc2  33c0                 xor eax, eax
// 005f1cc4  5e                   pop esi
// 005f1cc5  64890d00000000       mov dword ptr fs:[0], ecx
// 005f1ccc  83c410               add esp, 0x10
// 005f1ccf  c3                   ret 

struct AllocatorHolder {
    void* construct(void*);
};

struct Holder {
    void* field0;
    void* field4;
    void* allocate(unsigned int);
    void init(void*);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl func_5f1bf0(void*, void*);

void* Holder::allocate(unsigned int size) {
    void* p = operator_new(size);
    if (p != 0) {
        func_5f1bf0(p, (char*)this + 4);
    }
    return p;
}

void Holder::init(void* arg) {
    void* p = operator_new(0x10);
    if (p != 0) {
        func_5f1bf0(p, (char*)this + 4);
    }
}

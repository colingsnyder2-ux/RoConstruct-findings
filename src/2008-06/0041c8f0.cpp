// from server: 100% by king_originala
// roc 2008-06 0041c8f0  unit: RBX::VDataModel::?$BoundFuncDesc  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041c8f0
//
// 0041c8f0  64a100000000         mov eax, dword ptr fs:[0]
// 0041c8f6  6aff                 push -1
// 0041c8f8  68c8e17b00           push 0x7be1c8
// 0041c8fd  50                   push eax
// 0041c8fe  64892500000000       mov dword ptr fs:[0], esp
// 0041c905  56                   push esi
// 0041c906  57                   push edi
// 0041c907  8bf1                 mov esi, ecx
// 0041c909  8d442418             lea eax, [esp + 0x18]
// 0041c90d  50                   push eax
// 0041c90e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0041c916  c70600000000         mov dword ptr [esi], 0
// 0041c91c  e8cfd91e00           call 0x60a2f0
// 0041c921  83c404               add esp, 4
// 0041c924  84c0                 test al, al
// 0041c926  7522                 jne 0x41c94a
// 0041c928  6a30                 push 0x30
// 0041c92a  e8f13f2800           call 0x6a0920
// 0041c92f  8d4c241c             lea ecx, [esp + 0x1c]
// 0041c933  8bf8                 mov edi, eax
// 0041c935  51                   push ecx
// 0041c936  57                   push edi
// 0041c937  e8d4c6ffff           call 0x419010
// 0041c93c  83c40c               add esp, 0xc
// 0041c93f  897e08               mov dword ptr [esi + 8], edi
// 0041c942  c70630ee8000         mov dword ptr [esi], 0x80ee30
// 0041c948  eb06                 jmp 0x41c950
// 0041c94a  c70600000000         mov dword ptr [esi], 0
// 0041c950  8d4c2420             lea ecx, [esp + 0x20]
// 0041c954  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0041c95c  e8dfad0700           call 0x497740
// 0041c961  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041c965  5f                   pop edi
// 0041c966  8bc6                 mov eax, esi
// 0041c968  64890d00000000       mov dword ptr fs:[0], ecx
// 0041c96f  5e                   pop esi
// 0041c970  83c40c               add esp, 0xc
// 0041c973  c23400               ret 0x34

struct Shared {
    unsigned int object;
    unsigned int control;
    ~Shared();
};

struct Argument {
    unsigned int prefix[2];
    Shared shared;
    unsigned char remainder[36];
};

extern bool __cdecl func_0060a2f0(...);
extern void* __cdecl allocate(unsigned int);
extern void __cdecl construct(void*, const Argument*);

struct S {
    const void* manager;
    unsigned int reserved;
    void* storage;

    S(Argument value);
};

S::S(Argument value)
{
    manager = 0;
    if (!func_0060a2f0(&value)) {
        void* p = allocate(48);
        construct(p, &value);
        storage = p;
        manager = reinterpret_cast<const void*>(0x0080ee30);
    } else {
        manager = 0;
    }
}

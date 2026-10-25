// from server: 100% by king_originala
// roc 2008-06 005c2f40  unit: RBX::VDebrisService::?$FactoryProduct::Creator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c2f40
//
// 005c2f40  55                   push ebp
// 005c2f41  8bec                 mov ebp, esp
// 005c2f43  6aff                 push -1
// 005c2f45  6890467d00           push 0x7d4690
// 005c2f4a  64a100000000         mov eax, dword ptr fs:[0]
// 005c2f50  50                   push eax
// 005c2f51  64892500000000       mov dword ptr fs:[0], esp
// 005c2f58  51                   push ecx
// 005c2f59  53                   push ebx
// 005c2f5a  56                   push esi
// 005c2f5b  57                   push edi
// 005c2f5c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c2f5f  8bf1                 mov esi, ecx
// 005c2f61  6a14                 push 0x14
// 005c2f63  c70600000000         mov dword ptr [esi], 0
// 005c2f69  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c2f70  e8abd90d00           call 0x6a0920
// 005c2f75  83c404               add esp, 4
// 005c2f78  85c0                 test eax, eax
// 005c2f7a  7419                 je 0x5c2f95
// 005c2f7c  b901000000           mov ecx, 1
// 005c2f81  894804               mov dword ptr [eax + 4], ecx
// 005c2f84  894808               mov dword ptr [eax + 8], ecx
// 005c2f87  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c2f8a  c700988a8300         mov dword ptr [eax], 0x838a98
// 005c2f90  89480c               mov dword ptr [eax + 0xc], ecx
// 005c2f93  eb02                 jmp 0x5c2f97
// 005c2f95  33c0                 xor eax, eax
// 005c2f97  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c2f9a  8906                 mov dword ptr [esi], eax
// 005c2f9c  5f                   pop edi
// 005c2f9d  8bc6                 mov eax, esi
// 005c2f9f  5e                   pop esi
// 005c2fa0  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2fa7  5b                   pop ebx
// 005c2fa8  8be5                 mov esp, ebp
// 005c2faa  5d                   pop ebp
// 005c2fab  c20800               ret 8

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern const unsigned int controlBlockTable[];

struct Object {
    virtual ~Object();
};

struct Deleter {
    void operator()(Object* p) const { delete p; }
};

struct ControlBlock {
    const unsigned int* table;
    long strongCount;
    long weakCount;
    Object* object;
    Deleter deleter;

    ControlBlock(Object* p, Deleter d);
};

inline ControlBlock::ControlBlock(Object* p, Deleter d)
    : table(controlBlockTable), strongCount(1), weakCount(1),
      object(p), deleter(d)
{
}

struct SharedCount {
    ControlBlock* block;
    SharedCount(Object* p, Deleter d);
};

SharedCount::SharedCount(Object* p, Deleter d) : block(0)
{
    try {
        block = new ControlBlock(p, d);
    } catch (...) {
        d(p);
        throw;
    }
}

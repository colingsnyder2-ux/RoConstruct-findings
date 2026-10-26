// from server: 100% by king_originala
// roc 2008-06 0041e880  unit: RBX::VTexture::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041e880
//
// 0041e880  55                   push ebp
// 0041e881  8bec                 mov ebp, esp
// 0041e883  6aff                 push -1
// 0041e885  6820e57b00           push 0x7be520
// 0041e88a  64a100000000         mov eax, dword ptr fs:[0]
// 0041e890  50                   push eax
// 0041e891  64892500000000       mov dword ptr fs:[0], esp
// 0041e898  51                   push ecx
// 0041e899  53                   push ebx
// 0041e89a  56                   push esi
// 0041e89b  57                   push edi
// 0041e89c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0041e89f  8bf1                 mov esi, ecx
// 0041e8a1  6a14                 push 0x14
// 0041e8a3  c70600000000         mov dword ptr [esi], 0
// 0041e8a9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0041e8b0  e86b202800           call 0x6a0920
// 0041e8b5  83c404               add esp, 4
// 0041e8b8  85c0                 test eax, eax
// 0041e8ba  7419                 je 0x41e8d5
// 0041e8bc  b901000000           mov ecx, 1
// 0041e8c1  894804               mov dword ptr [eax + 4], ecx
// 0041e8c4  894808               mov dword ptr [eax + 8], ecx
// 0041e8c7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0041e8ca  c700ccf18000         mov dword ptr [eax], 0x80f1cc
// 0041e8d0  89480c               mov dword ptr [eax + 0xc], ecx
// 0041e8d3  eb02                 jmp 0x41e8d7
// 0041e8d5  33c0                 xor eax, eax
// 0041e8d7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0041e8da  8906                 mov dword ptr [esi], eax
// 0041e8dc  5f                   pop edi
// 0041e8dd  8bc6                 mov eax, esi
// 0041e8df  5e                   pop esi
// 0041e8e0  64890d00000000       mov dword ptr fs:[0], ecx
// 0041e8e7  5b                   pop ebx
// 0041e8e8  8be5                 mov esp, ebp
// 0041e8ea  5d                   pop ebp
// 0041e8eb  c20800               ret 8
// 0041e8ee  8b5508               mov edx, dword ptr [ebp + 8]
// 0041e8f1  52                   push edx
// 0041e8f2  8d4d0c               lea ecx, [ebp + 0xc]
// 0041e8f5  e83675feff           call 0x405e30
// 0041e8fa  6a00                 push 0
// 0041e8fc  6a00                 push 0
// 0041e8fe  e8892c2800           call 0x6a158c

void* __cdecl operator new(unsigned int);
extern void* controlTable[];

struct Deleter {};

struct ControlBlock {
    void** table;
    long strongCount;
    long weakCount;
    void* object;
    unsigned char deleter;

    ControlBlock(void* value, Deleter);
};

inline ControlBlock::ControlBlock(void* value, Deleter)
{
    strongCount = 1;
    weakCount = 1;
    table = controlTable;
    object = value;
}

struct S {
    ControlBlock* control;
    S(void* object, Deleter deleter);
};

S::S(void* object, Deleter deleter) : control(0)
{
    try {
        control = new ControlBlock(object, deleter);
    }
    catch (...) {
        throw;
    }
}

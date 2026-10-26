// from server: 100% by king_originala
// roc 2008-06 00414d00  unit: RBX::VScript::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00414d00
//
// 00414d00  55                   push ebp
// 00414d01  8bec                 mov ebp, esp
// 00414d03  6aff                 push -1
// 00414d05  6880d97b00           push 0x7bd980
// 00414d0a  64a100000000         mov eax, dword ptr fs:[0]
// 00414d10  50                   push eax
// 00414d11  64892500000000       mov dword ptr fs:[0], esp
// 00414d18  51                   push ecx
// 00414d19  53                   push ebx
// 00414d1a  56                   push esi
// 00414d1b  57                   push edi
// 00414d1c  8965f0               mov dword ptr [ebp - 0x10], esp
// 00414d1f  8bf1                 mov esi, ecx
// 00414d21  6a14                 push 0x14
// 00414d23  c70600000000         mov dword ptr [esi], 0
// 00414d29  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00414d30  e8ebbb2800           call 0x6a0920
// 00414d35  83c404               add esp, 4
// 00414d38  85c0                 test eax, eax
// 00414d3a  7419                 je 0x414d55
// 00414d3c  b901000000           mov ecx, 1
// 00414d41  894804               mov dword ptr [eax + 4], ecx
// 00414d44  894808               mov dword ptr [eax + 8], ecx
// 00414d47  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00414d4a  c700ece98000         mov dword ptr [eax], 0x80e9ec
// 00414d50  89480c               mov dword ptr [eax + 0xc], ecx
// 00414d53  eb02                 jmp 0x414d57
// 00414d55  33c0                 xor eax, eax
// 00414d57  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00414d5a  8906                 mov dword ptr [esi], eax
// 00414d5c  5f                   pop edi
// 00414d5d  8bc6                 mov eax, esi
// 00414d5f  5e                   pop esi
// 00414d60  64890d00000000       mov dword ptr fs:[0], ecx
// 00414d67  5b                   pop ebx
// 00414d68  8be5                 mov esp, ebp
// 00414d6a  5d                   pop ebp
// 00414d6b  c20800               ret 8
// 00414d6e  8b5508               mov edx, dword ptr [ebp + 8]
// 00414d71  52                   push edx
// 00414d72  8d4d0c               lea ecx, [ebp + 0xc]
// 00414d75  e8b610ffff           call 0x405e30
// 00414d7a  6a00                 push 0
// 00414d7c  6a00                 push 0
// 00414d7e  e809c82800           call 0x6a158c

void* __cdecl operator new(unsigned int);

struct Product;

struct Deleter {
    void operator()(Product*) const;
};

struct ControlBlock {
    long strongCount;
    long weakCount;
    Product* object;
    Deleter deleter;

    ControlBlock(Product* p, Deleter d)
        : strongCount(1), weakCount(1), object(p), deleter(d) {}

    virtual ~ControlBlock();
    virtual void dispose();
    virtual void destroy();
    virtual void* getDeleter(const void*);
};

struct SharedCount {
    ControlBlock* block;

    SharedCount(Product* p, Deleter d);
};

SharedCount::SharedCount(Product* p, Deleter d) : block(0)
{
    try {
        block = new ControlBlock(p, d);
    } catch (...) {
        d(p);
        throw;
    }
}

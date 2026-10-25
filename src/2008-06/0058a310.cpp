// from server: 100% by king_originala
// roc 2008-06 0058a310  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058a310
//
// 0058a310  55                   push ebp
// 0058a311  8bec                 mov ebp, esp
// 0058a313  6aff                 push -1
// 0058a315  6811167d00           push 0x7d1611
// 0058a31a  64a100000000         mov eax, dword ptr fs:[0]
// 0058a320  50                   push eax
// 0058a321  64892500000000       mov dword ptr fs:[0], esp
// 0058a328  83ec0c               sub esp, 0xc
// 0058a32b  53                   push ebx
// 0058a32c  56                   push esi
// 0058a32d  57                   push edi
// 0058a32e  8965f0               mov dword ptr [ebp - 0x10], esp
// 0058a331  6a4c                 push 0x4c
// 0058a333  e8e8651100           call 0x6a0920
// 0058a338  8bf0                 mov esi, eax
// 0058a33a  83c404               add esp, 4
// 0058a33d  8975ec               mov dword ptr [ebp - 0x14], esi
// 0058a340  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0058a347  8975e8               mov dword ptr [ebp - 0x18], esi
// 0058a34a  c645fc01             mov byte ptr [ebp - 4], 1
// 0058a34e  85f6                 test esi, esi
// 0058a350  742f                 je 0x58a381
// 0058a352  8b4508               mov eax, dword ptr [ebp + 8]
// 0058a355  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0058a358  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0058a35b  8906                 mov dword ptr [esi], eax
// 0058a35d  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0058a360  894e04               mov dword ptr [esi + 4], ecx
// 0058a363  895608               mov dword ptr [esi + 8], edx
// 0058a366  8b08                 mov ecx, dword ptr [eax]
// 0058a368  83c004               add eax, 4
// 0058a36b  894e0c               mov dword ptr [esi + 0xc], ecx
// 0058a36e  50                   push eax
// 0058a36f  8d4e10               lea ecx, [esi + 0x10]
// 0058a372  e859f9ffff           call 0x589cd0
// 0058a377  8a5518               mov dl, byte ptr [ebp + 0x18]
// 0058a37a  885648               mov byte ptr [esi + 0x48], dl
// 0058a37d  c6464900             mov byte ptr [esi + 0x49], 0
// 0058a381  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0058a384  5f                   pop edi
// 0058a385  8bc6                 mov eax, esi
// 0058a387  5e                   pop esi
// 0058a388  64890d00000000       mov dword ptr fs:[0], ecx
// 0058a38f  5b                   pop ebx
// 0058a390  8be5                 mov esp, ebp
// 0058a392  5d                   pop ebp
// 0058a393  c21400               ret 0x14

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);
void __cdecl operator delete(void*, void*);

__forceinline void* __cdecl operator new(unsigned int, void* p)
{
    return p;
}

struct Payload {
    char data[56];
    Payload(const Payload&);
};

struct Input {
    unsigned long value;
    Payload payload;
};

struct Product {
    unsigned long first;
    unsigned long second;
    unsigned long third;
    unsigned long value;
    Payload payload;
    unsigned char flag;
    unsigned char reserved;

    Product(unsigned long, unsigned long, unsigned long,
            const Input&, unsigned char);
};

__forceinline Product::Product(unsigned long a, unsigned long b,
                               unsigned long c, const Input& input,
                               unsigned char enabled)
    : first(a), second(b), third(c), value(input.value),
      payload(input.payload), flag(enabled), reserved(0)
{
}

Product* __stdcall createProduct(unsigned long a, unsigned long b,
                                 unsigned long c, const Input& input,
                                 unsigned char enabled)
{
    void* storage = operator new(sizeof(Product));
    try {
        new (storage) Product(a, b, c, input, enabled);
    }
    catch (...) {
        operator delete(storage);
        throw;
    }
    return static_cast<Product*>(storage);
}

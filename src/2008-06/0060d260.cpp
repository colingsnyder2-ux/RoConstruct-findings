// from server: 100% by king_originala
// roc 2008-06 0060d260  unit: RBX::BallBlockContact  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060d260
//
// 0060d260  6aff                 push -1
// 0060d262  683bf47b00           push 0x7bf43b
// 0060d267  64a100000000         mov eax, dword ptr fs:[0]
// 0060d26d  50                   push eax
// 0060d26e  64892500000000       mov dword ptr fs:[0], esp
// 0060d275  51                   push ecx
// 0060d276  53                   push ebx
// 0060d277  56                   push esi
// 0060d278  57                   push edi
// 0060d279  688c000000           push 0x8c
// 0060d27e  8bf1                 mov esi, ecx
// 0060d280  e89b360900           call 0x6a0920
// 0060d285  83c404               add esp, 4
// 0060d288  8944240c             mov dword ptr [esp + 0xc], eax
// 0060d28c  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0060d290  33db                 xor ebx, ebx
// 0060d292  895c2418             mov dword ptr [esp + 0x18], ebx
// 0060d296  3bc3                 cmp eax, ebx
// 0060d298  740b                 je 0x60d2a5
// 0060d29a  56                   push esi
// 0060d29b  57                   push edi
// 0060d29c  8bc8                 mov ecx, eax
// 0060d29e  e83de20400           call 0x65b4e0
// 0060d2a3  eb02                 jmp 0x60d2a7
// 0060d2a5  33c0                 xor eax, eax
// 0060d2a7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0060d2ab  897e04               mov dword ptr [esi + 4], edi
// 0060d2ae  8906                 mov dword ptr [esi], eax
// 0060d2b0  895e0c               mov dword ptr [esi + 0xc], ebx
// 0060d2b3  895e10               mov dword ptr [esi + 0x10], ebx
// 0060d2b6  895e08               mov dword ptr [esi + 8], ebx
// 0060d2b9  5f                   pop edi
// 0060d2ba  8bc6                 mov eax, esi
// 0060d2bc  5e                   pop esi
// 0060d2bd  5b                   pop ebx
// 0060d2be  64890d00000000       mov dword ptr fs:[0], ecx
// 0060d2c5  83c410               add esp, 0x10
// 0060d2c8  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct S;

struct T {
    char storage[0x8c];
    T(int, S*);
};

struct S {
    T* data;
    int count;
    int field08;
    int field0c;
    int field10;

    S(int);
};

S::S(int n)
{
    T* p = new T(n, this);
    count = n;
    data = p;
    field0c = 0;
    field10 = 0;
    field08 = 0;
}

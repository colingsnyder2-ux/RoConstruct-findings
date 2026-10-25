// from server: 100% by king_originala
// roc 2008-06 0060ccf0  unit: RBX::BallBlockContact  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060ccf0
//
// 0060ccf0  6aff                 push -1
// 0060ccf2  68cb8b7d00           push 0x7d8bcb
// 0060ccf7  64a100000000         mov eax, dword ptr fs:[0]
// 0060ccfd  50                   push eax
// 0060ccfe  64892500000000       mov dword ptr fs:[0], esp
// 0060cd05  51                   push ecx
// 0060cd06  53                   push ebx
// 0060cd07  56                   push esi
// 0060cd08  8bf1                 mov esi, ecx
// 0060cd0a  57                   push edi
// 0060cd0b  8974240c             mov dword ptr [esp + 0xc], esi
// 0060cd0f  8b3e                 mov edi, dword ptr [esi]
// 0060cd11  33db                 xor ebx, ebx
// 0060cd13  895c2418             mov dword ptr [esp + 0x18], ebx
// 0060cd17  3bfb                 cmp edi, ebx
// 0060cd19  7410                 je 0x60cd2b
// 0060cd1b  8bcf                 mov ecx, edi
// 0060cd1d  e88ee40400           call 0x65b1b0
// 0060cd22  57                   push edi
// 0060cd23  e852390900           call 0x6a067a
// 0060cd28  83c404               add esp, 4
// 0060cd2b  8b4608               mov eax, dword ptr [esi + 8]
// 0060cd2e  50                   push eax
// 0060cd2f  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0060cd37  e8e4afefff           call 0x507d20
// 0060cd3c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060cd40  83c404               add esp, 4
// 0060cd43  895e08               mov dword ptr [esi + 8], ebx
// 0060cd46  895e0c               mov dword ptr [esi + 0xc], ebx
// 0060cd49  895e10               mov dword ptr [esi + 0x10], ebx
// 0060cd4c  5f                   pop edi
// 0060cd4d  5e                   pop esi
// 0060cd4e  5b                   pop ebx
// 0060cd4f  64890d00000000       mov dword ptr fs:[0], ecx
// 0060cd56  83c410               add esp, 0x10
// 0060cd59  c3                   ret 

struct Object {
    ~Object();
};

void __cdecl operator delete(void*);

namespace G3D {
    struct System {
        static void __cdecl alignedFree(void*);
    };
}

struct Buffer {
    void* data;
    int size;
    int capacity;
    ~Buffer();
};

__forceinline Buffer::~Buffer()
{
    G3D::System::alignedFree(data);
    data = 0;
    size = 0;
    capacity = 0;
}

struct BallBlockContact {
    Object* object;
    int reserved;
    Buffer buffer;
    ~BallBlockContact();
};

BallBlockContact::~BallBlockContact()
{
    delete object;
}

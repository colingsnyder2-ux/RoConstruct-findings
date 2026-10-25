// from server: 100% by king_originala
// roc 2008-06 0062e000  unit: RBX::GeometryService  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062e000
//
// 0062e000  6aff                 push -1
// 0062e002  68789b7d00           push 0x7d9b78
// 0062e007  64a100000000         mov eax, dword ptr fs:[0]
// 0062e00d  50                   push eax
// 0062e00e  64892500000000       mov dword ptr fs:[0], esp
// 0062e015  51                   push ecx
// 0062e016  56                   push esi
// 0062e017  8bf1                 mov esi, ecx
// 0062e019  57                   push edi
// 0062e01a  89742408             mov dword ptr [esp + 8], esi
// 0062e01e  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0062e024  33ff                 xor edi, edi
// 0062e026  50                   push eax
// 0062e027  897c2418             mov dword ptr [esp + 0x18], edi
// 0062e02b  e8f09cedff           call 0x507d20
// 0062e030  83c404               add esp, 4
// 0062e033  8bce                 mov ecx, esi
// 0062e035  89be34010000         mov dword ptr [esi + 0x134], edi
// 0062e03b  89be38010000         mov dword ptr [esi + 0x138], edi
// 0062e041  89be3c010000         mov dword ptr [esi + 0x13c], edi
// 0062e047  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0062e04f  e89cf8ffff           call 0x62d8f0
// 0062e054  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062e058  5f                   pop edi
// 0062e059  5e                   pop esi
// 0062e05a  64890d00000000       mov dword ptr fs:[0], ecx
// 0062e061  83c410               add esp, 0x10
// 0062e064  c3                   ret 

namespace G3D {
struct System {
    static void __cdecl alignedFree(void *);
};
}

struct Base {
    unsigned char storage[0x134];
    ~Base();
};

struct S : Base {
    void *data;
    int size;
    int capacity;

    ~S();
};

S::~S()
{
    G3D::System::alignedFree(data);
    data = 0;
    size = 0;
    capacity = 0;
}

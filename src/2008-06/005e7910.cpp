// from server: 100% by king_originala
// roc 2008-06 005e7910  unit: RBX::Geometry  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7910
//
// 005e7910  6aff                 push -1
// 005e7912  688b687d00           push 0x7d688b
// 005e7917  64a100000000         mov eax, dword ptr fs:[0]
// 005e791d  50                   push eax
// 005e791e  64892500000000       mov dword ptr fs:[0], esp
// 005e7925  51                   push ecx
// 005e7926  56                   push esi
// 005e7927  8bf1                 mov esi, ecx
// 005e7929  57                   push edi
// 005e792a  89742408             mov dword ptr [esp + 8], esi
// 005e792e  8b4610               mov eax, dword ptr [esi + 0x10]
// 005e7931  33ff                 xor edi, edi
// 005e7933  50                   push eax
// 005e7934  897c2418             mov dword ptr [esp + 0x18], edi
// 005e7938  e8e303f2ff           call 0x507d20
// 005e793d  897e10               mov dword ptr [esi + 0x10], edi
// 005e7940  897e14               mov dword ptr [esi + 0x14], edi
// 005e7943  897e18               mov dword ptr [esi + 0x18], edi
// 005e7946  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e7949  51                   push ecx
// 005e794a  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005e7952  e8c903f2ff           call 0x507d20
// 005e7957  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e795b  83c408               add esp, 8
// 005e795e  897e04               mov dword ptr [esi + 4], edi
// 005e7961  897e08               mov dword ptr [esi + 8], edi
// 005e7964  897e0c               mov dword ptr [esi + 0xc], edi
// 005e7967  5f                   pop edi
// 005e7968  5e                   pop esi
// 005e7969  64890d00000000       mov dword ptr fs:[0], ecx
// 005e7970  83c410               add esp, 0x10
// 005e7973  c3                   ret 

namespace G3D {
struct System {
    static void __cdecl alignedFree(void*);
};

struct Array {
    void* data;
    int count;
    int capacity;
    ~Array();
};

inline Array::~Array()
{
    System::alignedFree(data);
    data = 0;
    count = 0;
    capacity = 0;
}
}

namespace RBX {
struct Geometry {
    int header;
    G3D::Array a;
    G3D::Array b;
    ~Geometry();
};

Geometry::~Geometry()
{
}
}

// from server: 100% by king_originala
// roc 2008-06 0056c8f0  unit: G3D::VVector3::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056c8f0
//
// 0056c8f0  6aff                 push -1
// 0056c8f2  6898987d00           push 0x7d9898
// 0056c8f7  64a100000000         mov eax, dword ptr fs:[0]
// 0056c8fd  50                   push eax
// 0056c8fe  64892500000000       mov dword ptr fs:[0], esp
// 0056c905  51                   push ecx
// 0056c906  53                   push ebx
// 0056c907  56                   push esi
// 0056c908  57                   push edi
// 0056c909  8bf9                 mov edi, ecx
// 0056c90b  897c240c             mov dword ptr [esp + 0xc], edi
// 0056c90f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0056c913  8d7704               lea esi, [edi + 4]
// 0056c916  53                   push ebx
// 0056c917  8bce                 mov ecx, esi
// 0056c919  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0056c921  c70784f68200         mov dword ptr [edi], 0x82f684
// 0056c927  e8f468faff           call 0x513220
// 0056c92c  d94324               fld dword ptr [ebx + 0x24]
// 0056c92f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056c933  d95e24               fstp dword ptr [esi + 0x24]
// 0056c936  d94328               fld dword ptr [ebx + 0x28]
// 0056c939  8bc7                 mov eax, edi
// 0056c93b  d95e28               fstp dword ptr [esi + 0x28]
// 0056c93e  5f                   pop edi
// 0056c93f  d9432c               fld dword ptr [ebx + 0x2c]
// 0056c942  d95e2c               fstp dword ptr [esi + 0x2c]
// 0056c945  5e                   pop esi
// 0056c946  5b                   pop ebx
// 0056c947  64890d00000000       mov dword ptr fs:[0], ecx
// 0056c94e  83c410               add esp, 0x10
// 0056c951  c20400               ret 4

struct Block
{
    unsigned int data[9];
    Block(const Block&);
};

struct Camera
{
    Block block;
    float x;
    float y;
    float z;

    Camera(const Camera&);
};

struct Base
{
    virtual ~Base();
};

struct Holder : Base
{
    Camera camera;

    Holder(const Camera&);
    virtual ~Holder();
};

inline Camera::Camera(const Camera& source)
    : block(source.block)
{
    x = source.x;
    y = source.y;
    z = source.z;
}

Holder::Holder(const Camera& source)
    : camera(source)
{
}

// from server: 100% by king_originala
// roc 2008-06 007ace40  unit: RBX::RenderNew::Material  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ace40
//
// 007ace40  6aff                 push -1
// 007ace42  68bed77e00           push 0x7ed7be
// 007ace47  64a100000000         mov eax, dword ptr fs:[0]
// 007ace4d  50                   push eax
// 007ace4e  64892500000000       mov dword ptr fs:[0], esp
// 007ace55  51                   push ecx
// 007ace56  56                   push esi
// 007ace57  8bf1                 mov esi, ecx
// 007ace59  57                   push edi
// 007ace5a  89742408             mov dword ptr [esp + 8], esi
// 007ace5e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007ace62  c706e44a8700         mov dword ptr [esi], 0x874ae4
// 007ace68  8a4704               mov al, byte ptr [edi + 4]
// 007ace6b  884604               mov byte ptr [esi + 4], al
// 007ace6e  8d4e08               lea ecx, [esi + 8]
// 007ace71  c70100000000         mov dword ptr [ecx], 0
// 007ace77  8b5708               mov edx, dword ptr [edi + 8]
// 007ace7a  52                   push edx
// 007ace7b  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007ace83  e818c1deff           call 0x598fa0
// 007ace88  8d4e0c               lea ecx, [esi + 0xc]
// 007ace8b  c70100000000         mov dword ptr [ecx], 0
// 007ace91  8b470c               mov eax, dword ptr [edi + 0xc]
// 007ace94  50                   push eax
// 007ace95  c644241801           mov byte ptr [esp + 0x18], 1
// 007ace9a  e801c1deff           call 0x598fa0
// 007ace9f  d94710               fld dword ptr [edi + 0x10]
// 007acea2  d95e10               fstp dword ptr [esi + 0x10]
// 007acea5  83c72c               add edi, 0x2c
// 007acea8  d947e8               fld dword ptr [edi - 0x18]
// 007aceab  57                   push edi
// 007aceac  d95e14               fstp dword ptr [esi + 0x14]
// 007aceaf  8d4e2c               lea ecx, [esi + 0x2c]
// 007aceb2  d947ec               fld dword ptr [edi - 0x14]
// 007aceb5  c644241802           mov byte ptr [esp + 0x18], 2
// 007aceba  d95e18               fstp dword ptr [esi + 0x18]
// 007acebd  d947f0               fld dword ptr [edi - 0x10]
// 007acec0  d95e1c               fstp dword ptr [esi + 0x1c]
// 007acec3  d947f4               fld dword ptr [edi - 0xc]
// 007acec6  d95e20               fstp dword ptr [esi + 0x20]
// 007acec9  d947f8               fld dword ptr [edi - 8]
// 007acecc  d95e24               fstp dword ptr [esi + 0x24]
// 007acecf  d947fc               fld dword ptr [edi - 4]
// 007aced2  d95e28               fstp dword ptr [esi + 0x28]
// 007aced5  ff15b8438000         call dword ptr [0x8043b8]
// 007acedb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007acedf  5f                   pop edi
// 007acee0  8bc6                 mov eax, esi
// 007acee2  5e                   pop esi
// 007acee3  64890d00000000       mov dword ptr fs:[0], ecx
// 007aceea  83c410               add esp, 0x10
// 007aceed  c20400               ret 4

struct Reference
{
    void* value;

    Reference(const Reference& other) : value(0) { assign(other.value); }
    ~Reference();
    void __thiscall assign(void*);
};

namespace Ogre
{
    struct MaterialPtr;
}

extern Ogre::MaterialPtr* (__thiscall *copyMaterialPtr)(
    Ogre::MaterialPtr*, const Ogre::MaterialPtr&);

namespace Ogre
{
    struct MaterialPtr
    {
        void* object;
        void* count;

        MaterialPtr(const MaterialPtr& other)
        {
            copyMaterialPtr(this, other);
        }

        ~MaterialPtr();
    };
}

struct MaterialBase
{
    virtual ~MaterialBase();
};

struct Material : MaterialBase
{
    unsigned char kind;
    Reference first;
    Reference second;
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    float g;
    Ogre::MaterialPtr material;

    Material(const Material&);
    virtual ~Material();
};

Material::Material(const Material& other)
    : kind(other.kind),
      first(other.first),
      second(other.second),
      a(other.a),
      b(other.b),
      c(other.c),
      d(other.d),
      e(other.e),
      f(other.f),
      g(other.g),
      material(other.material)
{
}

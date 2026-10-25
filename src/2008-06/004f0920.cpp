// from server: 100% by king_originala
// roc 2008-06 004f0920  unit: RBX::RenderBase::VMaterialBase::?$WeakReferenceCountedPointer  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f0920
//
// 004f0920  6aff                 push -1
// 004f0922  6844ad7c00           push 0x7cad44
// 004f0927  64a100000000         mov eax, dword ptr fs:[0]
// 004f092d  50                   push eax
// 004f092e  64892500000000       mov dword ptr fs:[0], esp
// 004f0935  83ec20               sub esp, 0x20
// 004f0938  53                   push ebx
// 004f0939  55                   push ebp
// 004f093a  56                   push esi
// 004f093b  8bf1                 mov esi, ecx
// 004f093d  33c0                 xor eax, eax
// 004f093f  57                   push edi
// 004f0940  89742410             mov dword ptr [esp + 0x10], esi
// 004f0944  8906                 mov dword ptr [esi], eax
// 004f0946  8d7e04               lea edi, [esi + 4]
// 004f0949  89442438             mov dword ptr [esp + 0x38], eax
// 004f094d  8907                 mov dword ptr [edi], eax
// 004f094f  8d6e08               lea ebp, [esi + 8]
// 004f0952  894500               mov dword ptr [ebp], eax
// 004f0955  89460c               mov dword ptr [esi + 0xc], eax
// 004f0958  8d442414             lea eax, [esp + 0x14]
// 004f095c  6828708200           push 0x827028
// 004f0961  50                   push eax
// 004f0962  c644244003           mov byte ptr [esp + 0x40], 3
// 004f0967  e844c70600           call 0x55d0b0
// 004f096c  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 004f0970  6a01                 push 1
// 004f0972  50                   push eax
// 004f0973  53                   push ebx
// 004f0974  c644244c04           mov byte ptr [esp + 0x4c], 4
// 004f0979  e8a20f0600           call 0x551920
// 004f097e  83c414               add esp, 0x14
// 004f0981  50                   push eax
// 004f0982  8bcf                 mov ecx, edi
// 004f0984  e817860a00           call 0x598fa0
// 004f0989  8d4c2414             lea ecx, [esp + 0x14]
// 004f098d  c644243803           mov byte ptr [esp + 0x38], 3
// 004f0992  ff1568248000         call dword ptr [0x802468]
// 004f0998  8d4c2414             lea ecx, [esp + 0x14]
// 004f099c  6810708200           push 0x827010
// 004f09a1  51                   push ecx
// 004f09a2  e809c70600           call 0x55d0b0
// 004f09a7  6a00                 push 0
// 004f09a9  50                   push eax
// 004f09aa  53                   push ebx
// 004f09ab  c644244c05           mov byte ptr [esp + 0x4c], 5
// 004f09b0  e86b0f0600           call 0x551920
// 004f09b5  83c414               add esp, 0x14
// 004f09b8  50                   push eax
// 004f09b9  8bcd                 mov ecx, ebp
// 004f09bb  e8e0850a00           call 0x598fa0
// 004f09c0  8d4c2414             lea ecx, [esp + 0x14]
// 004f09c4  c644243803           mov byte ptr [esp + 0x38], 3
// 004f09c9  ff1568248000         call dword ptr [0x802468]
// 004f09cf  8d542414             lea edx, [esp + 0x14]
// 004f09d3  68f46f8200           push 0x826ff4
// 004f09d8  52                   push edx
// 004f09d9  e8d2c60600           call 0x55d0b0
// 004f09de  50                   push eax
// 004f09df  53                   push ebx
// 004f09e0  c644244806           mov byte ptr [esp + 0x48], 6
// 004f09e5  e846100600           call 0x551a30
// 004f09ea  83c410               add esp, 0x10
// 004f09ed  50                   push eax
// 004f09ee  8bce                 mov ecx, esi
// 004f09f0  e8ab850a00           call 0x598fa0
// 004f09f5  8d4c2414             lea ecx, [esp + 0x14]
// 004f09f9  c644243803           mov byte ptr [esp + 0x38], 3
// 004f09fe  ff1568248000         call dword ptr [0x802468]
// 004f0a04  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004f0a08  5f                   pop edi
// 004f0a09  8bc6                 mov eax, esi
// 004f0a0b  5e                   pop esi
// 004f0a0c  5d                   pop ebp
// 004f0a0d  5b                   pop ebx
// 004f0a0e  64890d00000000       mov dword ptr fs:[0], ecx
// 004f0a15  83c42c               add esp, 0x2c
// 004f0a18  c20400               ret 4

struct String;
typedef void (__thiscall *DestroyStringFunction)(String *);
extern DestroyStringFunction destroyString;

struct String
{
    char storage[28];
    ~String();
};

inline String::~String()
{
    destroyString(this);
}

extern String __cdecl makeString(const char *);
extern void *__cdecl loadTexture(void *, const String &, bool);
extern void *__cdecl loadStrip(void *, const String &);

struct Reference
{
    void *value;
    Reference();
    ~Reference();
    void operator=(void *);
};

inline Reference::Reference() : value(0)
{
}

struct Material
{
    Reference strip;
    Reference surfaces;
    Reference john;
    Reference extra;

    Material(void *);
};

Material::Material(void *context)
{
    surfaces = loadTexture(
        context, makeString(reinterpret_cast<const char *>(0x827028)), true);
    john = loadTexture(
        context, makeString(reinterpret_cast<const char *>(0x827010)), false);
    strip = loadStrip(
        context, makeString(reinterpret_cast<const char *>(0x826ff4)));
}

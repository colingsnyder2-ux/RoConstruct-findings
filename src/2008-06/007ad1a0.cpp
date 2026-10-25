// from server: 100% by king_originala
// roc 2008-06 007ad1a0  unit: RBX::RenderNew::Material::Level  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ad1a0
//
// 007ad1a0  6aff                 push -1
// 007ad1a2  68bed77e00           push 0x7ed7be
// 007ad1a7  64a100000000         mov eax, dword ptr fs:[0]
// 007ad1ad  50                   push eax
// 007ad1ae  64892500000000       mov dword ptr fs:[0], esp
// 007ad1b5  51                   push ecx
// 007ad1b6  56                   push esi
// 007ad1b7  8bf1                 mov esi, ecx
// 007ad1b9  89742404             mov dword ptr [esp + 4], esi
// 007ad1bd  c706e44a8700         mov dword ptr [esi], 0x874ae4
// 007ad1c3  c6460401             mov byte ptr [esi + 4], 1
// 007ad1c7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007ad1cf  c7460800000000       mov dword ptr [esi + 8], 0
// 007ad1d6  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 007ad1dd  c644241002           mov byte ptr [esp + 0x10], 2
// 007ad1e2  e87978d6ff           call 0x514a60
// 007ad1e7  d900                 fld dword ptr [eax]
// 007ad1e9  d95e10               fstp dword ptr [esi + 0x10]
// 007ad1ec  6a00                 push 0
// 007ad1ee  d94004               fld dword ptr [eax + 4]
// 007ad1f1  8d4e2c               lea ecx, [esi + 0x2c]
// 007ad1f4  d95e14               fstp dword ptr [esi + 0x14]
// 007ad1f7  d94008               fld dword ptr [eax + 8]
// 007ad1fa  d95e18               fstp dword ptr [esi + 0x18]
// 007ad1fd  d9ee                 fldz 
// 007ad1ff  d9561c               fst dword ptr [esi + 0x1c]
// 007ad202  d95620               fst dword ptr [esi + 0x20]
// 007ad205  d95624               fst dword ptr [esi + 0x24]
// 007ad208  d95e28               fstp dword ptr [esi + 0x28]
// 007ad20b  ff15bc438000         call dword ptr [0x8043bc]
// 007ad211  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007ad215  8bc6                 mov eax, esi
// 007ad217  5e                   pop esi
// 007ad218  64890d00000000       mov dword ptr fs:[0], ecx
// 007ad21f  83c410               add esp, 0x10
// 007ad222  c3                   ret 

struct Vector3 {
    float x, y, z;
    Vector3(const Vector3&);
};

__forceinline Vector3::Vector3(const Vector3& v)
    : x(v.x), y(v.y), z(v.z)
{
}

extern const Vector3& __cdecl unitVector();

struct Pointer {
    void* value;
    Pointer();
    ~Pointer();
};

__forceinline Pointer::Pointer() : value(0)
{
}

struct Base {
    virtual ~Base();
};

struct MaterialPtr {
    void* object;
    void* count;
};

extern void (__thiscall *constructMaterialPtr)(MaterialPtr*, void*);

struct S : Base {
    bool enabled;
    Pointer object;
    Pointer count;
    Vector3 color;
    float a, b, c, d;
    MaterialPtr material;

    S();
    virtual ~S();
};

S::S()
    : enabled(true), color(unitVector()),
      a(0.0f), b(0.0f), c(0.0f), d(0.0f)
{
    constructMaterialPtr(&material, 0);
}

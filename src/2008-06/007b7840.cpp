// from server: 100% by king_originala
// roc 2008-06 007b7840  unit: RBX::RenderNew::Material::Level  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b7840
//
// 007b7840  6aff                 push -1
// 007b7842  68bed77e00           push 0x7ed7be
// 007b7847  64a100000000         mov eax, dword ptr fs:[0]
// 007b784d  50                   push eax
// 007b784e  64892500000000       mov dword ptr fs:[0], esp
// 007b7855  51                   push ecx
// 007b7856  56                   push esi
// 007b7857  8bf1                 mov esi, ecx
// 007b7859  89742404             mov dword ptr [esp + 4], esi
// 007b785d  33c0                 xor eax, eax
// 007b785f  c706e85b8700         mov dword ptr [esi], 0x875be8
// 007b7865  c6460401             mov byte ptr [esi + 4], 1
// 007b7869  89442410             mov dword ptr [esp + 0x10], eax
// 007b786d  894608               mov dword ptr [esi + 8], eax
// 007b7870  89460c               mov dword ptr [esi + 0xc], eax
// 007b7873  c644241002           mov byte ptr [esp + 0x10], 2
// 007b7878  e8e3d1d5ff           call 0x514a60
// 007b787d  d900                 fld dword ptr [eax]
// 007b787f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007b7883  d95e10               fstp dword ptr [esi + 0x10]
// 007b7886  d94004               fld dword ptr [eax + 4]
// 007b7889  d95e14               fstp dword ptr [esi + 0x14]
// 007b788c  d94008               fld dword ptr [eax + 8]
// 007b788f  8bc6                 mov eax, esi
// 007b7891  d95e18               fstp dword ptr [esi + 0x18]
// 007b7894  d9ee                 fldz 
// 007b7896  d9561c               fst dword ptr [esi + 0x1c]
// 007b7899  d95620               fst dword ptr [esi + 0x20]
// 007b789c  d95624               fst dword ptr [esi + 0x24]
// 007b789f  d95e28               fstp dword ptr [esi + 0x28]
// 007b78a2  5e                   pop esi
// 007b78a3  64890d00000000       mov dword ptr fs:[0], ecx
// 007b78aa  83c410               add esp, 0x10
// 007b78ad  c3                   ret 

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

struct S : Base {
    bool enabled;
    Pointer object;
    Pointer count;
    Vector3 color;
    float a, b, c, d;

    S();
    virtual ~S();
};

S::S()
    : enabled(true), color(unitVector()),
      a(0.0f), b(0.0f), c(0.0f), d(0.0f)
{
}

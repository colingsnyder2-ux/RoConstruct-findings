// from server: 100% by king_originala
// roc 2008-06 007b7600  unit: RBX::Render::Material  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b7600
//
// 007b7600  6aff                 push -1
// 007b7602  68f3e37e00           push 0x7ee3f3
// 007b7607  64a100000000         mov eax, dword ptr fs:[0]
// 007b760d  50                   push eax
// 007b760e  64892500000000       mov dword ptr fs:[0], esp
// 007b7615  51                   push ecx
// 007b7616  56                   push esi
// 007b7617  8bf1                 mov esi, ecx
// 007b7619  57                   push edi
// 007b761a  89742408             mov dword ptr [esp + 8], esi
// 007b761e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007b7622  c706e85b8700         mov dword ptr [esi], 0x875be8
// 007b7628  8a4704               mov al, byte ptr [edi + 4]
// 007b762b  884604               mov byte ptr [esi + 4], al
// 007b762e  8d4e08               lea ecx, [esi + 8]
// 007b7631  c70100000000         mov dword ptr [ecx], 0
// 007b7637  8b5708               mov edx, dword ptr [edi + 8]
// 007b763a  52                   push edx
// 007b763b  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007b7643  e85819deff           call 0x598fa0
// 007b7648  8d4e0c               lea ecx, [esi + 0xc]
// 007b764b  c70100000000         mov dword ptr [ecx], 0
// 007b7651  8b470c               mov eax, dword ptr [edi + 0xc]
// 007b7654  50                   push eax
// 007b7655  c644241801           mov byte ptr [esp + 0x18], 1
// 007b765a  e84119deff           call 0x598fa0
// 007b765f  d94710               fld dword ptr [edi + 0x10]
// 007b7662  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b7666  d95e10               fstp dword ptr [esi + 0x10]
// 007b7669  d94714               fld dword ptr [edi + 0x14]
// 007b766c  8bc6                 mov eax, esi
// 007b766e  d95e14               fstp dword ptr [esi + 0x14]
// 007b7671  d94718               fld dword ptr [edi + 0x18]
// 007b7674  d95e18               fstp dword ptr [esi + 0x18]
// 007b7677  d9471c               fld dword ptr [edi + 0x1c]
// 007b767a  d95e1c               fstp dword ptr [esi + 0x1c]
// 007b767d  d94720               fld dword ptr [edi + 0x20]
// 007b7680  d95e20               fstp dword ptr [esi + 0x20]
// 007b7683  d94724               fld dword ptr [edi + 0x24]
// 007b7686  d95e24               fstp dword ptr [esi + 0x24]
// 007b7689  d94728               fld dword ptr [edi + 0x28]
// 007b768c  5f                   pop edi
// 007b768d  d95e28               fstp dword ptr [esi + 0x28]
// 007b7690  5e                   pop esi
// 007b7691  64890d00000000       mov dword ptr fs:[0], ecx
// 007b7698  83c410               add esp, 0x10
// 007b769b  c20400               ret 4

struct Base {
    virtual ~Base();
};

struct Reference {
    void* pointer;
    Reference(const Reference&);
    ~Reference();
    void assign(void*);
};

inline Reference::Reference(const Reference& other) : pointer(0) {
    assign(other.pointer);
}

struct Material : Base {
    bool flag;
    Reference first;
    Reference second;
    float a, b, c, d, e, f, g;

    Material(const Material&);
    virtual ~Material();
};

Material::Material(const Material& other)
    : flag(other.flag),
      first(other.first),
      second(other.second),
      a(other.a),
      b(other.b),
      c(other.c),
      d(other.d),
      e(other.e),
      f(other.f),
      g(other.g) {
}

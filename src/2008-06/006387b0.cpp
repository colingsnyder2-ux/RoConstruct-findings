// from server: 100% by king_originala
// roc 2008-06 006387b0  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006387b0
//
// 006387b0  6aff                 push -1
// 006387b2  68d1a37d00           push 0x7da3d1
// 006387b7  64a100000000         mov eax, dword ptr fs:[0]
// 006387bd  50                   push eax
// 006387be  64892500000000       mov dword ptr fs:[0], esp
// 006387c5  83ec20               sub esp, 0x20
// 006387c8  56                   push esi
// 006387c9  8bf1                 mov esi, ecx
// 006387cb  57                   push edi
// 006387cc  89742408             mov dword ptr [esp + 8], esi
// 006387d0  e83bf7ffff           call 0x637f10
// 006387d5  8dbe30010000         lea edi, [esi + 0x130]
// 006387db  68a0d39700           push 0x97d3a0
// 006387e0  8bcf                 mov ecx, edi
// 006387e2  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006387ea  c706cc968400         mov dword ptr [esi], 0x8496cc
// 006387f0  c74610c0968400       mov dword ptr [esi + 0x10], 0x8496c0
// 006387f7  c74614b8968400       mov dword ptr [esi + 0x14], 0x8496b8
// 006387fe  c74620b0968400       mov dword ptr [esi + 0x20], 0x8496b0
// 00638805  c74624a0968400       mov dword ptr [esi + 0x24], 0x8496a0
// 0063880c  c7464490968400       mov dword ptr [esi + 0x44], 0x849690
// 00638813  c7466480968400       mov dword ptr [esi + 0x64], 0x849680
// 0063881a  c7868400000070968400 mov dword ptr [esi + 0x84], 0x849670
// 00638824  c786a400000060968400 mov dword ptr [esi + 0xa4], 0x849660
// 0063882e  c786c400000050968400 mov dword ptr [esi + 0xc4], 0x849650
// 00638838  e8e3a9edff           call 0x513220
// 0063883d  d905c4d39700         fld dword ptr [0x97d3c4]
// 00638843  d95f24               fstp dword ptr [edi + 0x24]
// 00638846  6878848100           push 0x818478
// 0063884b  d905c8d39700         fld dword ptr [0x97d3c8]
// 00638851  8d4c2410             lea ecx, [esp + 0x10]
// 00638855  d95f28               fstp dword ptr [edi + 0x28]
// 00638858  d905ccd39700         fld dword ptr [0x97d3cc]
// 0063885e  d95f2c               fstp dword ptr [edi + 0x2c]
// 00638861  ff1558248000         call dword ptr [0x802458]
// 00638867  8d44240c             lea eax, [esp + 0xc]
// 0063886b  50                   push eax
// 0063886c  8bce                 mov ecx, esi
// 0063886e  c644243401           mov byte ptr [esp + 0x34], 1
// 00638873  e81827f2ff           call 0x55af90
// 00638878  8d4c240c             lea ecx, [esp + 0xc]
// 0063887c  c644243000           mov byte ptr [esp + 0x30], 0
// 00638881  ff1568248000         call dword ptr [0x802468]
// 00638887  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0063888b  5f                   pop edi
// 0063888c  8bc6                 mov eax, esi
// 0063888e  5e                   pop esi
// 0063888f  64890d00000000       mov dword ptr fs:[0], ecx
// 00638896  83c42c               add esp, 0x2c
// 00638899  c3                   ret 

typedef void (__thiscall *StringConstruct)(void *, const char *);
typedef void (__thiscall *StringDestroy)(void *);

extern StringConstruct stringConstruct;
extern StringDestroy stringDestroy;

struct String {
    unsigned char storage[28];

    String(const char *text);
    ~String();
};

inline String::String(const char *text) {
    stringConstruct(this, text);
}

inline String::~String() {
    stringDestroy(this);
}

struct Base {
    unsigned char storage[0x130];

    Base();
    ~Base();
    void setName(const String &name);
};

struct Matrix {
    float elements[9];

    Matrix &operator=(const Matrix &other);
};

struct Frame {
    Matrix rotation;
    float translation[3];
};

struct S : Base {
    Frame frame;

    S();
};

S::S()
    : Base()
{
    Frame *f = &frame;

    *reinterpret_cast<unsigned long *>(storage + 0x00) = 0x8496cc;
    *reinterpret_cast<unsigned long *>(storage + 0x10) = 0x8496c0;
    *reinterpret_cast<unsigned long *>(storage + 0x14) = 0x8496b8;
    *reinterpret_cast<unsigned long *>(storage + 0x20) = 0x8496b0;
    *reinterpret_cast<unsigned long *>(storage + 0x24) = 0x8496a0;
    *reinterpret_cast<unsigned long *>(storage + 0x44) = 0x849690;
    *reinterpret_cast<unsigned long *>(storage + 0x64) = 0x849680;
    *reinterpret_cast<unsigned long *>(storage + 0x84) = 0x849670;
    *reinterpret_cast<unsigned long *>(storage + 0xa4) = 0x849660;
    *reinterpret_cast<unsigned long *>(storage + 0xc4) = 0x849650;

    f->rotation = *reinterpret_cast<const Matrix *>(0x97d3a0);
    f->translation[0] = *reinterpret_cast<const float *>(0x97d3c4);
    f->translation[1] = *reinterpret_cast<const float *>(0x97d3c8);
    f->translation[2] = *reinterpret_cast<const float *>(0x97d3cc);

    String name(reinterpret_cast<const char *>(0x818478));
    setName(name);
}

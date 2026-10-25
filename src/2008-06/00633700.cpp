// from server: 100% by king_originala
// roc 2008-06 00633700  unit: RBX::Network::VPlayer::?$BoundPropGetSet  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633700
//
// 00633700  8b442408             mov eax, dword ptr [esp + 8]
// 00633704  53                   push ebx
// 00633705  8b5810               mov ebx, dword ptr [eax + 0x10]
// 00633708  56                   push esi
// 00633709  8b31                 mov esi, dword ptr [ecx]
// 0063370b  57                   push edi
// 0063370c  83ec30               sub esp, 0x30
// 0063370f  8bfc                 mov edi, esp
// 00633711  89642444             mov dword ptr [esp + 0x44], esp
// 00633715  56                   push esi
// 00633716  8bcf                 mov ecx, edi
// 00633718  83c308               add ebx, 8
// 0063371b  e800fbedff           call 0x513220
// 00633720  d94624               fld dword ptr [esi + 0x24]
// 00633723  d95f24               fstp dword ptr [edi + 0x24]
// 00633726  8bcb                 mov ecx, ebx
// 00633728  d94628               fld dword ptr [esi + 0x28]
// 0063372b  d95f28               fstp dword ptr [edi + 0x28]
// 0063372e  d9462c               fld dword ptr [esi + 0x2c]
// 00633731  d95f2c               fstp dword ptr [edi + 0x2c]
// 00633734  e867feffff           call 0x6335a0
// 00633739  8b442410             mov eax, dword ptr [esp + 0x10]
// 0063373d  5f                   pop edi
// 0063373e  5e                   pop esi
// 0063373f  5b                   pop ebx
// 00633740  c20800               ret 8

struct Matrix
{
    float data[9];
    Matrix(const Matrix&);
};

struct Frame
{
    Matrix rotation;
    float x, y, z;
    Frame(const Frame&);
    ~Frame();
};

inline Frame::Frame(const Frame& other)
    : rotation(other.rotation), x(other.x), y(other.y), z(other.z)
{
}

inline Frame::~Frame()
{
}

struct Setter
{
    void set(Frame value);
};

struct Object
{
    char padding[8];
    Setter target;
};

struct Argument
{
    char padding[16];
    Object* object;
};

struct S
{
    Frame* value;
    void* f(void* result, Argument* argument);
};

void* S::f(void* result, Argument* argument)
{
    Setter* target = &argument->object->target;
    target->set(*value);
    return result;
}

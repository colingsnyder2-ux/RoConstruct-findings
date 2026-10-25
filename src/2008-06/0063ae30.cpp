// from server: 100% by king_originala
// roc 2008-06 0063ae30  unit: G3D::VVector3::V?$Value::?$SignalDesc  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063ae30
//
// 0063ae30  83ec38               sub esp, 0x38
// 0063ae33  56                   push esi
// 0063ae34  57                   push edi
// 0063ae35  85c9                 test ecx, ecx
// 0063ae37  7405                 je 0x63ae3e
// 0063ae39  8d7914               lea edi, [ecx + 0x14]
// 0063ae3c  eb02                 jmp 0x63ae40
// 0063ae3e  33ff                 xor edi, edi
// 0063ae40  8db130010000         lea esi, [ecx + 0x130]
// 0063ae46  56                   push esi
// 0063ae47  8d4c2414             lea ecx, [esp + 0x14]
// 0063ae4b  e8d083edff           call 0x513220
// 0063ae50  d94624               fld dword ptr [esi + 0x24]
// 0063ae53  d95c2434             fstp dword ptr [esp + 0x34]
// 0063ae57  57                   push edi
// 0063ae58  d94628               fld dword ptr [esi + 0x28]
// 0063ae5b  b9c4d49700           mov ecx, 0x97d4c4
// 0063ae60  d95c243c             fstp dword ptr [esp + 0x3c]
// 0063ae64  d9462c               fld dword ptr [esi + 0x2c]
// 0063ae67  d95c2440             fstp dword ptr [esp + 0x40]
// 0063ae6b  e8b007f3ff           call 0x56b620
// 0063ae70  8bf0                 mov esi, eax
// 0063ae72  85f6                 test esi, esi
// 0063ae74  7437                 je 0x63aead
// 0063ae76  83ec30               sub esp, 0x30
// 0063ae79  8bfc                 mov edi, esp
// 0063ae7b  8d442440             lea eax, [esp + 0x40]
// 0063ae7f  8964243c             mov dword ptr [esp + 0x3c], esp
// 0063ae83  50                   push eax
// 0063ae84  8bcf                 mov ecx, edi
// 0063ae86  e89583edff           call 0x513220
// 0063ae8b  d9442464             fld dword ptr [esp + 0x64]
// 0063ae8f  d95f24               fstp dword ptr [edi + 0x24]
// 0063ae92  8d4c243b             lea ecx, [esp + 0x3b]
// 0063ae96  d9442468             fld dword ptr [esp + 0x68]
// 0063ae9a  51                   push ecx
// 0063ae9b  d95f28               fstp dword ptr [edi + 0x28]
// 0063ae9e  8d4e10               lea ecx, [esi + 0x10]
// 0063aea1  d9442470             fld dword ptr [esp + 0x70]
// 0063aea5  d95f2c               fstp dword ptr [edi + 0x2c]
// 0063aea8  e853e4ffff           call 0x639300
// 0063aead  5f                   pop edi
// 0063aeae  5e                   pop esi
// 0063aeaf  83c438               add esp, 0x38
// 0063aeb2  c20400               ret 4

struct Matrix
{
    float data[9];
    Matrix(const Matrix&);
};

struct Vector
{
    float x, y, z;
    Vector(const Vector&);
};

__forceinline Vector::Vector(const Vector& other)
    : x(other.x), y(other.y), z(other.z)
{
}

struct Frame
{
    Matrix rotation;
    Vector position;
    Frame(const Frame&);
    ~Frame();
};

__forceinline Frame::Frame(const Frame& other)
    : rotation(other.rotation), position(other.position)
{
}

__forceinline Frame::~Frame()
{
}

struct Tag
{
};

struct Signal
{
    void fire(const Tag&, Frame);
};

struct Slot
{
    char padding[16];
    Signal signal;
};

struct Registry
{
    Slot* find(void*);
};

extern Registry registry;

struct S
{
    char padding[0x130];
    Frame frame;

    void f(void*);
};

void S::f(void*)
{
    void* owner = this ? reinterpret_cast<char*>(this) + 0x14 : 0;
    Frame value(frame);
    Slot* slot = registry.find(owner);
    if (slot)
    {
        Tag tag;
        slot->signal.fire(tag, value);
    }
}

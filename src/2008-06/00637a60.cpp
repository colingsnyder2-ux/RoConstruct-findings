// from server: 100% by king_originala
// roc 2008-06 00637a60  unit: RBX::VBrickColor::V?$Value::?$DescribedCreatable  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00637a60
//
// 00637a60  51                   push ecx
// 00637a61  56                   push esi
// 00637a62  83ec30               sub esp, 0x30
// 00637a65  8bf4                 mov esi, esp
// 00637a67  8d442440             lea eax, [esp + 0x40]
// 00637a6b  89642434             mov dword ptr [esp + 0x34], esp
// 00637a6f  50                   push eax
// 00637a70  8bce                 mov ecx, esi
// 00637a72  e8a9b7edff           call 0x513220
// 00637a77  d9442464             fld dword ptr [esp + 0x64]
// 00637a7b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00637a7f  d95e24               fstp dword ptr [esi + 0x24]
// 00637a82  d9442468             fld dword ptr [esp + 0x68]
// 00637a86  d95e28               fstp dword ptr [esi + 0x28]
// 00637a89  d944246c             fld dword ptr [esp + 0x6c]
// 00637a8d  d95e2c               fstp dword ptr [esi + 0x2c]
// 00637a90  e82bebffff           call 0x6365c0
// 00637a95  5e                   pop esi
// 00637a96  59                   pop ecx
// 00637a97  c3                   ret 

struct Matrix {
    float data[9];
    Matrix(const Matrix&);
};

struct Frame {
    Matrix rotation;
    float x, y, z;
    Frame(const Matrix&, float, float, float);
    ~Frame();
};

struct S {
    void set(Frame);
};

__forceinline Frame::Frame(const Matrix& m, float a, float b, float c)
    : rotation(m), x(a), y(b), z(c)
{
}

void apply(S* object, Matrix rotation, float x, float y, float z)
{
    object->set(Frame(rotation, x, y, z));
}

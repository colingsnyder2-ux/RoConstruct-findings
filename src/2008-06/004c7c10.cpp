// from server: 100% by king_originala
// roc 2008-06 004c7c10  unit: RBX::VInstance::?$Association::Item  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c7c10
//
// 004c7c10  53                   push ebx
// 004c7c11  55                   push ebp
// 004c7c12  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004c7c16  8b4500               mov eax, dword ptr [ebp]
// 004c7c19  56                   push esi
// 004c7c1a  8bf1                 mov esi, ecx
// 004c7c1c  57                   push edi
// 004c7c1d  8d7d04               lea edi, [ebp + 4]
// 004c7c20  8d5e04               lea ebx, [esi + 4]
// 004c7c23  57                   push edi
// 004c7c24  8bcb                 mov ecx, ebx
// 004c7c26  8906                 mov dword ptr [esi], eax
// 004c7c28  e8f3b50400           call 0x513220
// 004c7c2d  d94724               fld dword ptr [edi + 0x24]
// 004c7c30  d95b24               fstp dword ptr [ebx + 0x24]
// 004c7c33  83c534               add ebp, 0x34
// 004c7c36  d94728               fld dword ptr [edi + 0x28]
// 004c7c39  55                   push ebp
// 004c7c3a  d95b28               fstp dword ptr [ebx + 0x28]
// 004c7c3d  8d4e34               lea ecx, [esi + 0x34]
// 004c7c40  d9472c               fld dword ptr [edi + 0x2c]
// 004c7c43  d95b2c               fstp dword ptr [ebx + 0x2c]
// 004c7c46  e865fbffff           call 0x4c77b0
// 004c7c4b  5f                   pop edi
// 004c7c4c  8bc6                 mov eax, esi
// 004c7c4e  5e                   pop esi
// 004c7c4f  5d                   pop ebp
// 004c7c50  5b                   pop ebx
// 004c7c51  c20400               ret 4

struct Matrix
{
    float values[9];
    Matrix(const Matrix &);
};

struct Transform
{
    Matrix matrix;
    float x, y, z;
};

struct Tail
{
    Tail(const Tail &);
};

struct S
{
    int value;
    Transform transform;
    Tail tail;

    S(const S &);
};

S::S(const S &other)
    : value(other.value),
      transform(other.transform),
      tail(other.tail)
{
}

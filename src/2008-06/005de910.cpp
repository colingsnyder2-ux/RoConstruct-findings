// from server: 100% by king_originala
// roc 2008-06 005de910  unit: RBX::Message  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005de910
//
// 005de910  64a100000000         mov eax, dword ptr fs:[0]
// 005de916  6aff                 push -1
// 005de918  68ce617d00           push 0x7d61ce
// 005de91d  50                   push eax
// 005de91e  b801000000           mov eax, 1
// 005de923  64892500000000       mov dword ptr fs:[0], esp
// 005de92a  840528a79700         test byte ptr [0x97a728], al
// 005de930  754a                 jne 0x5de97c
// 005de932  090528a79700         or dword ptr [0x97a728], eax
// 005de938  d9e8                 fld1 
// 005de93a  83ec24               sub esp, 0x24
// 005de93d  d9542420             fst dword ptr [esp + 0x20]
// 005de941  d9ee                 fldz 
// 005de943  b904a79700           mov ecx, 0x97a704
// 005de948  d954241c             fst dword ptr [esp + 0x1c]
// 005de94c  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005de954  d9542418             fst dword ptr [esp + 0x18]
// 005de958  d9542414             fst dword ptr [esp + 0x14]
// 005de95c  d9542410             fst dword ptr [esp + 0x10]
// 005de960  d9c9                 fxch st(1)
// 005de962  d95c240c             fstp dword ptr [esp + 0xc]
// 005de966  d9542408             fst dword ptr [esp + 8]
// 005de96a  d905b8c38100         fld dword ptr [0x81c3b8]
// 005de970  d95c2404             fstp dword ptr [esp + 4]
// 005de974  d91c24               fstp dword ptr [esp]
// 005de977  e8f451f3ff           call 0x513b70
// 005de97c  8b0c24               mov ecx, dword ptr [esp]
// 005de97f  b804a79700           mov eax, 0x97a704
// 005de984  64890d00000000       mov dword ptr fs:[0], ecx
// 005de98b  83c40c               add esp, 0xc
// 005de98e  c3                   ret 

struct Matrix
{
    float values[9];
    Matrix(float, float, float, float, float, float, float, float, float);
};

const Matrix& getMatrix()
{
    static Matrix value(
        0.0f, -1.0f, 0.0f,
        1.0f,  0.0f, 0.0f,
        0.0f,  0.0f, 1.0f
    );
    return value;
}

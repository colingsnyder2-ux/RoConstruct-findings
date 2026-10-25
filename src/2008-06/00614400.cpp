// from server: 100% by king_originala
// roc 2008-06 00614400  unit: RBX::RevoluteLink  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00614400
//
// 00614400  83ec48               sub esp, 0x48
// 00614403  56                   push esi
// 00614404  57                   push edi
// 00614405  8bf1                 mov esi, ecx
// 00614407  e8544ff8ff           call 0x599360
// 0061440c  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00614410  57                   push edi
// 00614411  8d4c240c             lea ecx, [esp + 0xc]
// 00614415  e806eeefff           call 0x513220
// 0061441a  d94724               fld dword ptr [edi + 0x24]
// 0061441d  d95c242c             fstp dword ptr [esp + 0x2c]
// 00614421  8d442408             lea eax, [esp + 8]
// 00614425  d94728               fld dword ptr [edi + 0x28]
// 00614428  50                   push eax
// 00614429  d95c2434             fstp dword ptr [esp + 0x34]
// 0061442d  8bce                 mov ecx, esi
// 0061442f  d9472c               fld dword ptr [edi + 0x2c]
// 00614432  d95c2438             fstp dword ptr [esp + 0x38]
// 00614436  d986c4000000         fld dword ptr [esi + 0xc4]
// 0061443c  d95c243c             fstp dword ptr [esp + 0x3c]
// 00614440  d986c8000000         fld dword ptr [esi + 0xc8]
// 00614446  d95c2440             fstp dword ptr [esp + 0x40]
// 0061444a  d986cc000000         fld dword ptr [esi + 0xcc]
// 00614450  d95c2444             fstp dword ptr [esp + 0x44]
// 00614454  d986d0000000         fld dword ptr [esi + 0xd0]
// 0061445a  d95c2448             fstp dword ptr [esp + 0x48]
// 0061445e  d986d4000000         fld dword ptr [esi + 0xd4]
// 00614464  d95c244c             fstp dword ptr [esp + 0x4c]
// 00614468  d986d8000000         fld dword ptr [esi + 0xd8]
// 0061446e  d95c2450             fstp dword ptr [esp + 0x50]
// 00614472  e839fbffff           call 0x613fb0
// 00614477  5f                   pop edi
// 00614478  5e                   pop esi
// 00614479  83c448               add esp, 0x48
// 0061447c  c20400               ret 4

struct Matrix {
    float values[9];
    Matrix& operator=(const Matrix&);
};

struct Vector {
    float x, y, z;
};

struct Frame {
    Matrix matrix;
    Vector position;
};

struct State {
    Matrix matrix;
    Vector position;
    Vector linearVelocity;
    Vector angularVelocity;
};

struct S {
    char reserved[0xC4];
    Vector linearVelocity;
    Vector angularVelocity;

    const void* get();
    void setState(const State&);
    void f(const Frame&);
};

void S::f(const Frame& frame)
{
    get();

    State state;
    state.matrix = frame.matrix;
    state.position.x = frame.position.x;
    state.position.y = frame.position.y;
    state.position.z = frame.position.z;
    state.linearVelocity.x = linearVelocity.x;
    state.linearVelocity.y = linearVelocity.y;
    state.linearVelocity.z = linearVelocity.z;
    state.angularVelocity.x = angularVelocity.x;
    state.angularVelocity.y = angularVelocity.y;
    state.angularVelocity.z = angularVelocity.z;

    setState(state);
}

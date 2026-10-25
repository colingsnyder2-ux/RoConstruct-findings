// from server: 100% by king_originala
// roc 2008-06 005ffc00  unit: RBX::Tool  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ffc00
//
// 005ffc00  83ec30               sub esp, 0x30
// 005ffc03  56                   push esi
// 005ffc04  8bf1                 mov esi, ecx
// 005ffc06  8d86cc010000         lea eax, [esi + 0x1cc]
// 005ffc0c  50                   push eax
// 005ffc0d  8d4c2408             lea ecx, [esp + 8]
// 005ffc11  e80a36f1ff           call 0x513220
// 005ffc16  8b442438             mov eax, dword ptr [esp + 0x38]
// 005ffc1a  d900                 fld dword ptr [eax]
// 005ffc1c  8d4c2404             lea ecx, [esp + 4]
// 005ffc20  d95c2428             fstp dword ptr [esp + 0x28]
// 005ffc24  51                   push ecx
// 005ffc25  d94004               fld dword ptr [eax + 4]
// 005ffc28  8bce                 mov ecx, esi
// 005ffc2a  d95c2430             fstp dword ptr [esp + 0x30]
// 005ffc2e  d94008               fld dword ptr [eax + 8]
// 005ffc31  d95c2434             fstp dword ptr [esp + 0x34]
// 005ffc35  e836ffffff           call 0x5ffb70
// 005ffc3a  5e                   pop esi
// 005ffc3b  83c430               add esp, 0x30
// 005ffc3e  c20400               ret 4

struct Vector {
    float x, y, z;
};

struct Matrix {
    float data[9];
    Matrix(const Matrix&);
};

struct Frame {
    Matrix rotation;
    float x, y, z;
};

struct Tool {
    char pad[0x1cc];
    Matrix rotation;
    bool method_5ffb70(const Frame&);
    void method_5ffc00(const Vector&);
};

void Tool::method_5ffc00(const Vector& position) {
    Frame frame = { rotation, position.x, position.y, position.z };
    method_5ffb70(frame);
}

// from server: 100% by king_originala
// roc 2008-06 006334b0  unit: RBX::VBodyGyro::?$BoundPropGetSet  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006334b0
//
// 006334b0  8b442408             mov eax, dword ptr [esp + 8]
// 006334b4  85c0                 test eax, eax
// 006334b6  7405                 je 0x6334bd
// 006334b8  83c0ec               add eax, -0x14
// 006334bb  eb02                 jmp 0x6334bf
// 006334bd  33c0                 xor eax, eax
// 006334bf  56                   push esi
// 006334c0  8b7108               mov esi, dword ptr [ecx + 8]
// 006334c3  57                   push edi
// 006334c4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006334c8  03f0                 add esi, eax
// 006334ca  56                   push esi
// 006334cb  8bcf                 mov ecx, edi
// 006334cd  e84efdedff           call 0x513220
// 006334d2  d94624               fld dword ptr [esi + 0x24]
// 006334d5  d95f24               fstp dword ptr [edi + 0x24]
// 006334d8  8bc7                 mov eax, edi
// 006334da  d94628               fld dword ptr [esi + 0x28]
// 006334dd  d95f28               fstp dword ptr [edi + 0x28]
// 006334e0  d9462c               fld dword ptr [esi + 0x2c]
// 006334e3  d95f2c               fstp dword ptr [edi + 0x2c]
// 006334e6  5f                   pop edi
// 006334e7  5e                   pop esi
// 006334e8  c20800               ret 8

struct Matrix {
    float data[9];
    Matrix& operator=(const Matrix&);
};

struct Value {
    Matrix rotation;
    float x, y, z;
};

struct S {
    char padding[8];
    int offset;
    Value* f(Value* result, char* object);
};

Value* S::f(Value* result, char* object)
{
    char* base = object ? object - 20 : 0;
    Value* source = reinterpret_cast<Value*>(base + offset);
    result->rotation = source->rotation;
    result->x = source->x;
    result->y = source->y;
    result->z = source->z;
    return result;
}

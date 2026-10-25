// from server: 100% by king_originala
// roc 2008-06 005ccaa0  unit: RBX::P8Camera::?$GetSetImpl  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ccaa0
//
// 005ccaa0  8bc1                 mov eax, ecx
// 005ccaa2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ccaa6  85c9                 test ecx, ecx
// 005ccaa8  7405                 je 0x5ccaaf
// 005ccaaa  8d51ec               lea edx, [ecx - 0x14]
// 005ccaad  eb02                 jmp 0x5ccab1
// 005ccaaf  33d2                 xor edx, edx
// 005ccab1  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005ccab4  8b4008               mov eax, dword ptr [eax + 8]
// 005ccab7  56                   push esi
// 005ccab8  57                   push edi
// 005ccab9  03ca                 add ecx, edx
// 005ccabb  ffd0                 call eax
// 005ccabd  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005ccac1  8bf0                 mov esi, eax
// 005ccac3  56                   push esi
// 005ccac4  8bcf                 mov ecx, edi
// 005ccac6  e85567f4ff           call 0x513220
// 005ccacb  d94624               fld dword ptr [esi + 0x24]
// 005ccace  d95f24               fstp dword ptr [edi + 0x24]
// 005ccad1  8bc7                 mov eax, edi
// 005ccad3  d94628               fld dword ptr [esi + 0x28]
// 005ccad6  d95f28               fstp dword ptr [edi + 0x28]
// 005ccad9  d9462c               fld dword ptr [esi + 0x2c]
// 005ccadc  d95f2c               fstp dword ptr [edi + 0x2c]
// 005ccadf  5f                   pop edi
// 005ccae0  5e                   pop esi
// 005ccae1  c20800               ret 8

struct Matrix {
    float elements[9];
    Matrix(const Matrix&);
};

struct Frame {
    Matrix rotation;
    float x, y, z;
};

struct Prefix {
    char padding[20];
};

struct Base {
    char data;
};

struct Owner : Prefix, Base {
};

struct GetSet {
    char padding[8];
    const Frame& (Owner::*getter)();

    Frame get(Base*);
};

Frame GetSet::get(Base* object)
{
    return (static_cast<Owner*>(object)->*getter)();
}

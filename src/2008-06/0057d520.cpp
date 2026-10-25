// from server: 100% by king_originala
// roc 2008-06 0057d520  unit: RBX::RotateSelectionVerb  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057d520
//
// 0057d520  56                   push esi
// 0057d521  e8da120600           call 0x5de800
// 0057d526  8b742408             mov esi, dword ptr [esp + 8]
// 0057d52a  50                   push eax
// 0057d52b  8bce                 mov ecx, esi
// 0057d52d  e8ee5cf9ff           call 0x513220
// 0057d532  8bc6                 mov eax, esi
// 0057d534  5e                   pop esi
// 0057d535  c20400               ret 4

struct Matrix {
    unsigned int data[9];
    Matrix(const Matrix&);
};

extern const Matrix& __cdecl getMatrix();

struct RotateSelectionVerb {
    Matrix f();
};

Matrix RotateSelectionVerb::f() {
    return getMatrix();
}

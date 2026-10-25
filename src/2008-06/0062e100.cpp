// from server: 100% by king_originala
// roc 2008-06 0062e100  unit: RBX::GeometryService  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062e100
//
// 0062e100  8bc1                 mov eax, ecx
// 0062e102  8b4828               mov ecx, dword ptr [eax + 0x28]
// 0062e105  83ec24               sub esp, 0x24
// 0062e108  85c9                 test ecx, ecx
// 0062e10a  7407                 je 0x62e113
// 0062e10c  e85f200300           call 0x660170
// 0062e111  eb03                 jmp 0x62e116
// 0062e113  83c068               add eax, 0x68
// 0062e116  56                   push esi
// 0062e117  50                   push eax
// 0062e118  8d4c2408             lea ecx, [esp + 8]
// 0062e11c  e8ff50eeff           call 0x513220
// 0062e121  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0062e125  8d442404             lea eax, [esp + 4]
// 0062e129  50                   push eax
// 0062e12a  56                   push esi
// 0062e12b  e880fafaff           call 0x5ddbb0
// 0062e130  83c408               add esp, 8
// 0062e133  8bc6                 mov eax, esi
// 0062e135  5e                   pop esi
// 0062e136  83c424               add esp, 0x24
// 0062e139  c20400               ret 4

struct Matrix3 {
    float data[9];
    Matrix3(const Matrix3&);
};

struct Vector3 {
    float x, y, z;
};

struct Cofm {
    const Matrix3& getMoment() const;
};

extern "C" void __cdecl diagonal(Vector3&, const Matrix3&);

struct GeometryService {
    char padding0[0x28];
    Cofm* cofm;
    char padding1[0x3C];
    Matrix3 moment;

    Vector3 getMomentDiagonal() const;
};

Vector3 GeometryService::getMomentDiagonal() const {
    Matrix3 matrix(cofm ? cofm->getMoment() : moment);
    Vector3 result;
    diagonal(result, matrix);
    return result;
}

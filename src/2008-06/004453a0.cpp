// from server: 100% by king_originala
// roc 2008-06 004453a0  unit: P8CRenderSettings::?$GetSetImpl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004453a0
//
// 004453a0  8b442404             mov eax, dword ptr [esp + 4]
// 004453a4  8bd1                 mov edx, ecx
// 004453a6  85c0                 test eax, eax
// 004453a8  7418                 je 0x4453c2
// 004453aa  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 004453ad  83c0ec               add eax, -0x14
// 004453b0  03c8                 add ecx, eax
// 004453b2  8b4208               mov eax, dword ptr [edx + 8]
// 004453b5  ffd0                 call eax
// 004453b7  89442404             mov dword ptr [esp + 4], eax
// 004453bb  db442404             fild dword ptr [esp + 4]
// 004453bf  c20400               ret 4
// 004453c2  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 004453c5  33c0                 xor eax, eax
// 004453c7  03c8                 add ecx, eax
// 004453c9  8b4208               mov eax, dword ptr [edx + 8]
// 004453cc  ffd0                 call eax
// 004453ce  89442404             mov dword ptr [esp + 4], eax
// 004453d2  db442404             fild dword ptr [esp + 4]
// 004453d6  c20400               ret 4

struct FirstBase { char padding[20]; };
struct SecondBase { int value; };
struct Object : FirstBase, SecondBase {};

struct S {
    char padding[8];
    int (Object::*getter)();
    double f(SecondBase* object);
};

double S::f(SecondBase* object) {
    return (static_cast<Object*>(object)->*getter)();
}

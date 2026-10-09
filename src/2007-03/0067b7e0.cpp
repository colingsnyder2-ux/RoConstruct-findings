// roc 2007-03 0067b7e0  unit: seg_00670000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067b7e0
//
// 0067b7e0  56                   push esi
// 0067b7e1  8bf1                 mov esi, ecx
// 0067b7e3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0067b7e7  8b06                 mov eax, dword ptr [esi]
// 0067b7e9  8b5014               mov edx, dword ptr [eax + 0x14]
// 0067b7ec  51                   push ecx
// 0067b7ed  8bce                 mov ecx, esi
// 0067b7ef  ffd2                 call edx
// 0067b7f1  50                   push eax
// 0067b7f2  8bce                 mov ecx, esi
// 0067b7f4  e897ffffff           call 0x67b790
// 0067b7f9  5e                   pop esi
// 0067b7fa  c20400               ret 4
// copied from an identical function in another client (function ?method_691db0@CXTThemeManagerStyle@ns_ROCX000002@@QAEHH@Z)

namespace ns_ROCX000002 {
struct CXTThemeManagerStyle {
    int method_691d60(int);
    int method_691db0(int);
};

int CXTThemeManagerStyle::method_691db0(int arg) {
    int v = (*(int (__thiscall **)(void *, int))((*(int *)this) + 0x14))(this, arg);
    return this->method_691d60(v);
}
}

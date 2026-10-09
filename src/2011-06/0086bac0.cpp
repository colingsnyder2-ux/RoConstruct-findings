// roc 2011-06 0086bac0  unit: CXTThemeManagerStyle  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086bac0
//
// 0086bac0  56                   push esi
// 0086bac1  8bf1                 mov esi, ecx
// 0086bac3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0086bac7  8b06                 mov eax, dword ptr [esi]
// 0086bac9  8b5014               mov edx, dword ptr [eax + 0x14]
// 0086bacc  51                   push ecx
// 0086bacd  8bce                 mov ecx, esi
// 0086bacf  ffd2                 call edx
// 0086bad1  50                   push eax
// 0086bad2  8bce                 mov ecx, esi
// 0086bad4  e887ffffff           call 0x86ba60
// 0086bad9  5e                   pop esi
// 0086bada  c20400               ret 4
// copied from an identical function in another client (function ?method_691db0@CXTThemeManagerStyle@ns_ROCX000026@@QAEHH@Z)

namespace ns_ROCX000026 {
struct CXTThemeManagerStyle {
    int method_691d60(int);
    int method_691db0(int);
};

int CXTThemeManagerStyle::method_691db0(int arg) {
    int v = (*(int (__thiscall **)(void *, int))((*(int *)this) + 0x14))(this, arg);
    return this->method_691d60(v);
}
}

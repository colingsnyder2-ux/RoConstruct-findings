// roc 2008-06 0070dae0  unit: CXTThemeManagerStyle  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070dae0
//
// 0070dae0  56                   push esi
// 0070dae1  8bf1                 mov esi, ecx
// 0070dae3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0070dae7  8b06                 mov eax, dword ptr [esi]
// 0070dae9  8b5014               mov edx, dword ptr [eax + 0x14]
// 0070daec  51                   push ecx
// 0070daed  8bce                 mov ecx, esi
// 0070daef  ffd2                 call edx
// 0070daf1  50                   push eax
// 0070daf2  8bce                 mov ecx, esi
// 0070daf4  e887ffffff           call 0x70da80
// 0070daf9  5e                   pop esi
// 0070dafa  c20400               ret 4
// copied from an identical function in another client (function ?method_691db0@CXTThemeManagerStyle@ns_ROCX000034@@QAEHH@Z)

namespace ns_ROCX000034 {
struct CXTThemeManagerStyle {
    int method_691d60(int);
    int method_691db0(int);
};

int CXTThemeManagerStyle::method_691db0(int arg) {
    int v = (*(int (__thiscall **)(void *, int))((*(int *)this) + 0x14))(this, arg);
    return this->method_691d60(v);
}
}

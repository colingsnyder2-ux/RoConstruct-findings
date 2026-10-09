// roc 2010-06 0080e320  unit: CXTThemeManagerStyle  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080e320
//
// 0080e320  56                   push esi
// 0080e321  8bf1                 mov esi, ecx
// 0080e323  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0080e327  8b06                 mov eax, dword ptr [esi]
// 0080e329  8b5014               mov edx, dword ptr [eax + 0x14]
// 0080e32c  51                   push ecx
// 0080e32d  8bce                 mov ecx, esi
// 0080e32f  ffd2                 call edx
// 0080e331  50                   push eax
// 0080e332  8bce                 mov ecx, esi
// 0080e334  e887ffffff           call 0x80e2c0
// 0080e339  5e                   pop esi
// 0080e33a  c20400               ret 4
// copied from an identical function in another client (function ?method_691db0@CXTThemeManagerStyle@ns_ROCX000035@@QAEHH@Z)

namespace ns_ROCX000035 {
struct CXTThemeManagerStyle {
    int method_691d60(int);
    int method_691db0(int);
};

int CXTThemeManagerStyle::method_691db0(int arg) {
    int v = (*(int (__thiscall **)(void *, int))((*(int *)this) + 0x14))(this, arg);
    return this->method_691d60(v);
}
}

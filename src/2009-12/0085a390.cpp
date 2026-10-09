// roc 2009-12 0085a390  unit: CXTThemeManagerStyle  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085a390
//
// 0085a390  56                   push esi
// 0085a391  8bf1                 mov esi, ecx
// 0085a393  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0085a397  8b06                 mov eax, dword ptr [esi]
// 0085a399  8b5014               mov edx, dword ptr [eax + 0x14]
// 0085a39c  51                   push ecx
// 0085a39d  8bce                 mov ecx, esi
// 0085a39f  ffd2                 call edx
// 0085a3a1  50                   push eax
// 0085a3a2  8bce                 mov ecx, esi
// 0085a3a4  e887ffffff           call 0x85a330
// 0085a3a9  5e                   pop esi
// 0085a3aa  c20400               ret 4
// copied from an identical function in another client (function ?method_691db0@CXTThemeManagerStyle@ns_ROCX000039@@QAEHH@Z)

namespace ns_ROCX000039 {
struct CXTThemeManagerStyle {
    int method_691d60(int);
    int method_691db0(int);
};

int CXTThemeManagerStyle::method_691db0(int arg) {
    int v = (*(int (__thiscall **)(void *, int))((*(int *)this) + 0x14))(this, arg);
    return this->method_691d60(v);
}
}

// roc 2009-06 0077f2d0  unit: CXTThemeManagerStyle  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077f2d0
//
// 0077f2d0  56                   push esi
// 0077f2d1  8bf1                 mov esi, ecx
// 0077f2d3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077f2d7  8b06                 mov eax, dword ptr [esi]
// 0077f2d9  8b5014               mov edx, dword ptr [eax + 0x14]
// 0077f2dc  51                   push ecx
// 0077f2dd  8bce                 mov ecx, esi
// 0077f2df  ffd2                 call edx
// 0077f2e1  50                   push eax
// 0077f2e2  8bce                 mov ecx, esi
// 0077f2e4  e887ffffff           call 0x77f270
// 0077f2e9  5e                   pop esi
// 0077f2ea  c20400               ret 4
// copied from an identical function in another client (function ?method_691db0@CXTThemeManagerStyle@ns_ROCX00002b@@QAEHH@Z)

namespace ns_ROCX00002b {
struct CXTThemeManagerStyle {
    int method_691d60(int);
    int method_691db0(int);
};

int CXTThemeManagerStyle::method_691db0(int arg) {
    int v = (*(int (__thiscall **)(void *, int))((*(int *)this) + 0x14))(this, arg);
    return this->method_691d60(v);
}
}

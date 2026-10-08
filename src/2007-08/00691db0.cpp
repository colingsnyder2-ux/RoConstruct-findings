// from server: 100% by colin
// roc 2007-08 00691db0  unit: CXTThemeManagerStyle  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00691db0
//
// 00691db0  56                   push esi
// 00691db1  8bf1                 mov esi, ecx
// 00691db3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00691db7  8b06                 mov eax, dword ptr [esi]
// 00691db9  8b5014               mov edx, dword ptr [eax + 0x14]
// 00691dbc  51                   push ecx
// 00691dbd  8bce                 mov ecx, esi
// 00691dbf  ffd2                 call edx
// 00691dc1  50                   push eax
// 00691dc2  8bce                 mov ecx, esi
// 00691dc4  e897ffffff           call 0x691d60
// 00691dc9  5e                   pop esi
// 00691dca  c20400               ret 4

struct CXTThemeManagerStyle {
    int method_691d60(int);
    int method_691db0(int);
};

int CXTThemeManagerStyle::method_691db0(int arg) {
    int v = (*(int (__thiscall **)(void *, int))((*(int *)this) + 0x14))(this, arg);
    return this->method_691d60(v);
}

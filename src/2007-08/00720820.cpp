// from server: 60% by colin
// roc 2007-08 00720820  unit: CXTShadowHook  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00720820
//
// 00720820  8bc1                 mov eax, ecx
// 00720822  8b4804               mov ecx, dword ptr [eax + 4]
// 00720825  8b11                 mov edx, dword ptr [ecx]
// 00720827  8b00                 mov eax, dword ptr [eax]
// 00720829  8b5238               mov edx, dword ptr [edx + 0x38]
// 0072082c  50                   push eax
// 0072082d  ffd2                 call edx
// 0072082f  c3                   ret 

struct CXTShadowHook {
    int field0;
    void* field4;
    void method();
};

void CXTShadowHook::method() {
    void** vtbl = *(void***)field4;
    typedef void (__stdcall *Fn)(int);
    Fn fn = (Fn)vtbl[0x38 / 4];
    fn(field0);
}

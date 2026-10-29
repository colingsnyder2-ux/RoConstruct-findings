// roc 2009-12 00485220  unit: RBX::GfxBinding  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00485220
//
// 00485220  8b01                 mov eax, dword ptr [ecx]
// 00485222  8b10                 mov edx, dword ptr [eax]
// 00485224  ffd2                 call edx
// 00485226  c20400               ret 4
// copied from an identical function in another client (function ?func@GfxBinding@@UAEXH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// from server: 100% by tester
struct GfxBinding {
    virtual void func(int);
};

void GfxBinding::func(int) {
    void (__thiscall *vtable_func)(GfxBinding*) = (void (__thiscall*)(GfxBinding*))(*(int**)this)[0];
    vtable_func(this);
}
// from server: 65% by colin
// roc 2007-08 0042d970  unit: boost::any::_N::?$holder  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042d970
//
// 0042d970  8b442404             mov eax, dword ptr [esp + 4]
// 0042d974  8b4804               mov ecx, dword ptr [eax + 4]
// 0042d977  85c9                 test ecx, ecx
// 0042d979  740e                 je 0x42d989
// 0042d97b  8b11                 mov edx, dword ptr [ecx]
// 0042d97d  8b02                 mov eax, dword ptr [edx]
// 0042d97f  c744240401000000     mov dword ptr [esp + 4], 1
// 0042d987  ffe0                 jmp eax
// 0042d989  c20400               ret 4

struct InnerVtbl {
    void (__stdcall *fn0)(void*);
};

struct Inner {
    InnerVtbl* vtbl;
};

struct AnyHolder {
    void* vptr;
    Inner* inner;
};

void __stdcall AnyHolder_do(AnyHolder* h);

void __stdcall AnyHolder_do(AnyHolder* h) {
    Inner* p = h->inner;
    if (p != 0) {
        p->vtbl->fn0(p);
    }
}

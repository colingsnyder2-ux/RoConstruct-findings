// from server: 82% by why2
// roc 2009-06 00407240  unit: VCApp::?$CComContainedObject  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00407240
//
// 00407240  8b442404             mov eax, dword ptr [esp + 4]
// 00407244  8b4018               mov eax, dword ptr [eax + 0x18]
// 00407247  8b08                 mov ecx, dword ptr [eax]
// 00407249  89442404             mov dword ptr [esp + 4], eax
// 0040724d  8b01                 mov eax, dword ptr [ecx]
// 0040724f  ffe0                 jmp eax

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD

struct Inner {
    virtual int f();
};

struct Outer {
    char pad[0x18];
    Inner* inner;
};

int __stdcall helper(Outer* p)
{
    Inner* i = p->inner;
    void** vtbl = *(void***)i;
    int (__stdcall *fn)(Inner*) = (int (__stdcall *)(Inner*))vtbl[0];
    return fn(i);
}

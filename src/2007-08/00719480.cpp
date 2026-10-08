// from server: 89% by colin
// roc 2007-08 00719480  unit: CXTPRibbonGroupPopupToolBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00719480
//
// 00719480  8b894c020000         mov ecx, dword ptr [ecx + 0x24c]
// 00719486  8b01                 mov eax, dword ptr [ecx]
// 00719488  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 0071948e  56                   push esi
// 0071948f  8b742408             mov esi, dword ptr [esp + 8]
// 00719493  56                   push esi
// 00719494  ffd2                 call edx
// 00719496  8bc6                 mov eax, esi
// 00719498  5e                   pop esi
// 00719499  c20400               ret 4

struct Inner;

struct InnerVtbl {
    char pad[0x154];
    void* (__stdcall* fn154)(void*);
};

struct Inner {
    InnerVtbl* vtbl;
};

struct Outer {
    char pad[0x24c];
    Inner* inner;
    void* method(void* arg);
};

void* Outer::method(void* arg) {
    Inner* p = inner;
    InnerVtbl* vt = p->vtbl;
    vt->fn154(arg);
    return arg;
}

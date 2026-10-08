// from server: 100% by colin
// roc 2007-08 0063a230  unit: CRobloxControlColorSelector  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063a230
//
// 0063a230  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0063a236  8b01                 mov eax, dword ptr [ecx]
// 0063a238  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0063a23e  56                   push esi
// 0063a23f  8b742408             mov esi, dword ptr [esp + 8]
// 0063a243  56                   push esi
// 0063a244  ffd2                 call edx
// 0063a246  8bc6                 mov eax, esi
// 0063a248  5e                   pop esi
// 0063a249  c20400               ret 4

struct Inner;

struct InnerVtbl {
    char pad[0x150];
    void* (__thiscall *fn)(Inner*, Inner*);
};

struct Inner {
    InnerVtbl* vtbl;
};

struct Outer {
    char pad[0xfc];
    Inner* inner;
    Inner* method(Inner* arg);
};

Inner* Outer::method(Inner* arg) {
    Inner* p = inner;
    p->vtbl->fn(p, arg);
    return arg;
}

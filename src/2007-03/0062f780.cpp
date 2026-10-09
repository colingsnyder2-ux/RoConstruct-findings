// roc 2007-03 0062f780  unit: seg_00620000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062f780
//
// 0062f780  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0062f786  8b01                 mov eax, dword ptr [ecx]
// 0062f788  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0062f78e  56                   push esi
// 0062f78f  8b742408             mov esi, dword ptr [esp + 8]
// 0062f793  56                   push esi
// 0062f794  ffd2                 call edx
// 0062f796  8bc6                 mov eax, esi
// 0062f798  5e                   pop esi
// 0062f799  c20400               ret 4
// copied from an identical function in another client (function ?method@Outer@ns_ROCX00000d@@QAEPAUInner@2@PAU32@@Z)

namespace ns_ROCX00000d {
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
}

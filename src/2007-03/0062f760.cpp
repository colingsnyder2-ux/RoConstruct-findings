// roc 2007-03 0062f760  unit: seg_00620000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062f760
//
// 0062f760  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0062f766  8b01                 mov eax, dword ptr [ecx]
// 0062f768  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 0062f76e  56                   push esi
// 0062f76f  8b742408             mov esi, dword ptr [esp + 8]
// 0062f773  56                   push esi
// 0062f774  ffd2                 call edx
// 0062f776  8bc6                 mov eax, esi
// 0062f778  5e                   pop esi
// 0062f779  c20400               ret 4
// copied from an identical function in another client (function ?method@Outer@ns_ROCX00000c@@QAEPAUInner@2@PAU32@@Z)

namespace ns_ROCX00000c {
struct Inner;

struct InnerVtbl {
    char pad[0x154];
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

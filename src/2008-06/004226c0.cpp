// roc 2008-06 004226c0  unit: CSelectionTreeCtrl  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004226c0
//
// 004226c0  8b442404             mov eax, dword ptr [esp + 4]
// 004226c4  8b4830               mov ecx, dword ptr [eax + 0x30]
// 004226c7  8b11                 mov edx, dword ptr [ecx]
// 004226c9  50                   push eax
// 004226ca  8b4214               mov eax, dword ptr [edx + 0x14]
// 004226cd  ffd0                 call eax
// 004226cf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004226d3  c70100000000         mov dword ptr [ecx], 0
// 004226d9  c20800               ret 8
// copied from an identical function in another client (function ?func@ns_ROCX000021@@YGXPAUOuter@1@PAH@Z)

namespace ns_ROCX000021 {
struct InnerVtbl {
    char pad[0x14];
    void (__stdcall *fn)(void*);
};

struct Inner {
    InnerVtbl* vtbl;
};

struct Outer {
    char pad0[0x30];
    Inner* m_inner;
};

void __stdcall func(Outer* p, int* out)
{
    p->m_inner->vtbl->fn(p);
    *out = 0;
}
}

// roc 2009-12 0041d390  unit: CSelectionTreeCtrl  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041d390
//
// 0041d390  8b442404             mov eax, dword ptr [esp + 4]
// 0041d394  8b4830               mov ecx, dword ptr [eax + 0x30]
// 0041d397  8b11                 mov edx, dword ptr [ecx]
// 0041d399  50                   push eax
// 0041d39a  8b4210               mov eax, dword ptr [edx + 0x10]
// 0041d39d  ffd0                 call eax
// 0041d39f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041d3a3  c70100000000         mov dword ptr [ecx], 0
// 0041d3a9  c20800               ret 8
// copied from an identical function in another client (function ?func@@YGXPAUOuter@@PAH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// from server: 100% by tester
struct InnerVtbl {
    char pad[0x10];
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
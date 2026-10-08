// from server: 100% by colin
// roc 2007-08 0041f800  unit: CSelectionTreeCtrl  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f800
//
// 0041f800  8b442404             mov eax, dword ptr [esp + 4]
// 0041f804  8b4830               mov ecx, dword ptr [eax + 0x30]
// 0041f807  8b11                 mov edx, dword ptr [ecx]
// 0041f809  50                   push eax
// 0041f80a  8b4214               mov eax, dword ptr [edx + 0x14]
// 0041f80d  ffd0                 call eax
// 0041f80f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041f813  c70100000000         mov dword ptr [ecx], 0
// 0041f819  c20800               ret 8

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

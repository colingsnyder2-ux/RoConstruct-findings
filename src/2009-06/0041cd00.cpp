// roc 2009-06 0041cd00  unit: CSelectionTreeCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041cd00
//
// 0041cd00  8b442404             mov eax, dword ptr [esp + 4]
// 0041cd04  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 0041cd07  8b11                 mov edx, dword ptr [ecx]
// 0041cd09  8b400c               mov eax, dword ptr [eax + 0xc]
// 0041cd0c  8b520c               mov edx, dword ptr [edx + 0xc]
// 0041cd0f  50                   push eax
// 0041cd10  ffd2                 call edx
// 0041cd12  8b442408             mov eax, dword ptr [esp + 8]
// 0041cd16  c70000000000         mov dword ptr [eax], 0
// 0041cd1c  c20800               ret 8
// copied from an identical function in another client (function ?f@S@ns_ROCX000005@@QAEXPAU12@PAH@Z)

namespace ns_ROCX000005 {
// from server: 100% by atomic.potato
struct S
{
    void f(S *a, int *b);
};

void S::f(S *a, int *b)
{
    void **p = *(void ***)((char *)a + 0x5c);
    void (__thiscall *fn)(void *, int) =
        (void (__thiscall *)(void *, int))(*(void **)((char *)*p + 0xc));
    fn(p, *(int *)((char *)a + 0xc));
    *b = 0;
}
}

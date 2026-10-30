// roc 2011-06 004269e0  unit: CSelectionTreeCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004269e0
//
// 004269e0  8b442404             mov eax, dword ptr [esp + 4]
// 004269e4  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 004269e7  8b11                 mov edx, dword ptr [ecx]
// 004269e9  8b400c               mov eax, dword ptr [eax + 0xc]
// 004269ec  8b520c               mov edx, dword ptr [edx + 0xc]
// 004269ef  50                   push eax
// 004269f0  ffd2                 call edx
// 004269f2  8b442408             mov eax, dword ptr [esp + 8]
// 004269f6  c70000000000         mov dword ptr [eax], 0
// 004269fc  c20800               ret 8
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
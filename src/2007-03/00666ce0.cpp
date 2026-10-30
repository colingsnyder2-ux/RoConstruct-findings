// roc 2007-03 00666ce0  unit: seg_00660000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00666ce0
//
// 00666ce0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00666ce4  8b01                 mov eax, dword ptr [ecx]
// 00666ce6  8b4058               mov eax, dword ptr [eax + 0x58]
// 00666ce9  8d542410             lea edx, [esp + 0x10]
// 00666ced  52                   push edx
// 00666cee  8b542410             mov edx, dword ptr [esp + 0x10]
// 00666cf2  52                   push edx
// 00666cf3  8b542410             mov edx, dword ptr [esp + 0x10]
// 00666cf7  6a11                 push 0x11
// 00666cf9  52                   push edx
// 00666cfa  ffd0                 call eax
// 00666cfc  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@@YAHPAUO_006856e0@@HHH@Z)

// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// from server: 100% by sophus
typedef int (__thiscall *Fn_006856e0)(void*, int, int, int, int*);

struct O_006856e0 { void* vtbl; };

int func_006856e0(O_006856e0* o, int a, int b, int c)
{
    return ((Fn_006856e0*)o->vtbl)[0x58 / 4](o, a, 0x11, b, &c);
}
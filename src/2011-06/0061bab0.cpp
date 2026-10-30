// roc 2011-06 0061bab0  unit: RBX::Lua::WeakThreadRef  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0061bab0
//
// 0061bab0  8b442408             mov eax, dword ptr [esp + 8]
// 0061bab4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0061bab8  8b11                 mov edx, dword ptr [ecx]
// 0061baba  50                   push eax
// 0061babb  ffd2                 call edx
// 0061babd  83c404               add esp, 4
// 0061bac0  c3                   ret 
// copied from an identical function in another client (function ?invoke@@YAHPAUS@@H@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct S { int (__cdecl *f)(int); };

int invoke(S* s, int x)
{
    return s->f(x);
}
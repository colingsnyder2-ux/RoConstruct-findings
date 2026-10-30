// roc 2009-12 006a3b10  unit: RBX::Lua::VLiveThreadRef::?$sp_counted_impl_p  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a3b10
//
// 006a3b10  8b442408             mov eax, dword ptr [esp + 8]
// 006a3b14  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a3b18  8b11                 mov edx, dword ptr [ecx]
// 006a3b1a  50                   push eax
// 006a3b1b  ffd2                 call edx
// 006a3b1d  83c404               add esp, 4
// 006a3b20  c3                   ret 
// copied from an identical function in another client (function ?invoke@@YAHPAUS@@H@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct S { int (__cdecl *f)(int); };

int invoke(S* s, int x)
{
    return s->f(x);
}
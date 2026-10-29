// roc 2010-06 0060fc10  unit: RBX::Lua::VLiveThreadRef::?$sp_counted_impl_p  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060fc10
//
// 0060fc10  8b442408             mov eax, dword ptr [esp + 8]
// 0060fc14  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060fc18  8b11                 mov edx, dword ptr [ecx]
// 0060fc1a  50                   push eax
// 0060fc1b  ffd2                 call edx
// 0060fc1d  83c404               add esp, 4
// 0060fc20  c3                   ret 
// copied from an identical function in another client (function ?invoke@@YAHPAUS@@H@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct S { int (__cdecl *f)(int); };

int invoke(S* s, int x)
{
    return s->f(x);
}
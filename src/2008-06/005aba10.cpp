// from server: 100% by colin
// roc 2008-06 005aba10  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aba10
//
// 005aba10  8b442408             mov eax, dword ptr [esp + 8]
// 005aba14  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005aba18  8b11                 mov edx, dword ptr [ecx]
// 005aba1a  50                   push eax
// 005aba1b  ffd2                 call edx
// 005aba1d  83c404               add esp, 4
// 005aba20  c3                   ret 

struct S { int (__cdecl *f)(int); };

int invoke(S* s, int x)
{
    return s->f(x);
}

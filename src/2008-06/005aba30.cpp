// roc 2008-06 005aba30  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aba30
//
// 005aba30  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005aba34  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005aba38  8b542404             mov edx, dword ptr [esp + 4]
// 005aba3c  50                   push eax
// 005aba3d  8b02                 mov eax, dword ptr [edx]
// 005aba3f  51                   push ecx
// 005aba40  ffd0                 call eax
// 005aba42  83c408               add esp, 8
// 005aba45  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000007@@YAXHHH@Z)

namespace ns_ROCX000007 {
struct S {
};

void __cdecl f(int a, int b, int c) {
    void (*fn)(int, int) = *(void (**)(int, int))a;
    fn(b, c);
}
}

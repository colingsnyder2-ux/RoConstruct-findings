// from server: 100% by king_originala
// roc 2008-06 00542de0  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00542de0
//
// 00542de0  55                   push ebp
// 00542de1  8bec                 mov ebp, esp
// 00542de3  51                   push ecx
// 00542de4  894dfc               mov dword ptr [ebp - 4], ecx
// 00542de7  6a00                 push 0
// 00542de9  8b4508               mov eax, dword ptr [ebp + 8]
// 00542dec  50                   push eax
// 00542ded  e87e320000           call 0x546070
// 00542df2  83c408               add esp, 8
// 00542df5  8be5                 mov esp, ebp
// 00542df7  5d                   pop ebp
// 00542df8  c20400               ret 4

extern "C" void __cdecl helper(void *, int);

struct S {
    void f(void *);
};

#pragma optimize("", off)
void S::f(void *p)
{
    helper(p, 0);
}

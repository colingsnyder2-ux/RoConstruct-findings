// from server: 100% by king_originala
// roc 2008-06 0054ab40  unit: RBX::RenderBase::Mesh  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054ab40
//
// 0054ab40  55                   push ebp
// 0054ab41  8bec                 mov ebp, esp
// 0054ab43  6884399700           push 0x973984
// 0054ab48  6860ab5400           push 0x54ab60
// 0054ab4d  e8dec70000           call 0x557330
// 0054ab52  83c408               add esp, 8
// 0054ab55  a144db9700           mov eax, dword ptr [0x97db44]
// 0054ab5a  5d                   pop ebp
// 0054ab5b  c3                   ret 

extern "C" void __cdecl sub_557330(void *, void *);

#pragma optimize("", off)

void *__cdecl f()
{
    sub_557330((void *)0x0054AB60, (void *)0x00973984);
    return *(void **)0x0097DB44;
}

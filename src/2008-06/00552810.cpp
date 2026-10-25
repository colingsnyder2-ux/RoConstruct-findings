// from server: 100% by tester
// roc 2008-06 00552810  unit: RBX::RenderBase::AggregateChunk  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00552810
//
// 00552810  55                   push ebp
// 00552811  8bec                 mov ebp, esp
// 00552813  51                   push ecx
// 00552814  894dfc               mov dword ptr [ebp - 4], ecx
// 00552817  6a00                 push 0
// 00552819  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0055281c  e83f72f2ff           call 0x479a60
// 00552821  8be5                 mov esp, ebp
// 00552823  5d                   pop ebp
// 00552824  c3                   ret 

struct S {
    void resize(int);
    void f();
};

#pragma optimize("", off)
void S::f()
{
    resize(0);
}

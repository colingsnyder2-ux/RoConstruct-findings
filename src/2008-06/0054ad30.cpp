// from server: 100% by tester
// roc 2008-06 0054ad30  unit: RBX::RenderBase::Mesh  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054ad30
//
// 0054ad30  55                   push ebp
// 0054ad31  8bec                 mov ebp, esp
// 0054ad33  51                   push ecx
// 0054ad34  894dfc               mov dword ptr [ebp - 4], ecx
// 0054ad37  6a00                 push 0
// 0054ad39  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054ad3c  e86f59f3ff           call 0x4806b0
// 0054ad41  8be5                 mov esp, ebp
// 0054ad43  5d                   pop ebp
// 0054ad44  c3                   ret 

struct S {
    void resize(int);
    void f();
};

#pragma optimize("", off)
void S::f()
{
    resize(0);
}

// from server: 100% by king_originala
// roc 2008-06 005527f0  unit: RBX::RenderBase::AggregateChunk  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005527f0
//
// 005527f0  55                   push ebp
// 005527f1  8bec                 mov ebp, esp
// 005527f3  51                   push ecx
// 005527f4  894dfc               mov dword ptr [ebp - 4], ecx
// 005527f7  6a00                 push 0
// 005527f9  6a00                 push 0
// 005527fb  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005527fe  e8dd8cf2ff           call 0x47b4e0
// 00552803  8b45fc               mov eax, dword ptr [ebp - 4]
// 00552806  8be5                 mov esp, ebp
// 00552808  5d                   pop ebp
// 00552809  c3                   ret 

struct S {
    void sub_47b4e0(int, int);
    S *sub_5527f0();
};

#pragma optimize("", off)
S *S::sub_5527f0()
{
    sub_47b4e0(0, 0);
    return this;
}
#pragma optimize("", on)

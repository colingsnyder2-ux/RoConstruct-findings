// from server: 100% by king_originala
// roc 2008-06 00552fd0  unit: RBX::RenderBase::AggregateChunk  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00552fd0
//
// 00552fd0  55                   push ebp
// 00552fd1  8bec                 mov ebp, esp
// 00552fd3  51                   push ecx
// 00552fd4  894dfc               mov dword ptr [ebp - 4], ecx
// 00552fd7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00552fda  e84133ffff           call 0x546320
// 00552fdf  f7d8                 neg eax
// 00552fe1  1bc0                 sbb eax, eax
// 00552fe3  83c001               add eax, 1
// 00552fe6  8be5                 mov esp, ebp
// 00552fe8  5d                   pop ebp
// 00552fe9  c3                   ret 

struct S {
    unsigned int count() const;
    bool empty() const;
};

#pragma optimize("", off)
bool S::empty() const
{
    return !count();
}

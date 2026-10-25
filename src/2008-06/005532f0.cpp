// from server: 100% by king_originala
// roc 2008-06 005532f0  unit: RBX::RenderBase::AggregateChunk  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005532f0
//
// 005532f0  55                   push ebp
// 005532f1  8bec                 mov ebp, esp
// 005532f3  51                   push ecx
// 005532f4  894dfc               mov dword ptr [ebp - 4], ecx
// 005532f7  6a00                 push 0
// 005532f9  8b4508               mov eax, dword ptr [ebp + 8]
// 005532fc  50                   push eax
// 005532fd  e82e010000           call 0x553430
// 00553302  83c408               add esp, 8
// 00553305  8be5                 mov esp, ebp
// 00553307  5d                   pop ebp
// 00553308  c20400               ret 4

extern "C" void __cdecl func_00553430(void *, int);

struct S
{
    void func_005532f0(void *);
};

#pragma optimize("", off)
void S::func_005532f0(void *value)
{
    func_00553430(value, 0);
}

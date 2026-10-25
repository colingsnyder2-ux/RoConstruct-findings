// from server: 100% by king_originala
// roc 2008-06 005530a0  unit: RBX::RenderBase::AggregateChunk  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005530a0
//
// 005530a0  55                   push ebp
// 005530a1  8bec                 mov ebp, esp
// 005530a3  83ec0c               sub esp, 0xc
// 005530a6  894df4               mov dword ptr [ebp - 0xc], ecx
// 005530a9  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005530ac  8b08                 mov ecx, dword ptr [eax]
// 005530ae  8b5004               mov edx, dword ptr [eax + 4]
// 005530b1  894df8               mov dword ptr [ebp - 8], ecx
// 005530b4  8955fc               mov dword ptr [ebp - 4], edx
// 005530b7  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005530ba  50                   push eax
// 005530bb  8d4df8               lea ecx, [ebp - 8]
// 005530be  e86d010000           call 0x553230
// 005530c3  8b08                 mov ecx, dword ptr [eax]
// 005530c5  8b5004               mov edx, dword ptr [eax + 4]
// 005530c8  8b4508               mov eax, dword ptr [ebp + 8]
// 005530cb  8908                 mov dword ptr [eax], ecx
// 005530cd  895004               mov dword ptr [eax + 4], edx
// 005530d0  8b4508               mov eax, dword ptr [ebp + 8]
// 005530d3  8be5                 mov esp, ebp
// 005530d5  5d                   pop ebp
// 005530d6  c20800               ret 8

struct S {
    int first;
    int second;

    S& advance(int amount);
    S offset(int amount) const;
};

#pragma optimize("", off)
S S::offset(int amount) const {
    S copy = *this;
    return copy.advance(amount);
}
#pragma optimize("", on)

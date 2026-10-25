// from server: 100% by king_originala
// roc 2008-06 005534a0  unit: RBX::RenderBase::AggregateChunk  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005534a0
//
// 005534a0  55                   push ebp
// 005534a1  8bec                 mov ebp, esp
// 005534a3  51                   push ecx
// 005534a4  894dfc               mov dword ptr [ebp - 4], ecx
// 005534a7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005534aa  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005534ad  8908                 mov dword ptr [eax], ecx
// 005534af  8b45fc               mov eax, dword ptr [ebp - 4]
// 005534b2  8be5                 mov esp, ebp
// 005534b4  5d                   pop ebp
// 005534b5  c20400               ret 4

struct S {
    int value;
    S(int);
};

#pragma optimize("", off)
S::S(int v)
{
    value = v;
}

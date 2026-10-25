// from server: 100% by king_originala
// roc 2008-06 00553830  unit: RBX::RenderBase::AggregateChunk  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00553830
//
// 00553830  55                   push ebp
// 00553831  8bec                 mov ebp, esp
// 00553833  51                   push ecx
// 00553834  894dfc               mov dword ptr [ebp - 4], ecx
// 00553837  8b45fc               mov eax, dword ptr [ebp - 4]
// 0055383a  8b00                 mov eax, dword ptr [eax]
// 0055383c  8be5                 mov esp, ebp
// 0055383e  5d                   pop ebp
// 0055383f  c20400               ret 4

struct S {
    int value;
    int f(int);
};

#pragma optimize("", off)
int S::f(int) {
    return value;
}
#pragma optimize("", on)

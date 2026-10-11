// from server: 30% by colin
// roc 2008-06 00553480  unit: RBX::RenderBase::AggregateChunk  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00553480
//
// 00553480  55                   push ebp
// 00553481  8bec                 mov ebp, esp
// 00553483  51                   push ecx
// 00553484  894dfc               mov dword ptr [ebp - 4], ecx
// 00553487  8b45fc               mov eax, dword ptr [ebp - 4]
// 0055348a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0055348d  8908                 mov dword ptr [eax], ecx
// 0055348f  8b45fc               mov eax, dword ptr [ebp - 4]
// 00553492  8be5                 mov esp, ebp
// 00553494  5d                   pop ebp
// 00553495  c20800               ret 8

struct RBX_RenderBase_AggregateChunk {
    void assign(int a, int b);
};

void RBX_RenderBase_AggregateChunk::assign(int a, int b) {
    *(int*)this = a;
}

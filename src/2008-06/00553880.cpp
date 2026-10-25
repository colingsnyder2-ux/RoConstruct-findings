// from server: 100% by king_originala
// roc 2008-06 00553880  unit: RBX::RenderBase::AggregateChunk  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00553880
//
// 00553880  55                   push ebp
// 00553881  8bec                 mov ebp, esp
// 00553883  51                   push ecx
// 00553884  894dfc               mov dword ptr [ebp - 4], ecx
// 00553887  8b45fc               mov eax, dword ptr [ebp - 4]
// 0055388a  83c008               add eax, 8
// 0055388d  50                   push eax
// 0055388e  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00553891  51                   push ecx
// 00553892  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00553895  52                   push edx
// 00553896  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00553899  50                   push eax
// 0055389a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0055389d  51                   push ecx
// 0055389e  8b5508               mov edx, dword ptr [ebp + 8]
// 005538a1  52                   push edx
// 005538a2  e809000000           call 0x5538b0
// 005538a7  83c418               add esp, 0x18
// 005538aa  8be5                 mov esp, ebp
// 005538ac  5d                   pop ebp
// 005538ad  c21400               ret 0x14

struct Pair {
    unsigned int first;
    unsigned int second;
};

extern unsigned int __cdecl copy_range(Pair first, Pair last,
                                      unsigned int destinationFirst,
                                      void* destinationSecond);

struct S {
    unsigned char prefix[8];
    unsigned char destination;
    unsigned int f(Pair first, Pair last, unsigned int destinationFirst);
};

#pragma optimize("", off)
unsigned int S::f(Pair first, Pair last, unsigned int destinationFirst)
{
    return copy_range(first, last, destinationFirst, &destination);
}

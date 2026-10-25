// from server: 100% by king_originala
// roc 2008-06 00553230  unit: RBX::RenderBase::AggregateChunk  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00553230
//
// 00553230  55                   push ebp
// 00553231  8bec                 mov ebp, esp
// 00553233  51                   push ecx
// 00553234  894dfc               mov dword ptr [ebp - 4], ecx
// 00553237  8b4508               mov eax, dword ptr [ebp + 8]
// 0055323a  f7d8                 neg eax
// 0055323c  50                   push eax
// 0055323d  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00553240  e89b35ffff           call 0x5467e0
// 00553245  8be5                 mov esp, ebp
// 00553247  5d                   pop ebp
// 00553248  c20400               ret 4

struct S {
    S& g(int);
    void f(int);
};

#pragma optimize("", off)
void S::f(int value)
{
    g(-value);
}

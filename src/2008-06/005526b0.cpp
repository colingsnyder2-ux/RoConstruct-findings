// from server: 100% by king_originala
// roc 2008-06 005526b0  unit: RBX::RenderBase::AggregateChunk  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005526b0
//
// 005526b0  55                   push ebp
// 005526b1  8bec                 mov ebp, esp
// 005526b3  51                   push ecx
// 005526b4  894dfc               mov dword ptr [ebp - 4], ecx
// 005526b7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005526ba  8a4061               mov al, byte ptr [eax + 0x61]
// 005526bd  8be5                 mov esp, ebp
// 005526bf  5d                   pop ebp
// 005526c0  c3                   ret 

struct AggregateChunk {
    char padding[0x61];
    bool value;
    bool getValue();
};

#pragma optimize("", off)
bool AggregateChunk::getValue() {
    return value;
}
#pragma optimize("", on)

// from server: 100% by colin
// roc 2007-08 004d0470  unit: RBX::View::PartChunk  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d0470
//
// 004d0470  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 004d0476  8a80d5010000         mov al, byte ptr [eax + 0x1d5]
// 004d047c  c3                   ret 

struct ChunkData {
    char padding[0x1d5];
    bool flag;
};

struct PartChunk {
    char padding[0xb0];
    ChunkData* data;
    bool getFlag() const;
};

bool PartChunk::getFlag() const
{
    return data->flag;
}

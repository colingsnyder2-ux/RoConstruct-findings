// from server: 28% by why2
struct RBX_AggregateChunk {
    char pad[0x58];
    unsigned char field_58;
    unsigned char get_58();
};

unsigned char RBX_AggregateChunk::get_58() {
    return field_58;
}

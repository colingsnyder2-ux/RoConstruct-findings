// from server: 32% by colin




struct AggChunk {
    char pad[0x28];
};

struct AggContainer {
    void __cdecl destroy(AggChunk* begin, AggChunk* end);
};

extern "C" void __cdecl sub_6A158C(int, int);

void AggContainer::destroy(AggChunk* begin, AggChunk* end)
{
    AggChunk* p = begin;
    while (p != end) {
        sub_6A158C(0, 0);
        p = (AggChunk*)((char*)p + 0x28);
    }
}

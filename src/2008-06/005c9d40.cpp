// from server: 28% by king_originala
extern "C" void* __cdecl malloc(unsigned int size);

struct TypedStatsItem {
    void __cdecl construct(const unsigned int* value);
};

struct TypedMemItem {
    void __cdecl construct(const unsigned int* value);
};

void TypedMemItem::construct(const unsigned int* value)
{
    void* mem = malloc(0x178);
    if (mem) {
        ((TypedStatsItem*)mem)->construct(value);
    }
    ((TypedStatsItem*)this)->construct((const unsigned int*)mem);
}

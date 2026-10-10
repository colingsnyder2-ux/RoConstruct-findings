// from server: 16% by colin
extern "C" void* __cdecl malloc(unsigned int size);

struct Item {
    void construct(void* p);
};

struct TypedStatsItem : Item {
    void* func;
    void init(void* f);
};

void TypedStatsItem::init(void* f) {
    func = f;
}

void Item::construct(void* p) {
    void* mem = malloc(0x120);
    if (mem) {
        ((TypedStatsItem*)mem)->init(p);
    }
}

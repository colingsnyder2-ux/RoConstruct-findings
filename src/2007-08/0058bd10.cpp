// from server: 38% by colin
struct Item {
    void constructFromValue(const void* value);
    void assignFromItem(const Item* other);
};

struct TypedStatsItem : Item {
    void* func;
    TypedStatsItem(const void* value);
};

extern "C" void* __cdecl malloc(unsigned int size);

void* __cdecl operator new(unsigned int size);

TypedStatsItem::TypedStatsItem(const void* value) {
    func = 0;
    void* mem = malloc(0x120);
    if (mem) {
        Item* base = (Item*)mem;
        base->constructFromValue(value);
        func = mem;
    } else {
        func = 0;
    }
    Item* self = this;
    self->assignFromItem((Item*)func);
}

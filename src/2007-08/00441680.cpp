// from server: 28% by colin
struct EnumDescriptor;

struct Descriptor {
    char pad[0x20];
    unsigned char flag21;
};

struct Item : Descriptor {
    const EnumDescriptor& owner;
    const int value;
    const unsigned int index;
};

struct EnumDescriptor {
    char pad[0x10];
    Item* begin;
    Item* end;
    Item* capacityEnd;

    bool convertToValue(unsigned int index, int& value) const;
    bool convertToString(unsigned int index, void* value) const;

    void destroyRange(Item* first, Item* last);
    void destroyItem(Item* item);
    void clear();
    void destroyAll();
};

void EnumDescriptor::destroyRange(Item* first, Item* last)
{
    while (first != last) {
        Item* next = *(Item**)((char*)first + 4);
        if (first->owner.convertToValue(first->index, *(int*)((char*)first + 0x14))) {
            first->owner.convertToString(first->index, *(void**)((char*)first + 0x18));
        }
        first = next;
    }
}

void EnumDescriptor::destroyItem(Item* item)
{
    item->~Item();
}

void EnumDescriptor::clear()
{
    destroyRange(begin, end);
    end = 0;
    capacityEnd = 0;
    begin = 0;
}

void EnumDescriptor::destroyAll()
{
    Item* p = begin;
    while (p->flag21 == 0) {
        destroyItem(p);
        p = p->owner.begin;
    }
    clear();
}

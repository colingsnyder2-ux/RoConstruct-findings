// from server: 61% by king_originala
struct Connector {
    char padding[12];
    void* first;
    void* second;
    bool matches(void*, void*, int, void*, void*);
};

struct Item {
    char padding[8];
    Connector connector;
};

struct ItemArray {
    Item** data;
    int size;
    int capacity;
    void grow(int, int);
    void appendAliased(Item* const*);
};

struct ByteArray {
    unsigned char* data;
    int size;
    int capacity;
    void grow(int, int);
    void appendAliased(const unsigned char*);
};

extern int reuseCount;
extern int createCount;

struct Contact {
    char padding[52];
    ItemArray items;
    ByteArray used;

    Item* create(void*, void*);
    Item* find(void*, void*, int, void*, void*);
};

Item* Contact::find(void* first, void* second, int kind,
                    void* fourth, void* fifth)
{
    for (int i = 0; i < used.size; ++i) {
        if (!used.data[i] &&
            items.data[i]->connector.matches(first, second, kind,
                                              fourth, fifth)) {
            used.data[i] = 1;
            ++reuseCount;
            items.data[i]->connector.first = first;
            items.data[i]->connector.second = second;
            return items.data[i];
        }
    }

    ++createCount;
    Item* result = create(first, second);

    if (items.size < items.capacity) {
        Item** slot = items.data + items.size;
        if (slot)
            *slot = result;
        ++items.size;
    } else {
        Item* value = result;
        if (reinterpret_cast<unsigned int>(&value) >=
                reinterpret_cast<unsigned int>(items.data) &&
            reinterpret_cast<unsigned int>(&value) <
                reinterpret_cast<unsigned int>(items.data + items.size)) {
            items.appendAliased(&value);
        } else {
            items.grow(items.size + 1, 0);
            items.data[items.size - 1] = result;
        }
    }

    if (used.size < used.capacity) {
        unsigned char* slot = used.data + used.size;
        if (slot)
            *slot = 1;
        ++used.size;
    } else {
        unsigned char value = 1;
        if (reinterpret_cast<unsigned int>(&value) >=
                reinterpret_cast<unsigned int>(used.data) &&
            reinterpret_cast<unsigned int>(&value) <
                reinterpret_cast<unsigned int>(used.data + used.size)) {
            used.appendAliased(&value);
        } else {
            used.grow(used.size + 1, 0);
            used.data[used.size - 1] = 1;
        }
    }

    return result;
}

// from server: 46% by coldek
extern "C" void (__cdecl* invalid_parameter)();

struct Proxy {
    void* container;
};

struct Bounds {
    char padding[0x10];
    void* last;
};

template<class T> struct VectorIterator {
    Proxy* owner;
    T* position;
    T& operator*() const;
    VectorIterator& operator++();
    bool operator!=(const VectorIterator&) const;
};

template<class T>
__forceinline T& VectorIterator<T>::operator*() const
{
    Bounds* v;
    if (owner)
        v = static_cast<Bounds*>(owner->container);
    else {
        invalid_parameter();
        v = 0;
    }
    if (position >= static_cast<T*>(v->last))
        invalid_parameter();
    return *position;
}

template<class T>
__forceinline VectorIterator<T>& VectorIterator<T>::operator++()
{
    Bounds* v;
    if (owner)
        v = static_cast<Bounds*>(owner->container);
    else {
        invalid_parameter();
        v = 0;
    }
    if (position >= static_cast<T*>(v->last))
        invalid_parameter();
    ++position;
    return *this;
}

template<class T>
__forceinline bool VectorIterator<T>::operator!=(const VectorIterator& other) const
{
    if (!owner || owner != other.owner)
        invalid_parameter();
    return position != other.position;
}

template<class T> struct Vector {
    unsigned int unused;
    Proxy* owner;
    unsigned int reserved[2];
    T* first;
    T* last;
    T* limit;
    VectorIterator<T> begin();
    VectorIterator<T> end();
};

template<class T>
__forceinline VectorIterator<T> Vector<T>::begin()
{
    T* p = first;
    if (p > last)
        invalid_parameter();
    VectorIterator<T> result = { owner, p };
    return result;
}

template<class T>
__forceinline VectorIterator<T> Vector<T>::end()
{
    T* p = last;
    if (first > p)
        invalid_parameter();
    VectorIterator<T> result = { owner, p };
    return result;
}

struct Entry {
    void* value;
    unsigned int unused;
};

struct Node {
    unsigned int links[3];
    Vector<Entry> values;
};

struct Map;

struct MapIterator {
    Proxy* owner;
    Node* position;
    Node& operator*() const;
    bool operator!=(const MapIterator&) const;
};

struct Map {
    Proxy* owner;
    unsigned int unused[5];
    Node* sentinel;
    MapIterator find(void* const*);
};

__forceinline Node& MapIterator::operator*() const
{
    Map* m;
    if (owner)
        m = static_cast<Map*>(owner->container);
    else {
        invalid_parameter();
        m = 0;
    }
    if (position == m->sentinel)
        invalid_parameter();
    return *position;
}

__forceinline bool MapIterator::operator!=(const MapIterator& other) const
{
    if (!owner || owner != other.owner)
        invalid_parameter();
    return position != other.position;
}

struct Text;
extern Text* (__thiscall* construct_text)(Text*, const char*);

struct Text {
    void* value;
    Text(const char*);
    Text(const Text&);
};

inline Text::Text(const char* s)
{
    construct_text(this, s);
}

struct Item;

struct ItemTable {
    void* unused[62];
    void (__thiscall* assign)(Item*, const int*);
    bool (__thiscall* combine)(Item*, int*, const int*);
};

struct Item {
    ItemTable* table;
    int convert(void*);
    void caption(Text);
    void hidden(int);
};

extern const char caption_text[];

struct Selection : Vector<void*> {
    void update(Map*);
};

void Selection::update(Map* map)
{
    bool haveValue = false;
    int value;
    MapIterator mapEnd = { map->owner, map->sentinel };
    VectorIterator<void*> current = begin();
    VectorIterator<void*> finish = end();

    for (; current != finish; ++current) {
        void* key = *current;
        MapIterator found = map->find(&key);
        if (found != mapEnd) {
            VectorIterator<Entry> entry = (*found).values.begin();
            VectorIterator<Entry> entryEnd = (*found).values.end();
            for (; entry != entryEnd; ++entry) {
                if (!haveValue) {
                    void* source = (*entry).value;
                    Item* item = reinterpret_cast<Item*>(
                        reinterpret_cast<char*>(this) - 0x114);
                    value = item->convert(source);
                    item->table->assign(item, &value);
                } else {
                    void* source = (*entry).value;
                    Item* item = reinterpret_cast<Item*>(
                        reinterpret_cast<char*>(this) - 0x114);
                    int nextValue = item->convert(source);
                    if (!item->table->combine(item, &value, &nextValue)) {
                        reinterpret_cast<Item*>(
                            reinterpret_cast<char*>(this) - 0x114)->caption(
                                Text(caption_text));
                        reinterpret_cast<Item*>(
                            reinterpret_cast<char*>(this) - 0x114)->hidden(0);
                        return;
                    }
                }
                haveValue = true;
            }
        }
    }
    reinterpret_cast<Item*>(
        reinterpret_cast<char*>(this) - 0x114)->hidden(!haveValue);
}

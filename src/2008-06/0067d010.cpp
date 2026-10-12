// from server: 74% by king_originala
extern "C" void (__cdecl * const invalid_parameter)();

struct Renderable;
struct Queue;

extern void (__thiscall * const addRenderable)(Queue*, Renderable*);
extern void (__thiscall * const addRenderableGroup)(Queue*, Renderable*, unsigned char);

typedef void (__cdecl *Check)();

struct RenderableTable {
    char padding0[0x44];
    bool (__thiscall *visible)(Renderable*);
    char padding1[0x28];
    void (__thiscall *update)(Renderable*, Queue*);
};

struct Renderable {
    RenderableTable* table;
};

struct Queue {};

struct Storage {
    char padding[0x10];
    Renderable** end;
};

struct Proxy {
    Storage* storage;
};

struct Iterator {
    Proxy* proxy;
    Renderable** current;

    Renderable* get(Check check) const;
    void advance(Check check);
    bool different(const Iterator& other, Check check) const;
};

inline Renderable* Iterator::get(Check check) const
{
    Storage* storage;
    if (!proxy) {
        check();
        storage = 0;
    } else {
        storage = proxy->storage;
    }
    if (current >= storage->end)
        check();
    return *current;
}

inline void Iterator::advance(Check check)
{
    Storage* storage;
    if (!proxy) {
        check();
        storage = 0;
    } else {
        storage = proxy->storage;
    }
    if (current >= storage->end)
        check();
    ++current;
}

inline bool Iterator::different(const Iterator& other, Check check) const
{
    if (!proxy || proxy != other.proxy)
        check();
    return current != other.current;
}

struct Parent {
    char padding[0x179];
    unsigned char enabled;
};

struct S {
    char padding0[0x48];
    unsigned char group;
    unsigned char useGroup;
    char padding1[0x86];
    Parent* parent;
    char padding2[4];
    Proxy* proxy;
    char padding3[8];
    Renderable** begin;
    Renderable** end;
    char padding4[0xB8];
    unsigned short level;
    char padding5[0x1E];
    Renderable** childrenBegin;
    Renderable** childrenEnd;
    char padding6[8];
    unsigned char enabled;

    void f(Queue* queue);
};

void S::f(Queue* queue)
{
    if (!enabled)
        return;

    if (level > 0 && parent->enabled) {
        unsigned int index = level - 1;
        if (index >= static_cast<unsigned int>(childrenEnd - childrenBegin))
            invalid_parameter();
        Renderable* child = childrenBegin[index];
        child->table->update(child, queue);
        return;
    }

    Iterator last;
    last.current = end;
    Check check = invalid_parameter;
    if (begin > end)
        check();
    last.proxy = proxy;

    Iterator first;
    first.current = begin;
    if (begin > end)
        check();
    first.proxy = proxy;

    while (first.different(last, check)) {
        Renderable* renderable = first.get(check);
        if (renderable->table->visible(renderable)) {
            if (useGroup)
                addRenderableGroup(queue, first.get(check), group);
            else
                addRenderable(queue, first.get(check));
        }
        first.advance(check);
    }
}

// from server: 98% by king_originala
struct Stage;
struct Item;

struct Endpoint {
    char pad[92];
    void* data;
    int get();
};

struct FlagData {
    char pad[20];
    unsigned char enabled;
};

struct VirtualBase {
    virtual void slot0();
    virtual int rank();
    virtual void slot2();
    virtual int kind();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void update();
};

struct Item : VirtualBase {
    Stage* owner;
    int field8;
    Endpoint* first;
    Endpoint* second;
    void finish(int);
};

struct Manager {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void remove(Item*);
    virtual void forward(Item*);
};

struct Container {
    void insert(Item**);
};

struct Stage : VirtualBase {
    int field4;
    Manager* manager;
    char pad[36];
    Container items;
    void f(Item*);
};

extern Item* __cdecl findPair(Endpoint*, Endpoint*);

void Stage::f(Item* item)
{
    FlagData* first = reinterpret_cast<FlagData*>(item->first->get());
    FlagData* second = reinterpret_cast<FlagData*>(item->second->get());
    first->enabled = 1;
    second->enabled = 1;

    int otherRank = item->owner->rank();
    if (otherRank > rank())
        manager->forward(item);

    if (item->kind() != 1) {
        Item* entry = item;
        items.insert(&entry);
        item->update();
        Item* pair = findPair(item->first, item->second);
        if (pair && pair->owner == this)
            manager->remove(pair);
    }

    item->finish(reinterpret_cast<int>(this));
}

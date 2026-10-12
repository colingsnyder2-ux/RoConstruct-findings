// from server: 94% by king_originala
struct Item;
struct TreeStage;

struct Container {
    void remove(Item** item);
};

struct Owner {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void remove(Item* item);
};

struct Item {
    virtual void release(unsigned int flags);
    TreeStage* parent;
    char padding[20];
    bool linked;
};

struct TreeStage {
    virtual void release(unsigned int flags);
    virtual int rank();

    int reserved;
    Owner* owner;
    char padding[76];
    Container items;

    void remove(Item* item);
};

void TreeStage::remove(Item* item)
{
    Item* saved = item;
    int parentRank = saved->parent->rank();
    if (parentRank > rank())
        owner->remove(saved);

    *(Item* volatile*)&item = saved;
    if (saved->linked) {
        items.remove(&item);
        saved->linked = false;
    }
}

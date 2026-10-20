// roc-cl: 50727
// from server: 57% by colin
struct Link {
    virtual void slot0();
    virtual void slot1();
    virtual Link* update();
    void finish();
};

struct Item {
    Item* next;
    char padding[4];
    Link *link;
};

struct List {
    Item *head;
};

struct SimJobStage {
    char padding[0x24];
    List *list;
    void f();
};

void SimJobStage::f()
{
    List *l = list;
    Item *it = l->head;
    while (it != (Item *)l) {
        Link *link = it->link;
        if (link->update())
            link->update()->finish();
        it = it->next;
    }
}

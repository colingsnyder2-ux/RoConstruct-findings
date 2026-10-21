// from server: 57% by colin
struct Link {
    void update();
};

struct Item {
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
        if (link->update(), link->update(), link != 0) {
            link->update();
        }
        it = (Item *)it->padding;
    }
}

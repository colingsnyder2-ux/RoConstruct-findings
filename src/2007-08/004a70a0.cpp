// from server: 49% by colin
struct Replicator;

struct PooledItem {
    void* vfptr;
    int refcount1;
    int refcount2;
    Replicator* replicator;
};

struct ChangePropertyItem {
    PooledItem* item;
    ChangePropertyItem(Replicator* rep);
};

extern "C" void* __cdecl operator_new(unsigned int size);

ChangePropertyItem::ChangePropertyItem(Replicator* rep)
{
    item = 0;
    PooledItem* p = (PooledItem*)operator_new(0x10);
    if (p) {
        p->refcount1 = 1;
        p->refcount2 = 1;
        p->vfptr = (void*)0x79d394;
        p->replicator = rep;
    } else {
        p = 0;
    }
    item = p;
}

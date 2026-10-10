// from server: 49% by colin
struct PooledItem {
    void* vtable;
    int refcount1;
    int refcount2;
    int field_c;
};

struct Replicator {
    PooledItem* item;
    Replicator(int);
};

extern "C" void* __cdecl operator_new(unsigned int);

Replicator::Replicator(int a)
{
    item = 0;
    PooledItem* p = (PooledItem*)operator_new(0x10);
    if (p) {
        p->refcount1 = 1;
        p->refcount2 = 1;
        p->vtable = (void*)0x79d344;
        p->field_c = a;
    } else {
        p = 0;
    }
    item = p;
}

// from server: 49% by colin
struct PooledItem {
    void* vtable;
    int refcount1;
    int refcount2;
    int field_c;
};

struct Replicator {
    PooledItem* item;
    Replicator(PooledItem* p);
};

extern "C" void* __cdecl operator_new(unsigned int size);

Replicator::Replicator(PooledItem* p)
{
    item = 0;
    PooledItem* mem = (PooledItem*)operator_new(0x10);
    if (mem) {
        mem->refcount1 = 1;
        mem->refcount2 = 1;
        mem->vtable = (void*)0x79d36c;
        mem->field_c = (int)p;
    } else {
        mem = 0;
    }
    item = mem;
}

// from server: 49% by colin
struct Replicator;

struct ChangePropertyItem {
    void* vtable;
    int refcount1;
    int refcount2;
    Replicator* replicator;

    ChangePropertyItem(Replicator* rep);
};

extern "C" void* __cdecl operator_new(unsigned int size);

ChangePropertyItem::ChangePropertyItem(Replicator* rep)
{
    vtable = 0;
    void* p = operator_new(0x10);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x79d380;
        *(Replicator**)((char*)p + 0xc) = rep;
    } else {
        p = 0;
    }
    vtable = p;
}

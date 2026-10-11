// from server: 50% by colin
struct BoundPropGetSet {
    void* field0;
    BoundPropGetSet(void* a, int b, int c);
};

extern "C" void* __cdecl operator_new(unsigned int size);

struct Alloc {
    int f0;
    int f4;
    int f8;
    int fc;
};

BoundPropGetSet::BoundPropGetSet(void* a, int b, int c)
{
    field0 = 0;
    Alloc* p = (Alloc*)operator_new(0x14);
    if (p) {
        p->f4 = 1;
        p->f8 = 1;
        p->f0 = 0x841f38;
        p->fc = b;
    } else {
        p = 0;
    }
    field0 = p;
}

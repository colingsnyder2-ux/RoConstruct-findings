// from server: 47% by tester
struct ContentItem {
    void* vtable;
    int refcount;
    int refcount2;
    int field_c;
    int field_10;
};

struct VSoundId {
    ContentItem* item;
    VSoundId(int a, int b);
};

extern "C" void* __cdecl operator_new(unsigned int size);

VSoundId::VSoundId(int a, int b)
{
    item = 0;
    ContentItem* p = (ContentItem*)operator_new(0x14);
    if (p != 0) {
        p->refcount = 1;
        p->refcount2 = 1;
        p->vtable = (void*)0x81531c;
        p->field_c = a;
        p->field_10 = b;
        item = p;
    } else {
        item = 0;
    }
}

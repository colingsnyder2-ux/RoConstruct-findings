// from server: 25% by colin
struct UTupleHolder {
    void construct(void*);
    void* init();
};

void* UTupleHolder::init()
{
    void* p = operator new(0x1c);
    if (p) {
        ((UTupleHolder*)p)->construct((char*)this + 4);
    }
    return p;
}

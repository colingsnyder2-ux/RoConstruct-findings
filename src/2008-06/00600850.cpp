// from server: 48% by colin
struct BoundProp;

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue();
    virtual void setValue();
};

struct BoundPropGetSet : GetSet {
    BoundProp* desc;
    int member;
    int changed;
    BoundPropGetSet(BoundProp* d, int m, int c);
};

extern "C" void* __cdecl operator_new(unsigned int);

BoundPropGetSet::BoundPropGetSet(BoundProp* d, int m, int c)
{
    this->desc = 0;
    void* p = operator_new(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x841ee8;
        *(int*)((char*)p + 0xc) = m;
    } else {
        p = 0;
    }
    this->desc = (BoundProp*)p;
}

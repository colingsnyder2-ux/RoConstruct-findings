// from server: 76% by colin
struct DescribedBase;

struct PropertyDescriptor {
    void raisePropertyChanged(const PropertyDescriptor& desc);
};

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(const DescribedBase* object) const;
    virtual void setValue(DescribedBase* object, const void* value) const;
};

struct BoundPropGetSet {
    char pad0[8];
    int memberOffset;
    char pad1[4];
    void (*changed)(void*, const PropertyDescriptor&);
    int changedOffset;
    bool setValue(DescribedBase* object, const void* value);
};

extern "C" int __stdcall sub_544FC0(void* a, void* b);
extern "C" void* __stdcall sub_77E690();
extern "C" void __stdcall sub_444710(void* a);

bool BoundPropGetSet::setValue(DescribedBase* object, const void* value)
{
    char* obj = (char*)object;
    if (object)
        obj = (char*)object - 4;
    else
        obj = 0;

    char* member = (char*)this->memberOffset + (int)obj;

    if (!sub_544FC0(member, (void*)value))
        return false;

    char* member2 = (char*)this->memberOffset + (int)obj;
    sub_77E690();
    *(int*)(member2 + 0x1c) = *(int*)((char*)value + 0x1c);

    if (this->changed) {
        this->changed((char*)this->changedOffset + (int)obj, *(PropertyDescriptor*)this);
    }

    sub_444710((void*)(int)obj);
    return true;
}

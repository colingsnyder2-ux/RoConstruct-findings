// from server: 63% by colin




struct DescribedBase;

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(const DescribedBase* object, void* out) const;
    virtual void setValue(DescribedBase* object, const void* value) const;
};

struct BoundPropGetSet {
    char pad0[4];
    int member;
    char pad8[4];
    void (*changed)(const void*);
    int desc;
    void setValue(DescribedBase* object, const float* value) const;
};

extern "C" void __fastcall raisePropertyChanged(int self);

void BoundPropGetSet::setValue(DescribedBase* object, const float* value) const {
    int offset = object ? (int)object - 0x14 : 0;
    float* field = (float*)((char*)this->member + offset);
    if (*value != *field) {
        *field = *value;
        if (this->changed) {
            this->changed((const void*)(this->desc + offset));
        }
        raisePropertyChanged(offset);
    }
}

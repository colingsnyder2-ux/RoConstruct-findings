// from server: 62% by colin
struct DescribedBase;

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(const DescribedBase* object, void* out) const;
    virtual void setValue(DescribedBase* object, const void* value) const;
};

struct BoundPropGetSet {
    char pad0[4];
    int memberOffset;
    char pad8[4];
    void (*changed)(void*, const void*);
    char pad14[4];
    int descOffset;

    void setValue(DescribedBase* object, const double* value);
};

extern "C" void __fastcall sub_40db00(int ecx, int arg);

void BoundPropGetSet::setValue(DescribedBase* object, const double* value)
{
    char* obj = object ? reinterpret_cast<char*>(object) - 20 : 0;
    double* field = reinterpret_cast<double*>(obj + memberOffset);
    if (*value != *field) {
        *field = *value;
        if (changed) {
            changed(reinterpret_cast<char*>(this) + descOffset + reinterpret_cast<int>(obj), 0);
        }
        sub_40db00(reinterpret_cast<int>(obj), 0);
    }
}

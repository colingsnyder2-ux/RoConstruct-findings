// from server: 89% by colin
struct DescribedBase;
struct Variant;

struct EnumPropertyDescriptor {
    bool equalValues(const DescribedBase* a, const DescribedBase* b) const;
};

struct SurfaceEnumPropDescriptor : EnumPropertyDescriptor {
    struct GetSet {
        virtual bool isReadOnly() const;
        virtual bool isWriteOnly() const;
        virtual void getValue(const DescribedBase* instance, Variant& value) const;
    };
    char pad[0x1c];
    GetSet* getset;
    bool equalValues(const DescribedBase* a, const DescribedBase* b) const;
};

extern "C" void* __stdcall func_005b7e80(const DescribedBase* a, const DescribedBase** out);
extern "C" bool __stdcall func_005dc2a0(void* p);

bool SurfaceEnumPropDescriptor::equalValues(const DescribedBase* a, const DescribedBase* b) const
{
    const DescribedBase* tmp;
    void* v = func_005b7e80(a, &tmp);
    if (func_005dc2a0(v)) {
        GetSet* gs = getset;
        gs->getValue(b, *(Variant*)&tmp);
        return true;
    }
    return false;
}

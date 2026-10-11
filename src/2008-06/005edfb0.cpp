// from server: 34% by tester
struct EnumDescBase {
    static void* singleton();
};

struct DescribedBase;

struct Variant {
    int storage;
};

struct GetSet {
    bool isReadOnly() const;
    bool isWriteOnly() const;
    void getValue(const DescribedBase* instance, Variant& value) const;
    void setValue(DescribedBase* instance, const Variant& value) const;
};

struct EnumPropertyDescriptor {
    void construct(const void* classDesc, void* enumDesc, const char* name, const char* category, int flags);
};

struct SurfaceEnumPropDescriptor : EnumPropertyDescriptor {
    GetSet* getset;
    bool isReadOnly() const;
    bool isWriteOnly() const;
    void get(const DescribedBase* instance, Variant& value) const;
    void set(DescribedBase* instance, const Variant& value) const;
};

extern "C" void __stdcall sub_557330(void* a, void* b);
extern "C" void* __stdcall sub_5ed630();
extern "C" bool __stdcall sub_448450(void* ecx, void* arg);

bool SurfaceEnumPropDescriptor::isReadOnly() const {
    sub_557330((void*)0x97b120, (void*)0x5ed690);
    void* desc = sub_5ed630();
    if (sub_448450(desc, getset)) {
        return getset->isReadOnly();
    }
    return false;
}

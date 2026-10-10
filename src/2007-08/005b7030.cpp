// from server: 72% by colin
struct DescribedBase;

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(const DescribedBase* instance, void* value) const;
    virtual void setValue(DescribedBase* instance, const void* value) const;
};

struct SurfaceGetSet : GetSet {
    int get;
    int set;
    virtual void setValue(DescribedBase* instance, const void* value) const;
};

extern "C" void* __cdecl sub_573890(void* p);

void SurfaceGetSet::setValue(DescribedBase* instance, const void* value) const {
    void* p;
    if (instance)
        p = (void*)((char*)instance - 4);
    else
        p = 0;
    char* obj = (char*)sub_573890(p);
    void* fn = *(void**)((char*)this + 8);
    void* v = *(void**)value;
    ((void (__thiscall*)(char*, void*))fn)(obj + 0x20, v);
}

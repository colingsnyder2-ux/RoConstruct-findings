// from server: 84% by colin
struct DescribedBase;

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(const DescribedBase* instance) const;
    virtual void setValue(DescribedBase* instance, const float& value) const;
};

struct SurfaceGetSet : GetSet {
    void setValue(DescribedBase* instance, const float& value) const;
};

extern "C" void* __fastcall sub_573890(void* p);

void SurfaceGetSet::setValue(DescribedBase* instance, const float& value) const {
    void* p = instance ? (char*)instance - 4 : 0;
    void* q = sub_573890(p);
    void (__thiscall *fn)(void*, float) = *(void (__thiscall **)(void*, float))((char*)this + 8);
    float v = value;
    fn((char*)q + 0x20, v);
}

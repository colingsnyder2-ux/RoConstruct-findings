// from server: 40% by colin
struct DescribedBase;

struct PropertyDescriptor {
    void raisePropertyChanged(const PropertyDescriptor&);
};

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(const DescribedBase*, void*) const;
    virtual void setValue(DescribedBase*, const void*) const;
};

struct BoundPropGetSet : public GetSet {
    PropertyDescriptor& desc;
    int member;
    int changed;
    void setValue(DescribedBase* object, const void* value) const;
};

extern "C" bool __cdecl type_info_equal(const void*, const void*);
extern "C" void __cdecl sub_5095d0(void*, void*);
extern "C" void __cdecl sub_5f1770(void*);

void BoundPropGetSet::setValue(DescribedBase* object, const void* value) const {
    int* p = (int*)((const char*)this + 0x10);
    int* memberPtr = 0;
    if (p != 0) {
        int* q = (int*)*p;
        if (q != 0) {
            typedef bool (__thiscall *Fn)(void*, const void*);
            Fn fn = *(Fn*)(*(char**)q + 4);
            if (fn(q, (const void*)0x8b0f30)) {
                memberPtr = (int*)((char*)q + 4);
            }
        } else {
            if (type_info_equal((const void*)0x8827c8, (const void*)0x8b0f30)) {
                memberPtr = (int*)((char*)0x8827c8 + 4);
            }
        }
    }
    int* src = *(int**)this;
    char buf[0x30];
    char* dst = buf;
    sub_5095d0(dst, src);
    *(float*)(dst + 0x24) = *(float*)((char*)src + 0x24);
    *(float*)(dst + 0x28) = *(float*)((char*)src + 0x28);
    *(float*)(dst + 0x2c) = *(float*)((char*)src + 0x2c);
    sub_5f1770(memberPtr);
}

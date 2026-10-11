// from server: 71% by tester
struct DescribedBase;

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(const DescribedBase* object, void* out) const;
    virtual void setValue(DescribedBase* object, const void* value) const;
};

struct BoundPropGetSet : GetSet {
    int desc;
    int member;
    int changed;
    void setValue(DescribedBase* object, const void* value) const;
};

extern "C" void __stdcall raisePropertyChanged(int);

void BoundPropGetSet::setValue(DescribedBase* object, const void* value) const {
    int* c;
    if (object) {
        c = (int*)((char*)object - 0x14);
    } else {
        c = 0;
    }
    int idx = *(int*)((char*)this + 0xc);
    int off = *(int*)((char*)c + 0x1c0);
    int base = *(int*)(idx + off);
    base += *(int*)((char*)this + 8);
    char v = *(char*)value;
    char* addr = (char*)c + base + 0x1c0;
    if (*addr != v) {
        *addr = v;
        int fn = *(int*)((char*)this + 0x10);
        if (fn) {
            int a = *(int*)((char*)this + 4);
            int b = *(int*)((char*)this + 0x18);
            int off2 = *(int*)((char*)c + 0x1c0);
            int p = *(int*)(b + off2);
            p += *(int*)((char*)this + 0x14);
            char* arg = (char*)c + p + 0x1c0;
            ((void (__stdcall*)(int, char*))fn)(a, arg);
        }
        int a2 = *(int*)((char*)this + 4);
        raisePropertyChanged(a2);
    }
}

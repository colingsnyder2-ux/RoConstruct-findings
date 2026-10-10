// from server: 45% by colin
struct DescribedBase;

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(const DescribedBase* object, void* out) const;
    virtual void setValue(DescribedBase* object, const void* value) const;
};

struct BoundPropGetSet : GetSet {
    char pad[0xe8];
    void* member;
    void* changed;

    BoundPropGetSet(void* desc, void* member, void* changed);
};

extern "C" void __stdcall sub_5A0AF0();
extern "C" void* __stdcall sub_5A0100();
extern "C" void __stdcall sub_541BF0(void* out, void* self);
extern "C" void __stdcall sub_77E698(void* str, const char* s);
extern "C" void __stdcall sub_77E6AC(void* str);
extern "C" void* __stdcall sub_8C1558();

BoundPropGetSet::BoundPropGetSet(void* desc, void* member, void* changed) {
    sub_5A0AF0();
    *(void**)((char*)this + 0xe8) = 0;
    *(void**)((char*)this) = (void*)0x7b37bc;
    *(void**)((char*)this + 4) = (void*)0x7b37b4;
    *(void**)((char*)this + 0x10) = (void*)0x7b37ac;
    *(void**)((char*)this + 0x14) = (void*)0x7b379c;
    *(void**)((char*)this + 0x2c) = (void*)0x7b378c;
    *(void**)((char*)this + 0x44) = (void*)0x7b377c;
    *(void**)((char*)this + 0x5c) = (void*)0x7b376c;
    *(void**)((char*)this + 0x74) = (void*)0x7b375c;
    *(void**)((char*)this + 0x8c) = (void*)0x7b374c;
    *(void**)((char*)this + 0xec) = sub_5A0100();
    *(void**)((char*)this + 0xf0) = 0;
    char buf[0x20];
    sub_77E698(buf, "SpawnerService");
    sub_541BF0(buf, this);
    sub_77E6AC(buf);
    char flag = 0;
    void* svc = sub_8C1558();
    void** vt = *(void***)svc;
    void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vt[2];
    fn(svc, (char*)this + 4, &flag);
}

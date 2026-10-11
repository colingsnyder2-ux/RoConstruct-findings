// from server: 63% by colin
struct DescribedBase;
struct Variant;

struct EnumPropertyDescriptor {
    void* vtable;
    void* getset;
    void* field_8;
    void* field_c;
    void* field_10;
    void* field_14;
    void* field_18;
    void* field_1c;
};

struct SurfaceEnumPropDescriptor : EnumPropertyDescriptor {
    bool equalValues(const DescribedBase* a, const DescribedBase* b) const;
};

struct Helper {
    bool method(void*);
};

extern "C" void __cdecl sub_557330(void*, void*);
extern "C" void* __cdecl sub_5ed630();
extern "C" void* __cdecl sub_554290(void*, void*);

bool SurfaceEnumPropDescriptor::equalValues(const DescribedBase* a, const DescribedBase* b) const {
    const char* pa;
    if (*(unsigned int*)((const char*)a + 0x18) < 0x10)
        pa = (const char*)a + 4;
    else
        pa = *(const char**)a;

    sub_557330((void*)0x97b120, (void*)0x5ed690);
    void* desc = sub_5ed630();

    char buf[4];
    void* r = sub_554290(buf, (void*)pa);
    bool eq = ((Helper*)desc)->method(r);
    if (eq) {
        void* p = *(void**)((const char*)this + 0x1c);
        void** vt = *(void***)p;
        void (*fn)(void*, void*) = (void (*)(void*, void*))vt[3];
        fn(p, (void*)buf);
        return true;
    }
    return false;
}

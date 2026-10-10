// from server: 86% by colin
struct DescribedBase {
    char pad[0x28];
};

struct SurfaceGetSet {
    char pad[8];
    void (__thiscall *m_fn)(void*, const void*);
    void setValue(DescribedBase* instance, const void* value);
};

extern "C" void* __fastcall sub_573890(void*);

void SurfaceGetSet::setValue(DescribedBase* instance, const void* value) {
    void* q;
    if (instance != 0) {
        q = (char*)instance - 4;
    } else {
        q = 0;
    }
    char* base = (char*)sub_573890(q) + 0x28;
    const void* v = *(const void**)value;
    void (__thiscall *f)(void*, const void*) = *(void (__thiscall**)(void*, const void*))((char*)this + 8);
    f(base, v);
}

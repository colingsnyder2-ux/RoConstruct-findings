// from server: 45% by colin
struct VerbContainer {
    void* field0;
    void* field4;
    void* field8;
    VerbContainer(const char* name, int a, int b, int c, int d, int e, int f, int g);
};

extern "C" void* __stdcall sub_52C940(void* dst, const char* src);
extern "C" void* __stdcall sub_5DB1C0(void* dst, void* val);
extern "C" void __stdcall sub_77E6AC(void* p);

VerbContainer::VerbContainer(const char* name, int a, int b, int c, int d, int e, int f, int g)
{
    field0 = (void*)0x7a95f4;
    char local[16];
    local[0] = 0;
    const char* src = name;
    if (name == 0) {
        src = local;
    }
    void* p = sub_52C940(local, src);
    field4 = p;
    field8 = *(void**)local;
    void* q = sub_5DB1C0((char*)field8 + 4, this);
    *(void**)q = this;
    sub_77E6AC(local);
}

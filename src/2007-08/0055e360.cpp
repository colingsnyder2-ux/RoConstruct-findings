// from server: 82% by colin
struct DataModel {
    char pad[0x14c];
    int field_14c;
};

struct C {
    char pad[0x4];
    void* field_4;
    void sub_564c50(void*);
    C* construct(void*);
};

extern "C" void* __stdcall sub_77e698(const char*);

C* C::construct(void* a)
{
    DataModel* dm = (DataModel*)a;
    int* p;
    if (dm)
        p = &dm->field_14c;
    else
        p = 0;

    char buf[0x1c];
    sub_77e698("ForceAssertion");
    sub_564c50(p);
    *(void**)this = (void*)0x7a90c0;
    return this;
}

// from server: 47% by colin
struct CXTPTabManagerAtom
{
    void* vtable;
    char pad[0x28];
    int field_28;
    int field_2c;
    int field_30;
    int field_34;
    CXTPTabManagerAtom* construct(int a, int b);
};

extern "C" void __stdcall sub_6fda20(int, int, int);
extern "C" void* __stdcall sub_6b3010();

CXTPTabManagerAtom* CXTPTabManagerAtom::construct(int a, int b)
{
    sub_6fda20(0, 4, a);
    this->vtable = (void*)0x7cf7b0;
    this->field_30 = 0;
    this->field_34 = b;
    void* p = sub_6b3010();
    void** vt = *(void***)p;
    void (*fn)(void*, int*, int) = (void (*)(void*, int*, int))vt[1];
    fn(p, &this->field_28, 0x23e1);
    return this;
}

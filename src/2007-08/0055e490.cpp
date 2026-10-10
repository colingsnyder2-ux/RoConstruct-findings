// from server: 84% by colin
struct DataModel;

struct S {
    void* field0;
    void* field4;
    void* field8;
    DataModel* fieldC;
    void construct(DataModel*);
};

extern "C" void* __stdcall sub_77E698(const char*);
extern "C" void sub_564C50(void*, void*);

void S::construct(DataModel* a)
{
    void* p;
    if (a != 0)
        p = (char*)a + 0x14c;
    else
        p = 0;

    char buf[0x1c];
    sub_77E698("ClearBackpack");
    sub_564C50(this, p);
    this->fieldC = a;
    *(void**)this = (void*)0x7a915c;
}

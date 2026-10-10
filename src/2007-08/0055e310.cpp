// from server: 83% by colin
struct DataModel;

struct S {
    void* vtable;
    char pad[8];
    DataModel* model;
    S* init(DataModel* dm);
};

extern "C" void* __stdcall sub_77E698(const char*);
extern "C" void __stdcall sub_564C50(void* a, void* b);

S* S::init(DataModel* dm) {
    char* p;
    if (dm != 0) {
        p = (char*)dm + 0x14c;
    } else {
        p = 0;
    }
    char buf[0x1c];
    sub_77E698("ForceAssertion");
    sub_564C50(this, p);
    this->model = dm;
    this->vtable = (void*)0x7a90a8;
    return this;
}

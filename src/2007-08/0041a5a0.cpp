// from server: 40% by colin
struct FuncDesc {
    void* vftable;
    char pad[0x10];
    void* field14;
    char pad2[0x10];
    void* field28;
    void* field2c;
};

struct BoundFuncDesc : FuncDesc {
    void construct(void* a, void* b, void* c, void* d);
};

extern "C" void* __cdecl sub_419110(void*, void*);
extern "C" void* __cdecl sub_570DB0(void*, void*);
extern "C" void* __cdecl sub_56D350();

void BoundFuncDesc::construct(void* a, void* b, void* c, void* d)
{
    void* r = sub_419110(c, d);
    sub_570DB0(this, r);
    this->field28 = a;
    this->field2c = b;
    this->vftable = (void*)0x787874;
    this->field14 = sub_56D350();
}

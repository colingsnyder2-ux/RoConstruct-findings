// from server: 29% by colin




struct Inner {
    void method();
};

struct BoundPropGetSet {
    void construct();
};

extern "C" void* __cdecl sub_6A0926();

void BoundPropGetSet::construct()
{
    Inner* p = (Inner*)sub_6A0926();
    p->method();
}

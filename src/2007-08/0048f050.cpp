// from server: 56% by colin
struct BoundFuncDesc {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
};

extern "C" void* __cdecl sub_62FEF6(unsigned int size);
extern "C" void __cdecl sub_48A740(void* p, void* a);
extern "C" void __cdecl sub_4893C0(void* self, void* out, void* a, void* b, void* c, void* d);
extern "C" void __cdecl sub_62FC62(void* p);

void* __cdecl sub_48F050(BoundFuncDesc* p)
{
    if (p == 0) {
        BoundFuncDesc* q = (BoundFuncDesc*)sub_62FEF6(0x10);
        sub_48A740(q, p);
        return q;
    }

    void* v = p->field4;
    void* w = *(void**)v;
    sub_4893C0(p, &v, w, p, v, p);
    sub_62FC62(p->field4);
    p->field4 = 0;
    p->field8 = 0;
    sub_62FC62(p);
    return 0;
}

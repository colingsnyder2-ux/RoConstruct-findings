// from server: 51% by tester
struct CSelectionPropGrid {
    void* vtable;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    void init(int* a, int b);
    void sub_439600(int);
};

extern "C" void* __cdecl sub_6a0920(int);

void CSelectionPropGrid::init(int* a, int b)
{
    this->vtable = (void*)0x8137a4;
    int* p = &this->field_4;
    void* q = sub_6a0920(4);
    if (q != 0) {
        *(void**)q = p;
    } else {
        q = 0;
    }
    *(void**)p = q;
    this->field_10 = 0;
    this->field_14 = 0;
    this->field_18 = 0;
    this->field_1c = b;
    this->sub_439600(a[3]);
}

// from server: 54% by tester
struct MarkerItem {
    char pad[0x2c90];
    int field_2c90;
    char pad2[0x2ca8 - 0x2c90 - 4];
    int field_2ca8;
    bool check(int arg);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" int* __fastcall sub_4ae060(int* a, int* b, int* c);

bool MarkerItem::check(int arg) {
    int local1;
    int local2;
    int* p = &local1;
    int* q = &local2;
    int* r = sub_4ae060(&field_2c90, q, p);
    int v = *r;
    if (v == 0 || v != field_2c90) {
        _invalid_parameter_noinfo();
    }
    return *((int*)((char*)r + 4)) != field_2ca8;
}

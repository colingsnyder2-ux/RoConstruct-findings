// from server: 32% by colin
extern "C" void* __cdecl sub_62FEF6(unsigned int size);
extern "C" void __cdecl sub_643F20(void* p);

struct CXTPCommandBarList {
    void* construct();
};

void* CXTPCommandBarList::construct()
{
    void* p = sub_62FEF6(0x180);
    if (p != 0) {
        sub_643F20(p);
    }
    return p;
}

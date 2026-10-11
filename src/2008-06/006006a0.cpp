// from server: 50% by tester
struct BoundPropGetSet {
    void* desc;
    int member;
    int changed;
    BoundPropGetSet(void* d, int m, int c);
};

extern "C" void* __cdecl operator_new(unsigned int size);

BoundPropGetSet::BoundPropGetSet(void* d, int m, int c)
{
    desc = 0;
    void* p = operator_new(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x841eac;
        *(int*)((char*)p + 0xc) = m;
    } else {
        p = 0;
    }
    desc = p;
}

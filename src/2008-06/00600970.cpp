// from server: 50% by colin
struct BoundPropGetSet {
    void* field0;
    BoundPropGetSet(void* desc, int member, int changed);
};

extern "C" void* __cdecl operator_new(unsigned int size);

BoundPropGetSet::BoundPropGetSet(void* desc, int member, int changed)
{
    void* p;
    field0 = 0;
    p = operator_new(0x14);
    if (p != 0) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x841f10;
        *(int*)((char*)p + 0xc) = member;
    } else {
        p = 0;
    }
    field0 = p;
}

// from server: 52% by colin
struct ViewBase {
    void* field0;
    ViewBase(void* a, void* b);
};

extern "C" void* __cdecl operator_new(unsigned int size);

void* __cdecl sub_6A0920(unsigned int size);

ViewBase::ViewBase(void* a, void* b)
{
    field0 = 0;
    void* p = sub_6A0920(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x826c5c;
        *(void**)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    field0 = p;
}

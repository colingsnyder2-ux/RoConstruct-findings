// from server: 52% by tester
struct ArrowPanel {
    void* field0;
    ArrowPanel(int a, int b);
};

extern "C" void* __cdecl operator_new(unsigned int size);

ArrowPanel::ArrowPanel(int a, int b)
{
    field0 = 0;
    void* p = operator_new(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x84bf4c;
        *(int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    field0 = p;
}

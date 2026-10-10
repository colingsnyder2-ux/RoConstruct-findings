// from server: 53% by colin
struct ArrowPanel {
    void* field0;
    ArrowPanel(void* a, void* b);
};

extern "C" void* __cdecl operator_new(unsigned int size);

ArrowPanel::ArrowPanel(void* a, void* b) {
    field0 = 0;
    void* p = operator_new(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x7c4708;
        *(void**)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    field0 = p;
}

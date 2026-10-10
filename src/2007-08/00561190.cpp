// from server: 52% by colin
struct FilteredSelection {
    void* field0;
    FilteredSelection(void* a, int b);
};

extern "C" void* __cdecl func_0062fef6(int size);

FilteredSelection::FilteredSelection(void* a, int b)
{
    void* p;
    field0 = 0;
    p = func_0062fef6(0x14);
    if (p != 0) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x7a9594;
        *(void**)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    field0 = p;
}

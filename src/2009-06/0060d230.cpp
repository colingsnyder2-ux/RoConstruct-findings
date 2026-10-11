// from server: 44% by atomic.potato
struct VModelInstance_FilteredSelection {
    char pad0[4];
    void* construct(char*);
};

extern "C" void* __stdcall sub_89E4B4();
extern "C" void __stdcall sub_60D120();

void* VModelInstance_FilteredSelection::construct(char* name) {
    char buf[0x1c];
    sub_89E4B4();
    sub_60D120();
    *(void**)this = (void*)0x8d861c;

    return this;
}

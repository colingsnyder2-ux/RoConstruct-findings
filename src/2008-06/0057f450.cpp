// from server: 35% by colin
struct FilteredSelection {
    void construct(char* name);
    void* vtable;
    char pad[0x20];
};

extern "C" void __stdcall sub_80245c(void*, void*);
extern "C" void __stdcall sub_802468(void*);
extern "C" void __stdcall sub_57e730();

void FilteredSelection::construct(char* name) {
    char buf[0x1c];
    sub_80245c(buf, name);
    sub_57e730();
    this->vtable = (void*)0x830a50;
    sub_802468(buf);
}

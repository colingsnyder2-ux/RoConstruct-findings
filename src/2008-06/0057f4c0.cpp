// from server: 35% by colin
struct FilteredSelection {
    void construct(const char* name, const char* unused, int a, int b, int c, int d, int e, int f, int g);
};

extern "C" {
    void __stdcall sub_80245c(void* dst, const void* src);
    void __stdcall sub_802468(void* p);
    void __stdcall sub_57e730();
}

void FilteredSelection::construct(const char* name, const char* unused, int a, int b, int c, int d, int e, int f, int g)
{
    char buf[28];
    sub_80245c(buf, name);
    sub_57e730();
    *(void**)this = (void*)0x830a6c;
    sub_802468(buf);
}

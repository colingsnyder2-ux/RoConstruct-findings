// from server: 65% by colin
struct FilteredSelection {
    char pad[0x100];
    void construct(const char* name);
    FilteredSelection(const char* name);
};

extern "C" void* __stdcall sub_77e698();

void FilteredSelection::construct(const char* name)
{
    char buf[0x1c];
    void* p = buf;
    (void)p;
    sub_77e698();
}

FilteredSelection::FilteredSelection(const char* name)
{
    char buf[0x1c];
    void* p = buf;
    (void)p;
    sub_77e698();
    construct(name);
    *(void**)this = (void*)0x7a93ac;
}

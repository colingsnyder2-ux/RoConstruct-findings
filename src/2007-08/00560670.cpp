// from server: 24% by colin
struct FilteredSelection {
    char pad[0x24];
    void* field24;
    FilteredSelection(const FilteredSelection& other, int a, int b, int c);
};

extern "C" {
    void __stdcall sub_77E69C(void*, const void*);
    void* __stdcall sub_52C940(int, int);
}

void __stdcall sub_55FC40();

FilteredSelection::FilteredSelection(const FilteredSelection& other, int a, int b, int c) {
    char local[0x1c];
    sub_77E69C(local, &other);
    sub_55FC40();
    field24 = sub_52C940(a, -1);
    *(void**)this = (void*)0x7a94f4;
}

// from server: 43% by colin
struct FilteredSelection {
    void construct(char* name, int a, int b, int c, int d, int e, int f, int g, int h);
};

extern "C" {
    void __stdcall std_string_copy(void* dest, const void* src);
    void __stdcall std_string_dtor(void* self);
    void __stdcall sub_55fc40();
}

void FilteredSelection::construct(char* name, int a, int b, int c, int d, int e, int f, int g, int h) {
    char buf[28];
    std_string_copy(buf, name);
    sub_55fc40();
    *(int*)this = 0x7a94c0;
    *(int*)(buf + 8) = -1;
    std_string_dtor(buf);
}

// from server: 67% by colin
// roc 2007-08 0055ff20  unit: seg_00550000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055ff20

struct FilteredSelection {
    void* vtable;
    char buf[0x1c];
    void construct();
    FilteredSelection* init(const char*);
};

extern "C" void __stdcall std_string_ctor(void*, const char*);

FilteredSelection* FilteredSelection::init(const char* name) {
    std_string_ctor((void*)((char*)this + 4), name);
    construct();
    vtable = (void*)0x7a94a8;
    return this;
}

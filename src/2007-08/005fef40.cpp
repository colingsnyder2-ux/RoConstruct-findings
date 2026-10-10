// from server: 55% by colin
struct std_string {
    void std_string_ctor();
    void std_string_dtor();
};

struct VerbContainer;

struct UndoVerb {
    char pad[0xc];
    VerbContainer* container;
    bool doIt(void* dataState);
};

extern "C" void __stdcall std_string_ctor_impl(void*);
extern "C" void __stdcall std_string_dtor_impl(void*);
extern "C" bool __stdcall sub_44D830(void*, void*);

bool UndoVerb::doIt(void* dataState) {
    char buf[0x1c];
    std_string_ctor_impl(buf);
    bool result = sub_44D830((char*)container + 0x160, buf);
    std_string_dtor_impl(buf);
    return result;
}

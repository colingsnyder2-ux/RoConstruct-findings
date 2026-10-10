// from server: 88% by why2
extern "C" void* __cdecl sub_718cf6();

struct ToggleFullscreenVerb {
    char f();
};

char ToggleFullscreenVerb::f() {
    char* p = (char*)sub_718cf6();
    p = *(char**)(p + 4);
    p = *(char**)(p + 0x20);
    return *(char*)(p + 0xfc);
}

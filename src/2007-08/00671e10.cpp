// from server: 91% by colin
extern "C" __declspec(dllimport) void* __stdcall LoadLibraryA(const char*);
extern "C" __declspec(dllimport) void* __stdcall GetProcAddress(void*, const char*);

struct CPropertyGridItemBrickColor {
    void sub_671270();
    int sub_671E10(const char*);
};

int CPropertyGridItemBrickColor::sub_671E10(const char* name) {
    this->sub_671270();
    void* h = LoadLibraryA(name);
    *(void**)((char*)this + 8) = h;
    if (h) {
        *(int*)((char*)this + 0xc) = 2;
        GetProcAddress(h, name);
        return 1;
    }
    return 0;
}

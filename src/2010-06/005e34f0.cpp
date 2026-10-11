// from server: 52% by atomic.potato
extern "C" void sub_005e3300(void*, void*);
extern "C" void basic_string_ctor(void*, const char*);
extern "C" void* g_009ea410;
extern const char g_00a0f49c[];
extern void* g_00a2e4c8;

struct FilteredSelection {
    int f(void*);
};

int FilteredSelection::f(void* p) {
    char buffer[28];
    basic_string_ctor(buffer, g_00a0f49c);
    sub_005e3300(this, buffer);
    *(void**)this = g_00a2e4c8;
    return (int)this;
}

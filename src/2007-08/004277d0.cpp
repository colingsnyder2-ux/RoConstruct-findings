// from server: 35% by tester
struct DxUserInput {
    unsigned short w0;
    unsigned short w2;
    int d4;
    int d8;
    int dC;
    int d10;
    DxUserInput* init();
    void reset();
};

extern "C" void __cdecl free_ptr(void* p);

struct ThreadLogManager {
    char pad0[8];
    char name[0x100];
    char pad108[0x80];
    char path[0x100];
    char pad288[0x544];
    int field7cc;
    void construct(const char* a, const char* b, const char* c, int d);
};

extern ThreadLogManager* g_threadLogManager;
extern DxUserInput* g_dxUserInput;
extern void* g_somePtr;

extern "C" void* __stdcall get_something();
extern "C" void __stdcall release_something(void* p);

void ThreadLogManager::construct(const char* a, const char* b, const char* c, int d)
{
    g_threadLogManager = this;
    this->field7cc = d;
    *(void**)this = (void*)0x789fb8;
    *(int*)((char*)this + 4) = 0xc;

    char* dst = (char*)this + 0x108;
    const char* src = a;
    while ((*dst++ = *src++) != 0) {}

    dst = (char*)this + 8;
    src = b;
    while ((*dst++ = *src++) != 0) {}

    DxUserInput local;
    local.init();

    void* p = g_somePtr;
    local.reset();

    char* dst2 = (char*)this + 0x88;
    const char* src2 = c;
    while ((*dst2++ = *src2++) != 0) {}

    local.reset();
}

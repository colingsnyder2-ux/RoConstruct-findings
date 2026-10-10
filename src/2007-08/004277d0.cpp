// from server: 30% by colin
struct LogManager {
    void* vtable;
    int field4;
    char name[0x100];
    char field108[0x80];
    char field188[0x644];
    int field7cc;
};

struct ThreadLogManager : LogManager {
    ThreadLogManager(const char* a, const char* b, const char* c);
};

extern "C" void __stdcall sub_466330(void* p);
extern "C" void __stdcall sub_466620(void* p, void* q);
extern "C" void __stdcall sub_466580(void* p, void* q);
extern "C" void __stdcall sub_4665f0(void* p);
extern "C" void* __stdcall sub_77dd98(void* p);
extern "C" void __stdcall sub_77ddbc(void* p);

extern void* g_8c9828;
extern void* g_8be2e8;

ThreadLogManager::ThreadLogManager(const char* a, const char* b, const char* c)
{
    g_8be2e8 = this;
    field7cc = (int)c;
    vtable = (void*)0x789fb8;
    field4 = 0xc;
    char* dst = (char*)this + 0x108;
    const char* src = a;
    while ((*dst++ = *src++) != 0) {}
    dst = (char*)this + 8;
    src = b;
    while ((*dst++ = *src++) != 0) {}
    char buf[0x30];
    sub_466330(buf);
    sub_466620(buf, g_8c9828);
    sub_466580(buf, (char*)this + 0x34);
    void* p = sub_77dd98((char*)this + 0x34);
    char* d2 = (char*)this + 0x88;
    const char* s2 = (const char*)p;
    while ((*d2++ = *s2++) != 0) {}
    sub_77ddbc((char*)this + 0x34);
    sub_4665f0(buf);
}

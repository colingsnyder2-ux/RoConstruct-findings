// from server: 35% by colin
struct String_sink
{
    char pad0[0x14];
    char* p14;
    char pad18[0x24 - 0x18];
    char* p24;
    char pad28[0x34 - 0x28];
    char* p34;
    char pad38[0x40 - 0x38];
    void* p40;
    char pad44[0x48 - 0x44];
    void* p48;
    char* p4c;
    char* p50;
    bool write(const char* s, int n);
};

extern "C" int __stdcall append_impl(void* str, const char* s, int n);
extern "C" int __stdcall pubsync_impl(void* buf);

bool String_sink::write(const char* s, int n)
{
    int diff = *(int*)p24 - *(int*)p14;
    if (diff > 0)
    {
        append_impl(p40, (const char*)*(int*)p14, diff);
        *(int*)p14 = (int)p4c;
        *(int*)p24 = (int)p4c;
        *(int*)p34 = (int)p4c + (int)p50 - (int)p4c;
    }
    bool result = true;
    if (p48)
    {
        if (pubsync_impl(p48) == -1)
            result = false;
    }
    return result;
}

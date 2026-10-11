// from server: 31% by colin
struct String_sink {
    char pad[0x14];
    void* field14;
    void* field18;
    char pad2[8];
    void* field24;
    String_sink(void* a, void* b);
};

extern "C" void __stdcall sub_5f2760(void*);
extern "C" void* __stdcall sub_802380(void*, void*);

String_sink::String_sink(void* a, void* b)
{
    sub_5f2760(a);
    field24 = 0;
    field14 = sub_802380(0, b);
    field18 = b;
}

// from server: 30% by colin
extern "C" void* __stdcall memmove_s(void*, unsigned int, const void*, unsigned int);
extern "C" void __cdecl func_0054b440(char*, char*, int);

struct UString_sink_stream_buffer
{
    void* vtable;
    char pad[0x0C];
    char* field_10;
    char pad2[0x10];
    char** field_20;
    char pad3[0x0C];
    char** field_30;
    char pad4[0x14];
    char* field_48;
    char* field_4C;
    char* field_50;
    int field_54;
    char pad5[0x0C];

    int func();
};

int UString_sink_stream_buffer::func()
{
    if (*field_20 == 0)
    {
        void (__stdcall *fn)(void*) = *(void (__stdcall **)(void*))((char*)vtable + 0x54);
        fn(this);
    }

    char* p = *field_20;
    char* end = p + **field_30;
    if (p < end)
    {
        return (unsigned char)*p;
    }

    int diff = (int)(p - field_10);
    int* p54 = &field_54;
    int* chosen = p54;
    if (field_54 < diff)
    {
        chosen = &diff;
    }
    char* edi = (char*)*chosen;

    if (edi != 0)
    {
        memmove_s(edi, (unsigned int)(field_4C - edi + field_54), edi, (unsigned int)(p - edi));
    }

    char* newp = field_4C + field_54;
    field_10 = (char*)(newp - edi);
    *field_20 = newp;
    *field_30 = 0;

    int n = (int)(field_50 - edi);
    char* src = field_4C + (int)edi;
    char* dst = field_48;
    func_0054b440(dst, src, n);

    return 0;
}

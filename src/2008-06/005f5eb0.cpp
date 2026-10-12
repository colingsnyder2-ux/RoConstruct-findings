// from server: 76% by king_originala
struct Stream;

extern void __stdcall flush_buffer(void*, Stream*, char*, int);
typedef int (__thiscall *SyncFunction)(Stream*);
extern SyncFunction sync_stream;

struct S
{
    char padding0[0x14];
    char** begin;
    char padding1[0x0c];
    char** end;
    char padding2[0x78];
    Stream* stream;

    void f();
};

void S::f()
{
    char* last = *end;
    char* first = *begin;
    int count = static_cast<int>(last - first);

    try
    {
        if (count > 0)
            flush_buffer(reinterpret_cast<char*>(this) + 0x40,
                         stream, first, count);
        if (stream)
            sync_stream(stream);
    }
    catch (...)
    {
    }
}

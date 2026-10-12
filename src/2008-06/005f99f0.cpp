// from server: 86% by king_originala
struct StreamBuffer;

extern void __stdcall flush_buffer(void*, StreamBuffer*, char*, int);

typedef int (__thiscall *SyncFunction)(StreamBuffer*);
extern SyncFunction pubsync;

struct S
{
    char padding0[0x14];
    char** begin;
    char padding1[0x0C];
    char** end;
    char padding2[0x18];
    char buffer[8];
    StreamBuffer* stream;

    int sync();
};

int S::sync()
{
    try
    {
        char* last = *end;
        char* first = *begin;
        int count = last - first;
        if (count > 0)
        {
            StreamBuffer* destination = stream;
            flush_buffer(buffer, destination, first, count);
        }

        if (stream)
            pubsync(stream);

        return 0;
    }
    catch (...)
    {
        return -1;
    }
}

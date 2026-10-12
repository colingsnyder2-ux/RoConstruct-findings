// from server: 94% by king_originala
struct StreamBuffer;
struct S;

typedef int (__thiscall *SyncFunction)(StreamBuffer*);
extern SyncFunction pubsync;

extern S* __stdcall write_buffer(void*, StreamBuffer*, const char*, int);

struct S
{
    char padding0[0x14];
    char** begin;
    char padding1[0x0c];
    char** end;
    char padding2[0x18];
    unsigned long device;
    StreamBuffer* buffer;

    int sync();
};

int S::sync()
{
    S* object = this;
    const char* last = *end;
    const char* first = *begin;
    int count = static_cast<int>(last - first);

    try
    {
        if (count > 0)
        {
            StreamBuffer* destination = buffer;
            object = write_buffer(&device, destination, first, count);
        }
        if (object->buffer)
            pubsync(object->buffer);
    }
    catch (...)
    {
        return -1;
    }
    return 0;
}

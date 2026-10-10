// from server: 30% by colin
struct stream_buffer
{
    char pad0[0x14];
    int* field_14;
    char pad1[0x0C];
    int* field_24;
    char pad2[0x20];
    void* field_48;
    int flush();
};

extern "C" int __stdcall sub_54b740(void*, void*, int, int);
extern "C" int (__stdcall *pubsync_ptr)(void*);

int stream_buffer::flush()
{
    int result = 0;
    int* a = field_24;
    int* b = field_14;
    int diff = *a - *b;
    if (diff > 0)
    {
        sub_54b740(&field_48, field_48, (int)b, diff);
    }
    if (field_48 != 0)
    {
        pubsync_ptr(field_48);
    }
    return 0;
}

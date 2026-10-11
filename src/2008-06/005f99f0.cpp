// from server: 32% by colin
struct stream_buffer
{
    char pad_0x00[0x14];
    int field_0x14;
    char pad_0x18[0x0c];
    int field_0x24;
    char pad_0x28[0x1c];
    int field_0x44;
    int field_0x48;
    int sync();
};

extern "C" int __stdcall sub_005f5b70(int, int, int, int);
extern "C" int (__stdcall *pubsync_ptr)(int);

int stream_buffer::sync()
{
    int a = *(int*)field_0x24;
    int b = *(int*)field_0x14;
    int diff = a - b;
    if (diff > 0)
    {
        sub_005f5b70((int)(this + 0x40), field_0x48, b, diff);
    }
    int h = field_0x48;
    if (h != 0)
    {
        pubsync_ptr(h);
    }
    return 0;
}

// from server: 60% by colin
struct UString_sink_stream_buffer
{
    void* buffer;
    int write(const char* data, int n, int* out);
};

extern "C" void* __cdecl sub_5452F0(void*);
extern "C" int __cdecl sub_54AD90(void* self, int a, int b, int c);

extern void* g_8c9898;

int UString_sink_stream_buffer::write(const char* data, int n, int* out)
{
    int count = n;
    if (count < 0)
        count = 0;

    void* buf = this->buffer;
    int capacity = *(int*)((char*)buf - 0xc);

    if (count >= capacity)
    {
        void* p = sub_5452F0((char*)buf - 0x10);
        *out = (int)((char*)p + 0x10);
        return 0;
    }

    void* obj = *(void**)((char*)buf - 0x10);
    int result;
    if (obj != 0)
    {
        void** vtbl = *(void***)obj;
        int (__stdcall *fn)(void*) = (int (__stdcall *)(void*))vtbl[4];
        result = fn(obj);
        if (result != 0)
            goto done;
    }

    {
        void** vtbl2 = *(void***)g_8c9898;
        int (__stdcall *fn2)(void*) = (int (__stdcall *)(void*))vtbl2[4];
        result = fn2(&g_8c9898);
    }

done:
    {
        int len = *(int*)this->buffer - count + capacity;
        sub_54AD90(out, (int)data, count, len);
    }
    return (int)out;
}

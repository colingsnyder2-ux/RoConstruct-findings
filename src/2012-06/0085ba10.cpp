// from server: 91% by atomic.potato
struct stream_buffer
{
    void f();
    unsigned char pad0[0x14];
    int* p14;
    unsigned char pad1[0x0c];
    int* p24;
    unsigned char pad2[0x0c];
    void* p34;
    unsigned char pad3[0x08];
    void* p40;
    unsigned char pad4[0x08];
    int v4c;
    int v50;
};

extern "C" void* __stdcall append_string(void*, const char*, unsigned int);

void stream_buffer::f()
{
    int* a = p14;
    int start = *a;
    int* b = p24;
    int end = *b;
    int len = end - start;
    if (len > 0)
    {
        append_string(p40, (const char*)start, (unsigned int)len);
        int newstart = v4c;
        int* c = p14;
        int newend = v50 + newstart;
        *c = newstart;
        int* d = p24;
        *d = newstart;
        int* e = (int*)p34;
        *e = newend - newstart;
    }
}

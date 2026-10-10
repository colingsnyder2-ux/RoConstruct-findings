// from server: 56% by colin
struct VHttpRequest_source_stream_buffer
{
    void* field_0;
    void* ctor(int);
};

extern "C" void* __cdecl func_0062fef6(unsigned int);
extern void* G_007a789c;

void* VHttpRequest_source_stream_buffer::ctor(int arg)
{
    void* p;
    this->field_0 = 0;
    p = func_0062fef6(0x10);
    if (p)
    {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = &G_007a789c;
        *(int*)((char*)p + 0xc) = arg;
    }
    else
    {
        p = 0;
    }
    this->field_0 = p;
    return this;
}

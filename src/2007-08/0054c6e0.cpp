// from server: 23% by colin
struct UString_sink_stream_buffer
{
    int sync();
};

int UString_sink_stream_buffer::sync()
{
    int result;
    char* p = *(char**)((char*)this + 4);
    if ((*(unsigned char*)((char*)this + 4) & 2) == 0)
    {
        result = 0;
    }
    else
    {
        char* q = *(char**)((char*)this);
        char* r = *(char**)(q);
        char* s = *(char**)(r + 8);
        char* t = *(char**)(s + 4);
        int (*fn)(void*) = *(int (**)(void*))(t + (int)r + 0x30);
        result = fn((void*)((char*)this + 8));
    }
    return result;
}

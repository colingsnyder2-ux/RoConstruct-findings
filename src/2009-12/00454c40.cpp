// from server: 70% by atomic.potato
struct S
{
    int f(void*);
};

extern "C" void* __stdcall basic_string_copy(void*, const void*);

int S::f(void* arg)
{
    basic_string_copy((char*)this + 0x98, arg);
    return (int)arg;
}

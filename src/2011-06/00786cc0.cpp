// from server: 50% by atomic.potato
struct S
{
    char data[104];
    int f(const char* value);
};

extern "C" void* __stdcall sub_string_copy(void*, const void*);

int S::f(const char* value)
{
    sub_string_copy(data + 104, value);
    return (int)this;
}

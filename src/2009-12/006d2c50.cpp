// from server: 57% by atomic.potato
extern "C" void std_string_copy(void *, const void *);
extern "C" void indirect_call(void *);

struct S
{
};

void __cdecl f(void *arg)
{
    void *p = *(void **)arg;
    void *v = *(void **)((char *)p + 0x20);
    void *s = (char *)p + 4;
    char temp[28];
    std_string_copy(temp, s);
    indirect_call(temp);
}

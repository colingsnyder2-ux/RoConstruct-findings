// from server: 40% by atomic.potato
typedef unsigned int DWORD;

extern "C" void __cdecl construct_string(void *, const void *);
typedef void (__thiscall *DestroyFunction)(void *);

struct S
{
    void __cdecl f(void *);
};

void S::f(void *arg)
{
    unsigned char *object = *(unsigned char **)arg;
    void *value = *(void **)(object + 0x48);
    unsigned char *base = object + 8;
    void *source = *(void **)(base + 0x20);
    unsigned char buffer[0x1c];

    construct_string(buffer, source);
    ((DestroyFunction)*(void **)object)(base);
}

// from server: 58% by atomic.potato
extern "C" void __cdecl fn410700(void*, void*, int);

struct S
{
    int value;
    int init;
    int f(void*);
};

int S::f(void* arg)
{
    fn410700((char*)this + 4, (char*)arg + 4, 0);
    *(int*)arg = value;
    return (int)arg;
}

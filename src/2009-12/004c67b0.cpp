// from server: 49% by atomic.potato
extern "C" void clear(void *, int, bool);
extern "C" void *seekg(void *, long, int);

struct S {
    int pad0[9];
    void f(long);
};

void S::f(long value)
{
    void *stream = *(void **)((char *)this + 0x24);
    clear(stream, 0, false);
    seekg(stream, value, 1);
}

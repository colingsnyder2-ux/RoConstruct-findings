// from server: 42% by atomic.potato
extern "C" void std_string_destructor(void *);

struct S {
    int f();
};

int S::f()
{
    std_string_destructor((char *)this + 4);
    return 0;
}

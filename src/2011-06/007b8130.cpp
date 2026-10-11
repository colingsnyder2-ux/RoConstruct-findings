// from server: 95% by atomic.potato
extern "C" void deallocate(char *, unsigned int);

struct S
{
    char unused;
    char *begin;
    char *end;
    char *capacity;
    void f();
};

void S::f()
{
    if (begin)
        deallocate(begin, (unsigned int)(end - begin));
    begin = 0;
    end = 0;
    capacity = 0;
}

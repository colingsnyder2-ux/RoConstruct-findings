// from server: 36% by atomic.potato
typedef unsigned long DWORD;

extern "C" void Function54D6E0(void *, int, int);
extern "C" void Function54D910(void *);

struct S
{
    void f();
    DWORD padding;
    DWORD value;
};

void S::f()
{
    Function54D6E0(this, value + 1, 0);
    Function54D910(this);
}

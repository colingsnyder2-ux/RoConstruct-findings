// from server: 81% by atomic.potato
extern "C" int __stdcall CloseHandle(void *);

struct S
{
    int handle;
    void f();
};

void S::f()
{
    int value = handle;
    if (value != 0 && value != -1)
        CloseHandle((void *)value);
}

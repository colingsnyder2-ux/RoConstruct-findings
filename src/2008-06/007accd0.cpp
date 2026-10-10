// from server: 82% by atomic.potato
extern "C" void __cdecl Function_006A158C(const char *, const char *);

struct S
{
    void f();
};

void S::f()
{
    const char *message = "shouldn't be here";
    const char *location = (const char *)0x0090E47C;
    Function_006A158C((const char *)&location, message);
}

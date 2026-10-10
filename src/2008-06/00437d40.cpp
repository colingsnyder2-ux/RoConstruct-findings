// from server: 31% by atomic.potato
extern "C" int __stdcall imported(int);

struct S
{
    virtual void f();
};

void S::f()
{
    imported(0);
}

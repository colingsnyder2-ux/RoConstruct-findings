// from server: 94% by atomic.potato
extern "C" void Assembly_007a1cb0(int);

struct Exclusive
{
    void f();
};

void Exclusive::f()
{
    Assembly_007a1cb0(15);
}

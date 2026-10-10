// from server: 71% by atomic.potato
extern "C" void __cdecl sub_50fd90();
extern "C" void __cdecl sub_7a8c70(unsigned int, unsigned int, unsigned int, unsigned int);

struct RoundRobinPhysicsSender
{
    void f();
};

void RoundRobinPhysicsSender::f()
{
    sub_50fd90();
    sub_7a8c70(0, 0, 1000, 0);
}

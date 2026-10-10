// from server: 94% by atomic.potato
extern "C" void __stdcall f(unsigned int, unsigned int);

void wrapper()
{
    f(0, 0);
}

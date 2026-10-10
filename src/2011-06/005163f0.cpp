// from server: 40% by atomic.potato
extern "C" void* __cdecl malloc(unsigned int);

void* f(unsigned int size)
{
    return malloc(size);
}

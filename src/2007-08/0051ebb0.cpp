// from server: 85% by colin
extern "C" void __cdecl free(void*);

void f(void* a, void* b)
{
    if (a != 0 && b != 0)
        free(b);
}

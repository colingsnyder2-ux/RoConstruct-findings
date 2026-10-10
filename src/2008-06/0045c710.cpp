// from server: 72% by atomic.potato
struct S
{
};

void* __cdecl f(void* p)
{
    void* (*fn)(void*) = *(void* (**)(void*))p;
    return *(void**)fn(*(void**)((char*)p + 4));
}

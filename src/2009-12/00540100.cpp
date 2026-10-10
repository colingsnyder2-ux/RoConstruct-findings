// from server: 72% by atomic.potato
struct S
{
    void f();
};

extern "C" void* __cdecl function_004fd680(void*);

void S::f()
{
    void* value = function_004fd680(*(void**)((char*)this + 8));
    *(void**)((char*)this + 8) = *(void**)value;
}

// from server: 77% by atomic.potato
struct S
{
    void* p;
    void f();
};

void S::f()
{
    if (*(void**)((char*)this + 12))
    {
        struct V
        {
            void (__thiscall *release)(void*, int);
        };

        V* v = *(V**)((char*)this + 12);
        v->release((void*)v, 1);
    }
}

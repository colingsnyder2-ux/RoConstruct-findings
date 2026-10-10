// from server: 73% by atomic.potato
struct S_func_0082cae0
{
    virtual void v98();
    virtual void v6c();
    void f(void* p);
};

void S_func_0082cae0::f(void* p)
{
    struct T
    {
        void** vtable;
    };

    typedef void (__thiscall *F)(T*);
    T* q = (T*)p;
    ((F)q->vtable[38])(q);
    v6c();
}

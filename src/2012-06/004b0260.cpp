// from server: 31% by atomic.potato
struct VideoControl_004b0260
{
    void f(void*);
    void* m_10c;
    void* m_11c;
};

void VideoControl_004b0260::f(void* argument)
{
    struct V
    {
        void** vtable;
    };

    typedef int (__thiscall *Check)(void*);
    typedef void (__thiscall *Apply)(void*, void*);

    void* object = m_10c;
    Check check = (Check)((*(V*)object).vtable)[3];

    if (check(object))
    {
        Apply apply = (Apply)((*(V*)object).vtable)[5];
        apply(object, argument);
    }
}

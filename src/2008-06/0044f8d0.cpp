// from server: 51% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long use_count;
    volatile long weak_count;

    void release();
    void weak_release();
};

inline void Control::weak_release()
{
    if (_InterlockedExchangeAdd(&weak_count, -1) == 1)
        destroy();
}

inline void Control::release()
{
    if (_InterlockedExchangeAdd(&use_count, -1) == 1)
    {
        dispose();
        weak_release();
    }
}

struct Handle
{
    void* object;
    Control* control;
    ~Handle();
};

inline Handle::~Handle()
{
    if (control)
        control->release();
}

struct Source
{
    Handle get();
};

extern bool G1_func_00495e60(int, void*);
extern bool G1_func_00495e70(int, void*);

struct CRobloxDoc
{
    char padding0[0x94];
    Source* source;

    void func_0044f8d0(int a, int b);
    void func_0044f8d0_helper(int a, int b);
};

void CRobloxDoc::func_0044f8d0(int a, int b)
{
    Handle h = source->get();
    bool flag = G1_func_00495e60(1, h.object) && G1_func_00495e70(1, h.object);
    if (!flag)
    {
        h.~Handle();
        return;
    }
    func_0044f8d0_helper(a, b);
}

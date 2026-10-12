// from server: 27% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Target {
    int invoke(int a, int b);
};

struct S {
    char padding[0x130];
    Target* target;
    int invoke(int a, int b);
};

struct RefCount {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Handle {
    S* pointer;
    RefCount* count;
    ~Handle();
};

Handle __cdecl acquire();

__forceinline Handle::~Handle()
{
    RefCount* p = count;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

struct Node {
    int get();
};

struct CRobloxTreeCtrlNode {
    char padding0[0x14];
    char field14[0x44];
    char padding58[0x4];
    void* field58;
    int method(int value);
};

int CRobloxTreeCtrlNode::method(int value)
{
    Handle handle = acquire();
    int node = handle.pointer->invoke(value, 1);
    return node ? ((Node*)node)->get() : 0;
}

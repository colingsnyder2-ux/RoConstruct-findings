// from server: 2% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Handle {
    void* pointer;
    Control* control;
};

struct Target {
    int invoke(int a, int b);
};

struct Node {
    char padding[0x130];
    Target* target;
    int invoke(int a, int b);
};

struct Tree {
    char padding[0x108];
};

struct S {
    char padding0[0xc];
    Tree* tree;
    char padding1[0x48];
    void* owner;
    char padding2[0x4];
    void* something;

    bool run();
};

int Node::invoke(int a, int b)
{
    if (target)
        return target->invoke(a, b);
    return 0;
}

bool S::run()
{
    return false;
}

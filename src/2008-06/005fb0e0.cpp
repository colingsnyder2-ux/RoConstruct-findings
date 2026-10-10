// from server: 51% by atomic.potato
struct Kernel
{
    int value;
};

struct Ball
{
    float result;
};

extern "C" void __cdecl func_005faf90(int, Ball *);
extern "C" float __cdecl func_00649310();

struct KernelFunctions
{
    void function(Ball *);
};

void KernelFunctions::function(Ball *b)
{
    Kernel *k = (Kernel *)this;
    k = *(Kernel **)((char *)k + 0x10);
    func_005faf90((int)k, b);
    func_00649310();
    if (b->result)
        b->result = func_00649310();
}

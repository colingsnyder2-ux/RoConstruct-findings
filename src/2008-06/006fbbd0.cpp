// from server: 85% by atomic.potato
extern "C" void func_007bbfaa();

extern "C" void func_006fbb40(void*);

struct S
{
    int f();
};

int S::f()
{
    func_007bbfaa();
    *(int*)this = 0x85ab2c;
    func_006fbb40((char*)this + 0x20);
    *(int*)((char*)this + 0x34) = 0;
    return (int)this;
}

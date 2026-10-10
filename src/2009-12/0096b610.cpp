// from server: 62% by atomic.potato
extern "C" void func_004e0150();
extern "C" void func_007f4929(const char*);

struct S
{
    void f();
};

void S::f()
{
    func_004e0150();
    func_007f4929((const char*)0x97f110);
}

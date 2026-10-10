// from server: 70% by atomic.potato
extern "C" void func_00926442(void*);
extern "C" void func_0084f220(void*);

struct S
{
    int f();
};

int S::f()
{
    func_00926442(this);
    func_0084f220((char*)this + 0x20);
    *(void**)this = (void*)0x9fc02c;
    *(int*)((char*)this + 0x34) = 0;
    return (int)this;
}

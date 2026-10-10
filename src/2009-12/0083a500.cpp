// from server: 61% by atomic.potato
struct CXTPDockingPaneManager
{
    void f();
};

extern "C" void sub_8315A0(void *);

void CXTPDockingPaneManager::f()
{
    sub_8315A0(this);
    ((void (__thiscall *)(void *))(*(unsigned long *)(*(unsigned long *)((char *)this + 0xd4)) + 0x68))(*(void **)((char *)this + 0xd4));
}

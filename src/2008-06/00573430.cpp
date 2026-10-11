// from server: 70% by atomic.potato
struct GuiTarget {
    void f();
};

extern float g_974d78;
extern float g_974d7c;

void GuiTarget::f() {
    unsigned int a = (short)((unsigned short)(*(unsigned short (__thiscall **)(void *))((*(int *)this) + 0x18))(this));
    int b = (*(int (__thiscall **)(void *))((*(int *)this) + 0x14))(this);
    g_974d78 = (float)b;
    g_974d7c = (float)a;
    (*(void (__thiscall **)(void *, void *))((*(int *)(*(int *)((char *)this + 0x10))) + 0x60))(*(void **)((char *)this + 0x10), this);
}

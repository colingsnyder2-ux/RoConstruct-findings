// from server: 56% by atomic.potato
struct T_00976830
{
    void f();
};

typedef void (__thiscall *F_006e80b0)(int, void *, void *, void *, int);
typedef void (__thiscall *F_007f4929)(void *);

F_006e80b0 const C_006e80b0 = (F_006e80b0)0x006e80b0;
F_007f4929 const C_007f4929 = (F_007f4929)0x007f4929;

void T_00976830::f()
{
    C_006e80b0(0x120, (void *)0x9db378, 0, (void *)0x9db370, 1);
    C_007f4929((void *)0x9867c0);
}

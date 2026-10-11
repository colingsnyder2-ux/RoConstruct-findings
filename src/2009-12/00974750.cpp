// from server: 75% by atomic.potato
struct T_006bd8e0
{
	void m(const void *, const void *, const void *, int);
};

extern T_006bd8e0 G_00b92278;
extern "C" void __cdecl F_007f4929(const void *);

void func_00974750()
{
	G_00b92278.m((const void *)0x6bd8e0, (const void *)0x9d6e98,
		(const void *)0x9d6ea8, 1);
	F_007f4929((const void *)0x9859d0);
}

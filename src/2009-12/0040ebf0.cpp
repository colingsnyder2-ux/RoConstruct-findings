// from server: 54% by atomic.potato
extern "C" void sub_406dd0(void *, void *, void *, void *, void *);

struct CComObjectNoLock
{
	void f(void *, void *, void *);
};

void CComObjectNoLock::f(void *a, void *b, void *c)
{
	sub_406dd0((void *)0xb02734, c, b, a, this);
}

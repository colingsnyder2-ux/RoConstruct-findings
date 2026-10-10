// from server: 40% by atomic.potato
extern "C" void std_string_copy(void *, const void *);

struct S
{
	int f(const void *);
};

int S::f(const void *a)
{
	char *p = (char *)this + 0x3c;
	std_string_copy(p, a);
	return (int)this;
}

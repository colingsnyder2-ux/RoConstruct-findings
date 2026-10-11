// from server: 44% by atomic.potato
extern "C" int __cdecl f_0085cc40();

extern "C" int __cdecl f_0080a30a();

struct S
{
	char pad0[56];
	int *m_data;
	int m_size;
	int f(int);
};

int S::f(int index)
{
	int count;

	if (index < 0)
		return 0;

	count = f_0085cc40();
	if (index >= count)
		return 0;

	if (index >= m_size)
	{
		f_0080a30a();
		return 0;
	}

	return m_data[index];
}

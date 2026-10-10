// from server: 44% by atomic.potato
struct Mesh
{
	int f(void *, void *);
};

int Mesh::f(void *a, void *b)
{
	unsigned int x = *(unsigned int *)a;
	unsigned int y = *(unsigned int *)b;
	return x < y ? 0 : 1;
}

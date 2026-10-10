// from server: 52% by atomic.potato
extern "C" float __cdecl atan2f(float, float);

struct S
{
	float __cdecl f(float*);
};

float S::f(float* p)
{
	return -atan2f(-p[0], -p[2]);
}

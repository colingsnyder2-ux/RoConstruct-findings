// from server: 60% by atomic.potato
extern "C" int* __cdecl f_00809140();
extern "C" int __stdcall f_00810eb0(int, int, int*, int, int);

int __stdcall f_00811090(int a, int b, int c, int d, int e)
{
    int* p = f_00809140();
    return f_00810eb0(b, c, p, d, e);
}

// from server: 64% by colin
struct S_func_00649cc0 {
    int f(unsigned int a, unsigned int b, int* out);
};

extern "C" int __stdcall GetIconInfo(void* hIcon, void* piconinfo);
extern "C" int __stdcall GetObjectA(void* h, int c, void* pv);
extern "C" int __stdcall DeleteObject(void* h);

int S_func_00649cc0::f(unsigned int a, unsigned int b, int* out)
{
    out[0] = 0;
    out[1] = 0;
    if (a == 0)
        return (int)out;
    char buf[24];
    if (!GetIconInfo((void*)a, buf))
        return (int)out;
    int obj[6];
    if (GetObjectA(*(void**)(buf + 12), 24, obj))
    {
        out[0] = obj[1];
        out[1] = obj[2];
        if (*(int*)(buf + 8) == 0)
            out[1] = obj[2] / 2;
    }
    DeleteObject(*(void**)(buf + 12));
    DeleteObject(*(void**)(buf + 16));
    return (int)out;
}

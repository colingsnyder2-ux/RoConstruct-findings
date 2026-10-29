// from server: 63% by atomic.potato
struct CXTPRibbonControls
{
    void f(int, int);
};

extern "C" void __stdcall sub_76A500();
extern "C" void __stdcall sub_76C4D0();
extern "C" void __cdecl sub_718CE4();

struct Inner
{
    char pad[0x28];
    int* arr;
    int count;
};

void CXTPRibbonControls::f(int a, int b)
{
    sub_76A500();
    Inner* p = (Inner*)a;
    int n = p->count;
    int i = 0;
    if (n > 0)
    {
        do
        {
            int v;
            if (i >= 0 && i < n)
            {
                if (i >= p->count)
                {
                    sub_718CE4();
                }
                v = p->arr[i];
            }
            else
            {
                v = 0;
            }
            void** vt = *(void***)this;
            typedef int (__thiscall *Fn)(void*, int);
            Fn fn = (Fn)vt[0x64 / 4];
            if (fn(this, v))
            {
                sub_76C4D0();
            }
            n = p->count;
            i++;
        } while (i < n);
    }
}

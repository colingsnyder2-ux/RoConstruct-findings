// from server: 65% by atomic.potato
typedef int (__stdcall *Fn)(void);
typedef int (__stdcall *Fn1)(int, int);

extern "C" int __stdcall ImportedA(void);
extern "C" int __stdcall ImportedB(int);

struct S
{
    int value;
    int f(int, int);
};

int S::f(int a, int b)
{
    if (value == 0)
    {
        int x = ImportedA();
        return ImportedB(a);
    }

    int x = ImportedA();
    return ImportedB(a);
}

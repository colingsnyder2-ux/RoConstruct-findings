// from server: 45% by atomic.potato
extern "C" int __stdcall func_0085b300(void*, int);

struct S
{
    int pad0;
    int field8;
    int field14;
    int field18;
    int f(int);
};

int S::f(int value)
{
    field18 = 1;
    if (field14 != 0)
    {
        int result = func_0085b300(this, field8);
        if (result != 0)
            return result;
    }
    return 0;
}

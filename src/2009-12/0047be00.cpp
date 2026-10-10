// from server: 65% by atomic.potato
typedef int BOOL;

struct S;

int sub_47bd10(S *, int);

struct S
{
    int pad[26];
    int a68;
    int a6c;
    int f();
};

int S::f()
{
    int n = (a6c - a68) >> 6;
    if (n > 0)
        return sub_47bd10((S *)((char *)this + 0x5c), 0);
    return 0;
}

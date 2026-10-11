// from server: 77% by atomic.potato
typedef int (__cdecl *MemberCall)(void *, int, int, int);

extern "C" int __cdecl CallA(void *, int, int);
extern "C" int __cdecl CallB(void *, int);

struct CXTPControlComboBox
{
    int f(int, int, int);
};

int CXTPControlComboBox::f(int a, int b, int c)
{
    int *vtable = *(int **)(this);
    int x = CallA((void *)b, c, a);
    x = CallB((void *)b, x);
    return ((MemberCall)vtable[28])((void *)this, x, 0, 0);
}

// from server: 56% by atomic.potato
extern "C" int __cdecl sub_6a0c68(void *, int);
extern "C" void __cdecl sub_420bd0(void *);

struct CSelectionCaption
{
    int f(int);
};

int CSelectionCaption::f(int a)
{
    int result = sub_6a0c68(this, a);
    if (result == -1)
        return result;

    sub_420bd0((char *)this + 0x190);
    return 0;
}

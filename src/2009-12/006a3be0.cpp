// from server: 80% by atomic.potato
extern "C" void __cdecl sub_6A0130(int);

struct S
{
};

void __cdecl f(int a, int b)
{
    if (a != 4)
    {
        sub_6A0130(a);
        return;
    }

    *(int*)b = 0x00B39A70;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
}

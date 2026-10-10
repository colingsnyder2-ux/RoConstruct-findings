// from server: 21% by atomic.potato
extern "C" void __cdecl sub_00726620(int, int, int, int, int);

void func_00726950(int a1, int a2, int a3, int a4)
{
    int v1 = a3;
    int v2 = a4;
    sub_00726620(a1, a2, v2, v1, v1 < 0 ? -1 : 0);
}

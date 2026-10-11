// from server: 85% by atomic.potato
struct S
{
    int f();
};

typedef int (__cdecl *CallType)(int);
extern "C" int __cdecl sub_0080bbc2(int);
extern "C" int __cdecl imported_00a40a50(int, int);

int S::f()
{
    int value = *(int *)((char *)this + 12);
    int object = *(int *)((char *)value + 0xACC);
    int result = *(int *)((char *)object + 0x188);

    if (result != 0)
    {
        result = sub_0080bbc2(result);
        return imported_00a40a50(0xC9110C, result);
    }

    return 0;
}

// from server: 58% by atomic.potato
struct S_func_00706700 {
};

void __cdecl f(void *unused, void *result, int value)
{
    if (value != 4) {
        f(unused, result, value);
    } else {
        *(int *)result = 0x00c7dc30;
        *((char *)result + 4) = 0;
        *((char *)result + 5) = 0;
    }
}

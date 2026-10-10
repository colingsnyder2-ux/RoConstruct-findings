// from server: 62% by atomic.potato
struct S
{
    int field_1c;
    int f(int value);
};

extern "C" int __stdcall sub_005ef180(int *, int);

int S::f(int value)
{
    int *object = (int *)field_1c;
    int result = ((int (__fastcall *)(int *, int))(*(int **)object + 8))(object, value);
    return sub_005ef180(&result, result);
}

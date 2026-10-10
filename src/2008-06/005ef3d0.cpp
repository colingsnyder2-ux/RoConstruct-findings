// from server: 40% by atomic.potato
extern "C" int __stdcall sub_5ef2f0(void *, int);

struct S
{
    int field_1c;
    int f(int);
};

int S::f(int value)
{
    int result = sub_5ef2f0(this, value);
    int *object = *(int **)(field_1c);
    int (__fastcall *method)(int *, int, int) =
        (int (__fastcall *)(int *, int, int))(*(int **)(object + 3));
    return method((int *)field_1c, result, result);
}

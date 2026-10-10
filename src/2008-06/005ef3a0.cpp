// from server: 69% by atomic.potato
struct S {
    int **vtable;
    char pad[24];
    void *field;
    int f(int, int);
};

extern "C" int __stdcall sub_5ef240(int);

int S::f(int a, int b)
{
    int value = sub_5ef240(b);
    int *object = *(int **)field;
    int (__fastcall *function)(void *, int *) =
        (int (__fastcall *)(void *, int *))object[3];
    return function(field, &value);
}

// from server: 65% by colin
extern "C" int __cdecl sub_00630a1e(int);
extern "C" int __cdecl sub_00630a18();

int __cdecl sub_0074ebee(int a1)
{
    int v1 = a1;
    int v2 = *(int *)(a1 - 4) ^ v1;
    sub_00630a1e(v2);
    return sub_00630a18();
}

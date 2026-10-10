// from server: 92% by colin
extern "C" int __stdcall sub_00634a60(int, int*);

int __stdcall sub_006a3020(int a)
{
    int r = sub_00634a60(a, &a);
    return (r != 0) ? a : 0;
}

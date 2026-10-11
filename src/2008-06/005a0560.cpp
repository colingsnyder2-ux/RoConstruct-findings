// from server: 86% by colin
struct S_func_005a0560 {
};

int __cdecl f(int a1)
{
    int* edx = *(int**)(a1 + 0x104);
    int* eax = *(int**)((char*)edx + 0x104);
    int* ecx = *(int**)((char*)eax + 0x104);
    while (ecx != 0) {
        edx = eax;
        eax = ecx;
        ecx = *(int**)((char*)eax + 0x104);
    }
    return *(int*)((char*)edx + 0x2e4);
}

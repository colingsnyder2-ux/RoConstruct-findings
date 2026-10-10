// from server: 78% by colin
struct VCApp_IObjectSafetyRobloxImpl
{
    int func_00409540(int, int, int, int);
};

extern "C" int __stdcall sub_00409310();

int VCApp_IObjectSafetyRobloxImpl::func_00409540(int a1, int a2, int a3, int a4)
{
    int* p;
    int* q;
    int v;
    int result;

    if (a1 != 0)
        p = (int*)(a1 - 0x14);
    else
        p = 0;

    q = (int*)((char*)p + 0x24);
    result = ((int (__stdcall*)(int*, int*, int*))*(int*)*q)(q, &v, (int*)a2);
    if (result < 0)
        return (int)0x80004002;

    result = ((int (__stdcall*)(int*, int*))*(int*)(*(int*)v + 8))((int*)v, (int*)a2);
    if ((a3 & 0xfffffffe) != 0)
        return (int)0x80004005;

    result = sub_00409310();
    if (result != 0)
        return result;

    *(int*)((char*)p + 4) = (*(int*)((char*)p + 4) & ~a3) | (a3 & a4);
    return 0;
}

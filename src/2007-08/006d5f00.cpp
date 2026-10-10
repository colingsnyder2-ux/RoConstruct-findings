// from server: 38% by colin
struct CXTPReportGroupRow_Batch
{
    int Method(int, int, int);
};

extern "C" int __stdcall sub_77DCD0(int);
extern "C" int __stdcall sub_77DDBC(int);
extern "C" int __cdecl sub_693F30(int, int, int, int, int, int, int, int);

int CXTPReportGroupRow_Batch::Method(int a1, int a2, int a3)
{
    int local = 0;
    (*(void (__thiscall **)(CXTPReportGroupRow_Batch *, int *))(*(int *)this + 0x100))(this, &local);
    if (sub_77DCD0((int)&local))
    {
        sub_77DDBC((int)&local);
        return -1;
    }
    int v1 = *(int *)((char *)this + 0x2c);
    int v2 = *(int *)((char *)this + 0x30);
    int v3 = *(int *)((char *)this + 0x34);
    int v4 = *(int *)((char *)this + 0x38);
    int v5 = *(int *)(*(int *)((char *)this + 0x24) + 0x20);
    sub_693F30(v5, a3, (int)this, v1, v2, v3, v4, (int)&local);
    sub_77DDBC((int)&local);
    return (int)this;
}

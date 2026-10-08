// from server: 83% by colin
// roc 2007-08 0065ed80  unit: seg_00650000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065ed80

extern "C" int __cdecl sub_65ed00();
extern "C" int __cdecl sub_47b540();

struct CXTPReportColumn
{
    int sub_65ed80();
};

int CXTPReportColumn::sub_65ed80()
{
    int esi = sub_65ed00();
    int eax = *(int *)(this + 0x20);
    int ecx = *(int *)(eax + 0x20);
    int edi = sub_47b540();
    int edx = *(int *)esi;
    int eax2 = *(int *)(edx + 0x68);
    int r = ((int (__thiscall *)(void *))eax2)((void *)esi);
    r = r - 3;
    int ecx2 = r / 2;
    int eax3 = edi + 1;
    eax3 = eax3 * ecx2;
    eax3 = eax3 + 0xf;
    if (edi != 0)
    {
        return eax3;
    }
    eax3 = eax3 + ecx2;
    return eax3;
}

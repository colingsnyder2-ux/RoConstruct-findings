// from server: 100% by colin
// roc 2007-08 00659150  unit: CXTPReportGroupRow_Batch  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00659150
//
// 00659150  51                   push ecx
// 00659151  8b01                 mov eax, dword ptr [ecx]
// 00659153  8b90fc000000         mov edx, dword ptr [eax + 0xfc]
// 00659159  56                   push esi
// 0065915a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065915e  56                   push esi
// 0065915f  c744240800000000     mov dword ptr [esp + 8], 0
// 00659167  ffd2                 call edx
// 00659169  8bc6                 mov eax, esi
// 0065916b  5e                   pop esi
// 0065916c  59                   pop ecx
// 0065916d  c20400               ret 4

struct CXTPReportGroupRow_Batch
{
    int Method(int);
};

int CXTPReportGroupRow_Batch::Method(int arg)
{
    volatile int pad = 0;
    (*(void (__thiscall **)(CXTPReportGroupRow_Batch *, int))(*(int *)this + 0xfc))(this, arg);
    return arg;
}

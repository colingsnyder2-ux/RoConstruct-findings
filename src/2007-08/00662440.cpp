// from DeepSeek/server: 100% by colin
// roc 2007-08 00662440  unit: CXTPReportRecordItemNumber  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00662440
//
// 00662440  8b442408             mov eax, dword ptr [esp + 8]
// 00662444  56                   push esi
// 00662445  50                   push eax
// 00662446  8bf1                 mov esi, ecx
// 00662448  e823ffffff           call 0x662370
// 0066244d  50                   push eax
// 0066244e  e8afddfcff           call 0x630202
// 00662453  8bc8                 mov ecx, eax
// 00662455  83c408               add esp, 8
// 00662458  85c9                 test ecx, ecx
// 0066245a  7506                 jne 0x662462
// 0066245c  33c0                 xor eax, eax
// 0066245e  5e                   pop esi
// 0066245f  c20800               ret 8
// 00662462  dd8180000000         fld qword ptr [ecx + 0x80]
// 00662468  dc9e80000000         fcomp qword ptr [esi + 0x80]
// 0066246e  dfe0                 fnstsw ax
// 00662470  f6c444               test ah, 0x44
// 00662473  7be7                 jnp 0x66245c
// 00662475  dd8180000000         fld qword ptr [ecx + 0x80]
// 0066247b  dc9e80000000         fcomp qword ptr [esi + 0x80]
// 00662481  dfe0                 fnstsw ax
// 00662483  f6c405               test ah, 5
// 00662486  7a09                 jp 0x662491
// 00662488  b801000000           mov eax, 1
// 0066248d  5e                   pop esi
// 0066248e  c20800               ret 8
// 00662491  83c8ff               or eax, 0xffffffff
// 00662494  5e                   pop esi
// 00662495  c20800               ret 8

struct CXTPReportRecordItemNumber
{
    double m_dValue;
    int Compare(int a, int b);
};

extern "C" void* __cdecl sub_00662370(int);
extern "C" void* __cdecl sub_00630202(void*);

int CXTPReportRecordItemNumber::Compare(int a, int b)
{
    void* p = sub_00662370(b);
    void* q = sub_00630202(p);
    if (q == 0)
        return 0;
    if (*(double*)((char*)this + 0x80) == *(double*)((char*)q + 0x80))
        return 0;
    if (*(double*)((char*)this + 0x80) > *(double*)((char*)q + 0x80))
        return 1;
    return -1;
}

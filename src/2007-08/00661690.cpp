// from server: 100% by colin
// roc 2007-08 00661690  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00661690
//
// 00661690  56                   push esi
// 00661691  57                   push edi
// 00661692  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00661696  8b07                 mov eax, dword ptr [edi]
// 00661698  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 0066169e  8bf1                 mov esi, ecx
// 006616a0  8bcf                 mov ecx, edi
// 006616a2  ffd2                 call edx
// 006616a4  8b06                 mov eax, dword ptr [esi]
// 006616a6  8b5060               mov edx, dword ptr [eax + 0x60]
// 006616a9  57                   push edi
// 006616aa  8bce                 mov ecx, esi
// 006616ac  ffd2                 call edx
// 006616ae  5f                   pop edi
// 006616af  5e                   pop esi
// 006616b0  c20400               ret 4

struct VCXTPReportRecords_CXTPHeapObjectT {
    void f(void* p);
};

void VCXTPReportRecords_CXTPHeapObjectT::f(void* p)
{
    void** v = *(void***)p;
    ((void (__thiscall*)(void*))v[0x98 / 4])(p);
    void** w = *(void***)this;
    ((void (__thiscall*)(void*, void*))w[0x60 / 4])(this, p);
}

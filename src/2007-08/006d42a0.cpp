// from server: 87% by colin
// roc 2007-08 006d42a0  unit: CXTPReportRow_Batch  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d42a0
//
// 006d42a0  56                   push esi
// 006d42a1  8bf1                 mov esi, ecx
// 006d42a3  8b06                 mov eax, dword ptr [esi]
// 006d42a5  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 006d42ab  57                   push edi
// 006d42ac  ffd2                 call edx
// 006d42ae  8b10                 mov edx, dword ptr [eax]
// 006d42b0  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006d42b4  8bc8                 mov ecx, eax
// 006d42b6  8b4260               mov eax, dword ptr [edx + 0x60]
// 006d42b9  57                   push edi
// 006d42ba  ffd0                 call eax
// 006d42bc  89774c               mov dword ptr [edi + 0x4c], esi
// 006d42bf  8bc7                 mov eax, edi
// 006d42c1  5f                   pop edi
// 006d42c2  5e                   pop esi
// 006d42c3  c20400               ret 4

struct CXTPReportRow_Batch {
    void* GetRow();
    CXTPReportRow_Batch* CopyTo(CXTPReportRow_Batch*);
};

CXTPReportRow_Batch* CXTPReportRow_Batch::CopyTo(CXTPReportRow_Batch* other) {
    void* p = GetRow();
    void* q = (*(void***)p)[0x60/4];
    ((void (__thiscall*)(void*, CXTPReportRow_Batch*))q)(p, other);
    *(CXTPReportRow_Batch**)((char*)other + 0x4c) = this;
    return other;
}

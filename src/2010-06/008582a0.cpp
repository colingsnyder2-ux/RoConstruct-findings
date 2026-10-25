// from server: 100% by tester
// roc 2010-06 008582a0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008582a0
//
// 008582a0  56                   push esi
// 008582a1  8bf1                 mov esi, ecx
// 008582a3  8b06                 mov eax, dword ptr [esi]
// 008582a5  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 008582ab  57                   push edi
// 008582ac  ffd2                 call edx
// 008582ae  8b10                 mov edx, dword ptr [eax]
// 008582b0  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008582b4  8bc8                 mov ecx, eax
// 008582b6  8b4260               mov eax, dword ptr [edx + 0x60]
// 008582b9  57                   push edi
// 008582ba  ffd0                 call eax
// 008582bc  89774c               mov dword ptr [edi + 0x4c], esi
// 008582bf  8bc7                 mov eax, edi
// 008582c1  5f                   pop edi
// 008582c2  5e                   pop esi
// 008582c3  c20400               ret 4

struct CXTPReportRow_Batch {
    void* func_006d42a0(void* arg);
};

void* CXTPReportRow_Batch::func_006d42a0(void* arg)
{
    void* p = ((void* (__thiscall*)(void*))((*(void***)this)[0xb8 / 4]))(this);
    ((void (__thiscall*)(void*, void*))((*(void***)p)[0x60 / 4]))(p, arg);
    *(void**)((char*)arg + 0x4c) = this;
    return arg;
}

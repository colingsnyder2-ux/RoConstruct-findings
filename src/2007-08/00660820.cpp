// from server: 76% by colin
// roc 2007-08 00660820  unit: CXTPReportHeader  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00660820
//
// 00660820  56                   push esi
// 00660821  8bf1                 mov esi, ecx
// 00660823  8b4624               mov eax, dword ptr [esi + 0x24]
// 00660826  8b4878               mov ecx, dword ptr [eax + 0x78]
// 00660829  2b4870               sub ecx, dword ptr [eax + 0x70]
// 0066082c  83c070               add eax, 0x70
// 0066082f  6a00                 push 0
// 00660831  51                   push ecx
// 00660832  8bce                 mov ecx, esi
// 00660834  e8c7ebffff           call 0x65f400
// 00660839  8bce                 mov ecx, esi
// 0066083b  e8c0e4ffff           call 0x65ed00
// 00660840  83b88002000000       cmp dword ptr [eax + 0x280], 0
// 00660847  750d                 jne 0x660856
// 00660849  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0066084c  8b11                 mov edx, dword ptr [ecx]
// 0066084e  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 00660854  ffd0                 call eax
// 00660856  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00660859  e8d252ffff           call 0x655b30
// 0066085e  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00660861  e8aa6bffff           call 0x657410
// 00660866  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00660869  6a00                 push 0
// 0066086b  6ac9                 push -0x37
// 0066086d  e80ea4ffff           call 0x65ac80
// 00660872  5e                   pop esi
// 00660873  c3                   ret 

struct CXTPReportHeader {
    char pad[0x24];
    void* m_pOwner;
    void OnHeaderChanged();
};

extern "C" void __stdcall sub_65F400(void*, int, int);
extern "C" void* __stdcall sub_65ED00(void*);
extern "C" void __stdcall sub_655B30(void*);
extern "C" void __stdcall sub_657410(void*);
extern "C" void __stdcall sub_65AC80(void*, int, int);

void CXTPReportHeader::OnHeaderChanged()
{
    char* p = (char*)m_pOwner;
    int n = *(int*)(p + 0x78) - *(int*)(p + 0x70);
    sub_65F400(this, n, 0);
    void* q = sub_65ED00(this);
    if (*(int*)((char*)q + 0x280) == 0)
    {
        void* r = *(void**)m_pOwner;
        void (*fn)(void*) = *(void (**)(void*))((char*)r + 0x154);
        fn(m_pOwner);
    }
    sub_655B30(m_pOwner);
    sub_657410(m_pOwner);
    sub_65AC80(m_pOwner, -0x37, 0);
}

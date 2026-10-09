// from server: 65% by colin
// roc 2007-08 00663ca0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00663ca0
//
// 00663ca0  53                   push ebx
// 00663ca1  56                   push esi
// 00663ca2  57                   push edi
// 00663ca3  8bf9                 mov edi, ecx
// 00663ca5  33f6                 xor esi, esi
// 00663ca7  397728               cmp dword ptr [edi + 0x28], esi
// 00663caa  7e26                 jle 0x663cd2
// 00663cac  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00663cb0  85f6                 test esi, esi
// 00663cb2  7c37                 jl 0x663ceb
// 00663cb4  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00663cb7  7d32                 jge 0x663ceb
// 00663cb9  8b4724               mov eax, dword ptr [edi + 0x24]
// 00663cbc  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00663cbf  8b11                 mov edx, dword ptr [ecx]
// 00663cc1  8b4260               mov eax, dword ptr [edx + 0x60]
// 00663cc4  ffd0                 call eax
// 00663cc6  3bc3                 cmp eax, ebx
// 00663cc8  7410                 je 0x663cda
// 00663cca  83c601               add esi, 1
// 00663ccd  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00663cd0  7cde                 jl 0x663cb0
// 00663cd2  5f                   pop edi
// 00663cd3  5e                   pop esi
// 00663cd4  33c0                 xor eax, eax
// 00663cd6  5b                   pop ebx
// 00663cd7  c20400               ret 4
// 00663cda  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00663cdd  7d0c                 jge 0x663ceb
// 00663cdf  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 00663ce2  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 00663ce5  5f                   pop edi
// 00663ce6  5e                   pop esi
// 00663ce7  5b                   pop ebx
// 00663ce8  c20400               ret 4
// 00663ceb  e830c2fcff           call 0x62ff20

struct VCXTPReportRows {
    int m_nCount;
    void** m_pItems;
    void* Find(void* p);
};

void* VCXTPReportRows::Find(void* p)
{
    int i = 0;
    if (m_nCount > 0)
    {
        do
        {
            if (i < 0 || i >= m_nCount)
                break;
            void* item = m_pItems[i];
            void* (*fn)(void*) = *(void*(**)(void*))item;
            void* result = ((void*(*)(void*))*(void**)((char*)fn + 0x60))(item);
            if (result == p)
            {
                if (i >= m_nCount)
                    break;
                return m_pItems[i];
            }
            i++;
        } while (i < m_nCount);
    }
    return 0;
}

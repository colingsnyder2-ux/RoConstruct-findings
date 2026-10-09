// from server: 69% by colin
// roc 2007-08 0063bbb0  unit: PAVCXTPControlAction::?$CArray  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063bbb0
//
// 0063bbb0  56                   push esi
// 0063bbb1  57                   push edi
// 0063bbb2  8bf9                 mov edi, ecx
// 0063bbb4  33f6                 xor esi, esi
// 0063bbb6  397764               cmp dword ptr [edi + 0x64], esi
// 0063bbb9  7e28                 jle 0x63bbe3
// 0063bbbb  53                   push ebx
// 0063bbbc  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0063bbc0  85f6                 test esi, esi
// 0063bbc2  7c24                 jl 0x63bbe8
// 0063bbc4  3b7764               cmp esi, dword ptr [edi + 0x64]
// 0063bbc7  7d1f                 jge 0x63bbe8
// 0063bbc9  8b4760               mov eax, dword ptr [edi + 0x60]
// 0063bbcc  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0063bbcf  8b11                 mov edx, dword ptr [ecx]
// 0063bbd1  8b8234010000         mov eax, dword ptr [edx + 0x134]
// 0063bbd7  53                   push ebx
// 0063bbd8  ffd0                 call eax
// 0063bbda  83c601               add esi, 1
// 0063bbdd  3b7764               cmp esi, dword ptr [edi + 0x64]
// 0063bbe0  7cde                 jl 0x63bbc0
// 0063bbe2  5b                   pop ebx
// 0063bbe3  5f                   pop edi
// 0063bbe4  5e                   pop esi
// 0063bbe5  c20400               ret 4
// 0063bbe8  e83343ffff           call 0x62ff20

extern "C" void __stdcall _invalid_parameter_noinfo();

struct CXTPControlActionArray
{
    int m_nCount;
    int m_nGrowBy;
    void** m_pData;
    void ForEach(void* p);
};

void CXTPControlActionArray::ForEach(void* p)
{
    int i = 0;
    if (m_nCount > 0)
    {
        do
        {
            if (i < 0 || i >= m_nCount)
                _invalid_parameter_noinfo();
            void* item = m_pData[i];
            (*(void (__thiscall**)(void*, void*))((*(int*)item) + 0x134))(item, p);
            ++i;
        } while (i < m_nCount);
    }
}

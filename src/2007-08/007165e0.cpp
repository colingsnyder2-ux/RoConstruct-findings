// from server: 59% by colin
// roc 2007-08 007165e0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007165e0
//
// 007165e0  53                   push ebx
// 007165e1  56                   push esi
// 007165e2  57                   push edi
// 007165e3  8bf9                 mov edi, ecx
// 007165e5  33f6                 xor esi, esi
// 007165e7  e854e7e9ff           call 0x5b4d40
// 007165ec  85c0                 test eax, eax
// 007165ee  7e33                 jle 0x716623
// 007165f0  85f6                 test esi, esi
// 007165f2  7c3e                 jl 0x716632
// 007165f4  3b7708               cmp esi, dword ptr [edi + 8]
// 007165f7  7d39                 jge 0x716632
// 007165f9  8b4704               mov eax, dword ptr [edi + 4]
// 007165fc  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 007165ff  85db                 test ebx, ebx
// 00716601  7412                 je 0x716615
// 00716603  8d4b08               lea ecx, [ebx + 8]
// 00716606  ff15bcdd7700         call dword ptr [0x77ddbc]
// 0071660c  53                   push ebx
// 0071660d  e85096f1ff           call 0x62fc62
// 00716612  83c404               add esp, 4
// 00716615  8bcf                 mov ecx, edi
// 00716617  83c601               add esi, 1
// 0071661a  e821e7e9ff           call 0x5b4d40
// 0071661f  3bf0                 cmp esi, eax
// 00716621  7ccd                 jl 0x7165f0
// 00716623  6aff                 push -1
// 00716625  6a00                 push 0
// 00716627  8bcf                 mov ecx, edi
// 00716629  e88294feff           call 0x6ffab0
// 0071662e  5f                   pop edi
// 0071662f  5e                   pop esi
// 00716630  5b                   pop ebx
// 00716631  c3                   ret 
// 00716632  e9e998f1ff           jmp 0x62ff20

struct CArray {
    char pad0[4];
    void** m_pData;
    int m_nSize;
    int GetSize();
    void SetSize(int, int);
    void RemoveAll();
};

extern "C" void __stdcall G1_func_0077ddbc(void*);
extern "C" void __cdecl G2_func_0062fc62(void*);
extern "C" void __cdecl G3_func_0062ff20();

void CArray::RemoveAll()
{
    int i = 0;
    while (i < GetSize()) {
        if (i < 0 || i >= m_nSize)
            G3_func_0062ff20();
        void* p = m_pData[i];
        if (p) {
            G1_func_0077ddbc((char*)p + 8);
            G2_func_0062fc62(p);
        }
        i++;
        GetSize();
    }
    SetSize(-1, 0);
}

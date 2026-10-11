// from server: 70% by atomic.potato
// roc 2009-06 00721510  unit: PAVCXTPControlAction::?$CArray  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00721510
//
// 00721510  56                   push esi
// 00721511  57                   push edi
// 00721512  8bf9                 mov edi, ecx
// 00721514  33f6                 xor esi, esi
// 00721516  397764               cmp dword ptr [edi + 0x64], esi
// 00721519  7e26                 jle 0x721541
// 0072151b  53                   push ebx
// 0072151c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00721520  85f6                 test esi, esi
// 00721522  7c22                 jl 0x721546
// 00721524  3b7764               cmp esi, dword ptr [edi + 0x64]
// 00721527  7d1d                 jge 0x721546
// 00721529  8b4760               mov eax, dword ptr [edi + 0x60]
// 0072152c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0072152f  8b11                 mov edx, dword ptr [ecx]
// 00721531  8b8240010000         mov eax, dword ptr [edx + 0x140]
// 00721537  53                   push ebx
// 00721538  ffd0                 call eax
// 0072153a  46                   inc esi
// 0072153b  3b7764               cmp esi, dword ptr [edi + 0x64]
// 0072153e  7ce0                 jl 0x721520
// 00721540  5b                   pop ebx
// 00721541  5f                   pop edi
// 00721542  5e                   pop esi
// 00721543  c20400               ret 4
// 00721546  e89977ffff           call 0x718ce4

struct CArray {
    char pad0[0x60];
    void** m_pData;
    int m_nSize;
    void SetAt(int nIndex, void* p);
};

void CArray::SetAt(int nIndex, void* p) {
    int i = 0;
    if (m_nSize > 0) {
        do {
            if (i < 0 || i >= m_nSize)
                break;
            void* v = m_pData[i];
            (*(void (__thiscall**)(void*, void*))(*(int*)v + 0x140))(v, p);
            ++i;
        } while (i < m_nSize);
    }
}

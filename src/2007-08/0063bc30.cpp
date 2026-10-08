// from server: 32% by colin
// roc 2007-08 0063bc30  unit: PAVCXTPControlAction::?$CArray  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063bc30
//
// 0063bc30  56                   push esi
// 0063bc31  8bf1                 mov esi, ecx
// 0063bc33  33d2                 xor edx, edx
// 0063bc35  395664               cmp dword ptr [esi + 0x64], edx
// 0063bc38  7e22                 jle 0x63bc5c
// 0063bc3a  8d9b00000000         lea ebx, [ebx]
// 0063bc40  85d2                 test edx, edx
// 0063bc42  7c1a                 jl 0x63bc5e
// 0063bc44  3b5664               cmp edx, dword ptr [esi + 0x64]
// 0063bc47  7d15                 jge 0x63bc5e
// 0063bc49  8b4660               mov eax, dword ptr [esi + 0x60]
// 0063bc4c  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 0063bc4f  e85ce1ffff           call 0x639db0
// 0063bc54  83c201               add edx, 1
// 0063bc57  3b5664               cmp edx, dword ptr [esi + 0x64]
// 0063bc5a  7ce4                 jl 0x63bc40
// 0063bc5c  5e                   pop esi
// 0063bc5d  c3                   ret 
// 0063bc5e  e9bd42ffff           jmp 0x62ff20

struct CArray {
    char pad[0x60];
    void** m_pData;
    int m_nSize;
    void RemoveAll();
};

extern "C" void __cdecl func_0062ff20();

void CArray::RemoveAll()
{
    int i = 0;
    if (m_nSize > 0)
    {
        do
        {
            if (i < 0 || i >= m_nSize)
            {
                func_0062ff20();
            }
            void* p = m_pData[i];
            ((void (__thiscall*)(void*))0x639db0)(p);
            ++i;
        } while (i < m_nSize);
    }
}

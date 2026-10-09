// from server: 58% by colin
// roc 2007-08 006f6000  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f6000
//
// 006f6000  56                   push esi
// 006f6001  57                   push edi
// 006f6002  8bf9                 mov edi, ecx
// 006f6004  33f6                 xor esi, esi
// 006f6006  397728               cmp dword ptr [edi + 0x28], esi
// 006f6009  7e21                 jle 0x6f602c
// 006f600b  eb03                 jmp 0x6f6010
// 006f600d  8d4900               lea ecx, [ecx]
// 006f6010  85f6                 test esi, esi
// 006f6012  7c27                 jl 0x6f603b
// 006f6014  3b7728               cmp esi, dword ptr [edi + 0x28]
// 006f6017  7d22                 jge 0x6f603b
// 006f6019  8b4724               mov eax, dword ptr [edi + 0x24]
// 006f601c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006f601f  e8c0a1f3ff           call 0x6301e4
// 006f6024  83c601               add esi, 1
// 006f6027  3b7728               cmp esi, dword ptr [edi + 0x28]
// 006f602a  7ce4                 jl 0x6f6010
// 006f602c  6aff                 push -1
// 006f602e  6a00                 push 0
// 006f6030  8d4f20               lea ecx, [edi + 0x20]
// 006f6033  e8789a0000           call 0x6ffab0
// 006f6038  5f                   pop edi
// 006f6039  5e                   pop esi
// 006f603a  c3                   ret 
// 006f603b  e9e09ef3ff           jmp 0x62ff20

struct CArray {
    char pad[0x20];
    int m_nSize;
    void** m_pData;
    void RemoveAll();
};

extern "C" void __stdcall sub_6301e4(void*);
extern "C" void __stdcall sub_6ffab0(void*, int, int);

void CArray::RemoveAll()
{
    int i = 0;
    if (m_nSize > 0)
    {
        do
        {
            if (i < 0 || i >= m_nSize)
                break;
            sub_6301e4(m_pData[i]);
            i++;
        } while (i < m_nSize);
    }
    sub_6ffab0((char*)this + 0x20, 0, -1);
}

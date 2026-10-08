// from server: 100% by colin
// roc 2007-08 0063d620  unit: CXTPPaintManager  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063d620
//
// 0063d620  83b9fc00000000       cmp dword ptr [ecx + 0xfc], 0
// 0063d627  7e0b                 jle 0x63d634
// 0063d629  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 0063d62f  8d4409ef             lea eax, [ecx + ecx - 0x11]
// 0063d633  c3                   ret 
// 0063d634  8b81f8000000         mov eax, dword ptr [ecx + 0xf8]
// 0063d63a  83c003               add eax, 3
// 0063d63d  83f816               cmp eax, 0x16
// 0063d640  7d05                 jge 0x63d647
// 0063d642  b816000000           mov eax, 0x16
// 0063d647  8d4400ef             lea eax, [eax + eax - 0x11]
// 0063d64b  c3                   ret 

struct CXTPPaintManager
{
    char m_pad[0xf8];
    int m_nFieldF8;
    int m_nFieldFC;
    int GetValue();
};

int CXTPPaintManager::GetValue()
{
    int n;
    if (m_nFieldFC > 0)
    {
        n = m_nFieldF8;
    }
    else
    {
        n = m_nFieldF8 + 3;
        if (n < 0x16)
            n = 0x16;
    }
    return n + n - 0x11;
}

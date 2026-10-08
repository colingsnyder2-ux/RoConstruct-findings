// from server: 100% by colin
// roc 2007-08 00639c90  unit: CXTPControlComboBoxAutoCompleteWnd  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00639c90
//
// 00639c90  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00639c96  85c0                 test eax, eax
// 00639c98  7525                 jne 0x639cbf
// 00639c9a  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 00639ca0  85c0                 test eax, eax
// 00639ca2  7f1b                 jg 0x639cbf
// 00639ca4  8b9158010000         mov edx, dword ptr [ecx + 0x158]
// 00639caa  85d2                 test edx, edx
// 00639cac  740b                 je 0x639cb9
// 00639cae  8b422c               mov eax, dword ptr [edx + 0x2c]
// 00639cb1  85c0                 test eax, eax
// 00639cb3  7f0a                 jg 0x639cbf
// 00639cb5  8b4228               mov eax, dword ptr [edx + 0x28]
// 00639cb8  c3                   ret 
// 00639cb9  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 00639cbf  c3                   ret 

struct CXTPControlComboBoxAutoCompleteWnd
{
    char m_pad0[0x84];
    int m_nUnknown84;
    int m_nUnknown88;
    int m_nUnknown8c;
    int m_nUnknown90;
    char m_pad1[0x158 - 0x94];
    void* m_pUnknown158;
    int GetValue();
};

int CXTPControlComboBoxAutoCompleteWnd::GetValue()
{
    int result = m_nUnknown90;
    if (result == 0)
    {
        result = m_nUnknown88;
        if (result <= 0)
        {
            void* p = m_pUnknown158;
            if (p != 0)
            {
                result = *(int*)((char*)p + 0x2c);
                if (result <= 0)
                {
                    result = *(int*)((char*)p + 0x28);
                }
            }
            else
            {
                result = m_nUnknown84;
            }
        }
    }
    return result;
}

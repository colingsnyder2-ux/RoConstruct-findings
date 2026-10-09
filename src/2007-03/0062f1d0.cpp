// roc 2007-03 0062f1d0  unit: seg_00620000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062f1d0
//
// 0062f1d0  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 0062f1d6  85c0                 test eax, eax
// 0062f1d8  7525                 jne 0x62f1ff
// 0062f1da  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 0062f1e0  85c0                 test eax, eax
// 0062f1e2  7f1b                 jg 0x62f1ff
// 0062f1e4  8b9158010000         mov edx, dword ptr [ecx + 0x158]
// 0062f1ea  85d2                 test edx, edx
// 0062f1ec  740b                 je 0x62f1f9
// 0062f1ee  8b422c               mov eax, dword ptr [edx + 0x2c]
// 0062f1f1  85c0                 test eax, eax
// 0062f1f3  7f0a                 jg 0x62f1ff
// 0062f1f5  8b4228               mov eax, dword ptr [edx + 0x28]
// 0062f1f8  c3                   ret 
// 0062f1f9  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 0062f1ff  c3                   ret 
// copied from an identical function in another client (function ?GetValue@CXTPControlComboBoxAutoCompleteWnd@ns_ROCX000038@@QAEHXZ)

namespace ns_ROCX000038 {
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
}

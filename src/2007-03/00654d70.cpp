// roc 2007-03 00654d70  unit: seg_00650000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00654d70
//
// 00654d70  8b8160040000         mov eax, dword ptr [ecx + 0x460]
// 00654d76  83f804               cmp eax, 4
// 00654d79  7405                 je 0x654d80
// 00654d7b  83f805               cmp eax, 5
// 00654d7e  7506                 jne 0x654d86
// 00654d80  8b8164040000         mov eax, dword ptr [ecx + 0x464]
// 00654d86  c3                   ret 
// copied from an identical function in another client (function ?getValue@CXTTreeBase@ns_ROCX00002d@@QAEHXZ)

namespace ns_ROCX00002d {
struct CXTTreeBase
{
    char pad_0000[0x460];
    int  m_kind;
    int  m_value;
    int  getValue();
};

int CXTTreeBase::getValue()
{
    if (m_kind == 4 || m_kind == 5)
        return m_value;
    return m_kind;
}
}

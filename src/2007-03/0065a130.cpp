// roc 2007-03 0065a130  unit: seg_00650000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065a130
//
// 0065a130  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0065a136  85c0                 test eax, eax
// 0065a138  7404                 je 0x65a13e
// 0065a13a  8b4024               mov eax, dword ptr [eax + 0x24]
// 0065a13d  c3                   ret 
// 0065a13e  33c0                 xor eax, eax
// 0065a140  c3                   ret 
// copied from an identical function in another client (function ?GetSomeValue@CXTPControls@ns_ROCX000001@@QAEKXZ)

namespace ns_ROCX000001 {
typedef unsigned long DWORD;

struct CXTPControls
{
    unsigned char pad[0xd0];
    DWORD field_d0;

    DWORD GetSomeValue();
};

DWORD CXTPControls::GetSomeValue()
{
    DWORD value = this->field_d0;
    if (value)
        return *(DWORD*)(value + 0x24);
    return 0;
}
}

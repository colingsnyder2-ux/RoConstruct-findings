// roc 2009-12 00838690  unit: CXTPControls  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00838690
//
// 00838690  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 00838696  85c0                 test eax, eax
// 00838698  7404                 je 0x83869e
// 0083869a  8b4024               mov eax, dword ptr [eax + 0x24]
// 0083869d  c3                   ret 
// 0083869e  33c0                 xor eax, eax
// 008386a0  c3                   ret 
// copied from an identical function in another client (function ?GetSomeValue@CXTPControls@ns_ROCX000036@@QAEKXZ)

namespace ns_ROCX000036 {
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

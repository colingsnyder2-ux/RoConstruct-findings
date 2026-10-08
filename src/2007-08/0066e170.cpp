// from server: 100% by colin
// roc 2007-08 0066e170  unit: CXTPControls  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e170
//
// 0066e170  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0066e176  85c0                 test eax, eax
// 0066e178  7404                 je 0x66e17e
// 0066e17a  8b4024               mov eax, dword ptr [eax + 0x24]
// 0066e17d  c3                   ret 
// 0066e17e  33c0                 xor eax, eax
// 0066e180  c3                   ret 

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

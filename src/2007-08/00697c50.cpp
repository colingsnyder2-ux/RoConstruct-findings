// from server: 100% by colin
// roc 2007-08 00697c50  unit: CXTPPropertyGridItem  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00697c50
//
// 00697c50  8b81e8000000         mov eax, dword ptr [ecx + 0xe8]
// 00697c56  f7d8                 neg eax
// 00697c58  1bc0                 sbb eax, eax
// 00697c5a  83e020               and eax, 0x20
// 00697c5d  33d2                 xor edx, edx
// 00697c5f  83b9f800000001       cmp dword ptr [ecx + 0xf8], 1
// 00697c66  0f9ec2               setle dl
// 00697c69  83ea01               sub edx, 1
// 00697c6c  83e204               and edx, 4
// 00697c6f  0bc2                 or eax, edx
// 00697c71  0b81fc000000         or eax, dword ptr [ecx + 0xfc]
// 00697c77  0d80000040           or eax, 0x40000080
// 00697c7c  c3                   ret 

struct CXTPPropertyGridItem
{
    int get_flags();
};

int CXTPPropertyGridItem::get_flags()
{
    int a = *(int*)((char*)this + 0xe8);
    a = (a != 0) ? 0x20 : 0;
    int b = (*(int*)((char*)this + 0xf8) <= 1) ? 0 : 4;
    return a | b | *(int*)((char*)this + 0xfc) | 0x40000080;
}

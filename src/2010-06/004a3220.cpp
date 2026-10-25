// from server: 100% by tester
// roc 2010-06 004a3220  unit: seg_004a0000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a3220
//
// 004a3220  8bc1                 mov eax, ecx
// 004a3222  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a3226  8b8038010000         mov eax, dword ptr [eax + 0x138]
// 004a322c  ba01000000           mov edx, 1
// 004a3231  d3e2                 shl edx, cl
// 004a3233  23c2                 and eax, edx
// 004a3235  f7d8                 neg eax
// 004a3237  1bc0                 sbb eax, eax
// 004a3239  f7d8                 neg eax
// 004a323b  c20400               ret 4

struct S
{
    unsigned char padding[0x138];
    unsigned int flags;
    int get(unsigned int);
};

int S::get(unsigned int index)
{
    return (flags & (1u << index)) != 0;
}
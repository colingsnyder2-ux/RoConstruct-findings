// from server: 100% by tester
// roc 2011-06 004a3760  unit: RBX::DS::CVideoStreamFilter  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a3760
//
// 004a3760  8bc1                 mov eax, ecx
// 004a3762  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a3766  8b8068010000         mov eax, dword ptr [eax + 0x168]
// 004a376c  ba01000000           mov edx, 1
// 004a3771  d3e2                 shl edx, cl
// 004a3773  23c2                 and eax, edx
// 004a3775  f7d8                 neg eax
// 004a3777  1bc0                 sbb eax, eax
// 004a3779  f7d8                 neg eax
// 004a377b  c20400               ret 4

struct S
{
    unsigned char padding[0x168];
    unsigned int flags;
    int get(unsigned int);
};

int S::get(unsigned int index)
{
    return (flags & (1u << index)) != 0;
}
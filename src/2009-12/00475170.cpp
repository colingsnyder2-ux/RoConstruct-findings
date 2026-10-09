// roc 2009-12 00475170  unit: DxUserInput  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00475170
//
// 00475170  8bc1                 mov eax, ecx
// 00475172  33d2                 xor edx, edx
// 00475174  33c9                 xor ecx, ecx
// 00475176  668910               mov word ptr [eax], dx
// 00475179  bae4040000           mov edx, 0x4e4
// 0047517e  894804               mov dword ptr [eax + 4], ecx
// 00475181  894810               mov dword ptr [eax + 0x10], ecx
// 00475184  66895002             mov word ptr [eax + 2], dx
// 00475188  894808               mov dword ptr [eax + 8], ecx
// 0047518b  89480c               mov dword ptr [eax + 0xc], ecx
// 0047518e  c3                   ret 
// copied from an identical function in another client (function ?init@DxUserInput@ns_ROCX000003@@QAEPAU12@XZ)

namespace ns_ROCX000003 {
struct DxUserInput {
    unsigned short w0;
    unsigned short w2;
    int d4;
    int d8;
    int dC;
    int d10;
    DxUserInput* init();
};

DxUserInput* DxUserInput::init()
{
    d4 = 0;
    d10 = 0;
    w0 = 0;
    w2 = 0x4e4;
    d8 = 0;
    dC = 0;
    return this;
}
}

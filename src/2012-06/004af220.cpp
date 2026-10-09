// roc 2012-06 004af220  unit: VerbBinderJob  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004af220
//
// 004af220  8bc1                 mov eax, ecx
// 004af222  33d2                 xor edx, edx
// 004af224  33c9                 xor ecx, ecx
// 004af226  668910               mov word ptr [eax], dx
// 004af229  bae4040000           mov edx, 0x4e4
// 004af22e  894804               mov dword ptr [eax + 4], ecx
// 004af231  894810               mov dword ptr [eax + 0x10], ecx
// 004af234  66895002             mov word ptr [eax + 2], dx
// 004af238  894808               mov dword ptr [eax + 8], ecx
// 004af23b  89480c               mov dword ptr [eax + 0xc], ecx
// 004af23e  c3                   ret 
// copied from an identical function in another client (function ?init@DxUserInput@ns_ROCX000002@@QAEPAU12@XZ)

namespace ns_ROCX000002 {
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

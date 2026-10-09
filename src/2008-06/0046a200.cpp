// roc 2008-06 0046a200  unit: DxUserInput  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a200
//
// 0046a200  8bc1                 mov eax, ecx
// 0046a202  33d2                 xor edx, edx
// 0046a204  33c9                 xor ecx, ecx
// 0046a206  668910               mov word ptr [eax], dx
// 0046a209  bae4040000           mov edx, 0x4e4
// 0046a20e  894804               mov dword ptr [eax + 4], ecx
// 0046a211  894810               mov dword ptr [eax + 0x10], ecx
// 0046a214  66895002             mov word ptr [eax + 2], dx
// 0046a218  894808               mov dword ptr [eax + 8], ecx
// 0046a21b  89480c               mov dword ptr [eax + 0xc], ecx
// 0046a21e  c3                   ret 
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

// roc 2007-03 00466190  unit: seg_00460000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00466190
//
// 00466190  8bc1                 mov eax, ecx
// 00466192  33c9                 xor ecx, ecx
// 00466194  894804               mov dword ptr [eax + 4], ecx
// 00466197  894810               mov dword ptr [eax + 0x10], ecx
// 0046619a  668908               mov word ptr [eax], cx
// 0046619d  66c74002e404         mov word ptr [eax + 2], 0x4e4
// 004661a3  894808               mov dword ptr [eax + 8], ecx
// 004661a6  89480c               mov dword ptr [eax + 0xc], ecx
// 004661a9  c3                   ret 
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

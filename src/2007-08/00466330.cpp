// from server: 100% by colin
// roc 2007-08 00466330  unit: DxUserInput  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00466330
//
// 00466330  8bc1                 mov eax, ecx
// 00466332  33c9                 xor ecx, ecx
// 00466334  894804               mov dword ptr [eax + 4], ecx
// 00466337  894810               mov dword ptr [eax + 0x10], ecx
// 0046633a  668908               mov word ptr [eax], cx
// 0046633d  66c74002e404         mov word ptr [eax + 2], 0x4e4
// 00466343  894808               mov dword ptr [eax + 8], ecx
// 00466346  89480c               mov dword ptr [eax + 0xc], ecx
// 00466349  c3                   ret 

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

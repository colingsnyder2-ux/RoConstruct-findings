// from server: 100% by king_originala
// roc 2008-06 0046ab60  unit: VCWorkspace::?$CComObject  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046ab60
//
// 0046ab60  8bc1                 mov eax, ecx
// 0046ab62  33c9                 xor ecx, ecx
// 0046ab64  894820               mov dword ptr [eax + 0x20], ecx
// 0046ab67  c740080cc88100       mov dword ptr [eax + 8], 0x81c80c
// 0046ab6e  89480c               mov dword ptr [eax + 0xc], ecx
// 0046ab71  894814               mov dword ptr [eax + 0x14], ecx
// 0046ab74  894824               mov dword ptr [eax + 0x24], ecx
// 0046ab77  894828               mov dword ptr [eax + 0x28], ecx
// 0046ab7a  89482c               mov dword ptr [eax + 0x2c], ecx
// 0046ab7d  894830               mov dword ptr [eax + 0x30], ecx
// 0046ab80  c3                   ret 

struct S {
    unsigned int fields[13];
    S* f();
};

S* S::f() {
    fields[8] = 0;
    fields[2] = 0x81c80c;
    fields[3] = 0;
    fields[5] = 0;
    fields[9] = 0;
    fields[10] = 0;
    fields[11] = 0;
    fields[12] = 0;
    return this;
}

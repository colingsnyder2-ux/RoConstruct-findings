// from server: 86% by colin
// roc 2007-08 0057adb0  unit: RBX::ArrowTool  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057adb0
//
// 0057adb0  8b442404             mov eax, dword ptr [esp + 4]
// 0057adb4  8b90bc000000         mov edx, dword ptr [eax + 0xbc]
// 0057adba  8b82bc000000         mov eax, dword ptr [edx + 0xbc]
// 0057adc0  8b88bc000000         mov ecx, dword ptr [eax + 0xbc]
// 0057adc6  85c9                 test ecx, ecx
// 0057adc8  7414                 je 0x57adde
// 0057adca  8d9b00000000         lea ebx, [ebx]
// 0057add0  8bd0                 mov edx, eax
// 0057add2  8bc1                 mov eax, ecx
// 0057add4  8b88bc000000         mov ecx, dword ptr [eax + 0xbc]
// 0057adda  85c9                 test ecx, ecx
// 0057addc  75f2                 jne 0x57add0
// 0057adde  8b827c020000         mov eax, dword ptr [edx + 0x27c]
// 0057ade4  c3                   ret 

struct Instance {
    char pad[0xbc];
    Instance* fieldBC;
    char pad2[0x27c - 0xbc - 4];
    int field27C;
};

int func_0057adb0(Instance* inst) {
    Instance* edx = inst->fieldBC;
    Instance* eax = edx->fieldBC;
    Instance* ecx = eax->fieldBC;
    while (ecx != 0) {
        edx = eax;
        eax = ecx;
        ecx = eax->fieldBC;
    }
    return edx->field27C;
}

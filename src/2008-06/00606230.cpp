// from server: 100% by tester
// roc 2008-06 00606230  unit: RBX::ContactConnector  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00606230
//
// 00606230  837c240400           cmp dword ptr [esp + 4], 0
// 00606235  7506                 jne 0x60623d
// 00606237  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0060623a  c20400               ret 4
// 0060623d  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00606240  c20400               ret 4

struct RBX_ContactConnector {
    char pad[0x14];
    int field14;
    int field18;
    int get(int which);
};

int RBX_ContactConnector::get(int which) {
    if (which == 0)
        return field14;
    return field18;
}

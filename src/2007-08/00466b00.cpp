// from server: 73% by colin
// roc 2007-08 00466b00  unit: VCWorkspace::?$CComObject  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00466b00
//
// 00466b00  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00466b03  e8f86f0c00           call 0x52db00
// 00466b08  c20800               ret 8

struct VCWorkspaceImpl {
    void Notify(int, int);
};

struct VCWorkspace {
    char reserved[0x10];
    VCWorkspaceImpl* impl;
    void Forward(int a, int b);
};

void VCWorkspace::Forward(int a, int b)
{
    impl->Notify(a, b);
}

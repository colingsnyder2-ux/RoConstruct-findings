// from server: 100% by colin
// roc 2007-08 00466b00  unit: VCWorkspace::?$CComObject  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00466b00
//
// 00466b00  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00466b03  e8f86f0c00           call 0x52db00
// 00466b08  c20800               ret 8

struct VCWorkspace_CComObject {
    char pad[0x10];
    void* field10;
    void Method(void* a, void* b);
};

extern "C" void __fastcall sub_52db00(void* p);

void VCWorkspace_CComObject::Method(void* a, void* b)
{
    sub_52db00(field10);
}

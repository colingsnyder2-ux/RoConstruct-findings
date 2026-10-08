// from server: 50% by colin
// roc 2007-08 005b4870  unit: RBX::Geometry  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4870
//
// 005b4870  8bc1                 mov eax, ecx
// 005b4872  8a4c2404             mov cl, byte ptr [esp + 4]
// 005b4876  3a4873               cmp cl, byte ptr [eax + 0x73]
// 005b4879  7413                 je 0x5b488e
// 005b487b  884873               mov byte ptr [eax + 0x73], cl
// 005b487e  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 005b4881  85c9                 test ecx, ecx
// 005b4883  7409                 je 0x5b488e
// 005b4885  89442404             mov dword ptr [esp + 4], eax
// 005b4889  e98249ffff           jmp 0x5a9210
// 005b488e  c20400               ret 4

struct Geometry {
    char pad[0x1c];
    void* field_1c;
    char pad2[0x73 - 0x20];
    unsigned char field_73;
    void setFlag(unsigned char v);
};

extern "C" void __fastcall helper_5a9210(void* p);

void Geometry::setFlag(unsigned char v) {
    if (v != field_73) {
        field_73 = v;
        if (field_1c != 0) {
            helper_5a9210(this);
        }
    }
}

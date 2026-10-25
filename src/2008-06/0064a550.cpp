// from server: 100% by colin
// roc 2008-06 0064a550  unit: RBX::CleanStage  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064a550
//
// 0064a550  8b442404             mov eax, dword ptr [esp + 4]
// 0064a554  48                   dec eax
// 0064a555  83f805               cmp eax, 5
// 0064a558  7734                 ja 0x64a58e
// 0064a55a  ff248598a56400       jmp dword ptr [eax*4 + 0x64a598]
// 0064a561  8d81e0000000         lea eax, [ecx + 0xe0]
// 0064a567  c20400               ret 4
// 0064a56a  8d8100010000         lea eax, [ecx + 0x100]
// 0064a570  c20400               ret 4
// 0064a573  8d8140010000         lea eax, [ecx + 0x140]
// 0064a579  c20400               ret 4
// 0064a57c  8d8160010000         lea eax, [ecx + 0x160]
// 0064a582  c20400               ret 4
// 0064a585  8d8180010000         lea eax, [ecx + 0x180]
// 0064a58b  c20400               ret 4
// 0064a58e  8d8120010000         lea eax, [ecx + 0x120]
// 0064a594  c20400               ret 4
// 0064a597  90                   nop 
// 0064a598  61                   popal 
// 0064a599  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 0064a59a  64006aa5             add byte ptr fs:[edx - 0x5b], ch
// 0064a59e  64008ea5640073       add byte ptr fs:[esi + 0x730064a5], cl
// 0064a5a5  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 0064a5a6  64007ca564           add byte ptr fs:[ebp + 0x64], bh





struct CleanStage {
    char pad[0xe0];
    int field_e0;
    char pad2[0x100 - 0xe0 - 4];
    int field_100;
    char pad3[0x120 - 0x100 - 4];
    int field_120;
    char pad4[0x140 - 0x120 - 4];
    int field_140;
    char pad5[0x160 - 0x140 - 4];
    int field_160;
    char pad6[0x180 - 0x160 - 4];
    int field_180;

    int* get(int index);
};

int* CleanStage::get(int index) {
    switch (index) {
    case 1: return &field_e0;
    case 2: return &field_100;
    case 3: return &field_120;
    case 4: return &field_140;
    case 5: return &field_160;
    case 6: return &field_180;
    default: return &field_120;
    }
}

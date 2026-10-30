// roc 2009-06 006d8d80  unit: RBX::CleanStage  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d8d80
//
// 006d8d80  8b442404             mov eax, dword ptr [esp + 4]
// 006d8d84  48                   dec eax
// 006d8d85  83f805               cmp eax, 5
// 006d8d88  7734                 ja 0x6d8dbe
// 006d8d8a  ff2485c88d6d00       jmp dword ptr [eax*4 + 0x6d8dc8]
// 006d8d91  8d81e0000000         lea eax, [ecx + 0xe0]
// 006d8d97  c20400               ret 4
// 006d8d9a  8d8100010000         lea eax, [ecx + 0x100]
// 006d8da0  c20400               ret 4
// 006d8da3  8d8140010000         lea eax, [ecx + 0x140]
// 006d8da9  c20400               ret 4
// 006d8dac  8d8160010000         lea eax, [ecx + 0x160]
// 006d8db2  c20400               ret 4
// 006d8db5  8d8180010000         lea eax, [ecx + 0x180]
// 006d8dbb  c20400               ret 4
// 006d8dbe  8d8120010000         lea eax, [ecx + 0x120]
// 006d8dc4  c20400               ret 4
// 006d8dc7  90                   nop 
// 006d8dc8  91                   xchg ecx, eax
// 006d8dc9  8d6d00               lea ebp, [ebp]
// 006d8dcc  9a8d6d00be8d6d       lcall 0x6d8d, 0xbe006d8d
// 006d8dd3  00a38d6d00ac         add byte ptr [ebx - 0x53ff9273], ah
// 006d8dd9  8d6d00               lea ebp, [ebp]
// 006d8ddc  b58d                 mov ch, 0x8d
// 006d8dde  6d                   insd dword ptr es:[edi], dx
// copied from an identical function in another client (function ?get@CleanStage@@QAEPAHH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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
// roc 2009-12 007b6e30  unit: RBX::CleanStage  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b6e30
//
// 007b6e30  8b442404             mov eax, dword ptr [esp + 4]
// 007b6e34  48                   dec eax
// 007b6e35  83f805               cmp eax, 5
// 007b6e38  7734                 ja 0x7b6e6e
// 007b6e3a  ff2485786e7b00       jmp dword ptr [eax*4 + 0x7b6e78]
// 007b6e41  8d81e0000000         lea eax, [ecx + 0xe0]
// 007b6e47  c20400               ret 4
// 007b6e4a  8d8100010000         lea eax, [ecx + 0x100]
// 007b6e50  c20400               ret 4
// 007b6e53  8d8140010000         lea eax, [ecx + 0x140]
// 007b6e59  c20400               ret 4
// 007b6e5c  8d8160010000         lea eax, [ecx + 0x160]
// 007b6e62  c20400               ret 4
// 007b6e65  8d8180010000         lea eax, [ecx + 0x180]
// 007b6e6b  c20400               ret 4
// 007b6e6e  8d8120010000         lea eax, [ecx + 0x120]
// 007b6e74  c20400               ret 4
// 007b6e77  90                   nop 
// 007b6e78  41                   inc ecx
// 007b6e79  6e                   outsb dx, byte ptr [esi]
// 007b6e7a  7b00                 jnp 0x7b6e7c
// 007b6e7c  4a                   dec edx
// 007b6e7d  6e                   outsb dx, byte ptr [esi]
// 007b6e7e  7b00                 jnp 0x7b6e80
// 007b6e80  6e                   outsb dx, byte ptr [esi]
// 007b6e81  6e                   outsb dx, byte ptr [esi]
// 007b6e82  7b00                 jnp 0x7b6e84
// 007b6e84  53                   push ebx
// 007b6e85  6e                   outsb dx, byte ptr [esi]
// 007b6e86  7b00                 jnp 0x7b6e88
// 007b6e88  5c                   pop esp
// 007b6e89  6e                   outsb dx, byte ptr [esi]
// 007b6e8a  7b00                 jnp 0x7b6e8c
// 007b6e8c  656e                 outsb dx, byte ptr gs:[esi]
// 007b6e8e  7b00                 jnp 0x7b6e90
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
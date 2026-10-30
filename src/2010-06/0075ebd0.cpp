// roc 2010-06 0075ebd0  unit: RBX::CleanStage  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075ebd0
//
// 0075ebd0  8b442404             mov eax, dword ptr [esp + 4]
// 0075ebd4  48                   dec eax
// 0075ebd5  83f805               cmp eax, 5
// 0075ebd8  7734                 ja 0x75ec0e
// 0075ebda  ff248518ec7500       jmp dword ptr [eax*4 + 0x75ec18]
// 0075ebe1  8d81e0000000         lea eax, [ecx + 0xe0]
// 0075ebe7  c20400               ret 4
// 0075ebea  8d8100010000         lea eax, [ecx + 0x100]
// 0075ebf0  c20400               ret 4
// 0075ebf3  8d8140010000         lea eax, [ecx + 0x140]
// 0075ebf9  c20400               ret 4
// 0075ebfc  8d8160010000         lea eax, [ecx + 0x160]
// 0075ec02  c20400               ret 4
// 0075ec05  8d8180010000         lea eax, [ecx + 0x180]
// 0075ec0b  c20400               ret 4
// 0075ec0e  8d8120010000         lea eax, [ecx + 0x120]
// 0075ec14  c20400               ret 4
// 0075ec17  90                   nop 
// 0075ec18  e1eb                 loope 0x75ec05
// 0075ec1a  7500                 jne 0x75ec1c
// 0075ec1c  eaeb75000eec75       ljmp 0x75ec:0xe0075eb
// 0075ec23  00f3                 add bl, dh
// 0075ec25  eb75                 jmp 0x75ec9c
// 0075ec27  00fc                 add ah, bh
// 0075ec29  eb75                 jmp 0x75eca0
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
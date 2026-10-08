// from server: 82% by colin
// roc 2007-08 0061bc40  unit: RBX::KeyButton  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061bc40
//
// 0061bc40  8b442408             mov eax, dword ptr [esp + 8]
// 0061bc44  833809               cmp dword ptr [eax], 9
// 0061bc47  750c                 jne 0x61bc55
// 0061bc49  8b5008               mov edx, dword ptr [eax + 8]
// 0061bc4c  3b5118               cmp edx, dword ptr [ecx + 0x18]
// 0061bc4f  7504                 jne 0x61bc55
// 0061bc51  c6411c01             mov byte ptr [ecx + 0x1c], 1
// 0061bc55  83380a               cmp dword ptr [eax], 0xa
// 0061bc58  750c                 jne 0x61bc66
// 0061bc5a  8b5008               mov edx, dword ptr [eax + 8]
// 0061bc5d  3b5118               cmp edx, dword ptr [ecx + 0x18]
// 0061bc60  7504                 jne 0x61bc66
// 0061bc62  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 0061bc66  56                   push esi
// 0061bc67  8b742408             mov esi, dword ptr [esp + 8]
// 0061bc6b  50                   push eax
// 0061bc6c  56                   push esi
// 0061bc6d  e82e4afeff           call 0x6006a0
// 0061bc72  8bc6                 mov eax, esi
// 0061bc74  5e                   pop esi
// 0061bc75  c20800               ret 8

struct KeyButton {
    char pad[0x18];
    int field18;
    bool field1c;
    void processEvent(int* evt);
};

extern "C" int __stdcall sub_6006a0(int* evt, int* self);

void KeyButton::processEvent(int* evt) {
    if (evt[0] == 9) {
        if (evt[2] == field18) {
            field1c = true;
        }
    }
    if (evt[0] == 10) {
        if (evt[2] == field18) {
            field1c = false;
        }
    }
    sub_6006a0(evt, (int*)this);
}

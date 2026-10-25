// from server: 100% by king_originala
// roc 2008-06 0064ef90  unit: RBX::KeyButton  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064ef90
//
// 0064ef90  8b442408             mov eax, dword ptr [esp + 8]
// 0064ef94  83380a               cmp dword ptr [eax], 0xa
// 0064ef97  750c                 jne 0x64efa5
// 0064ef99  8b5008               mov edx, dword ptr [eax + 8]
// 0064ef9c  3b5118               cmp edx, dword ptr [ecx + 0x18]
// 0064ef9f  7504                 jne 0x64efa5
// 0064efa1  c6411c01             mov byte ptr [ecx + 0x1c], 1
// 0064efa5  83380b               cmp dword ptr [eax], 0xb
// 0064efa8  750c                 jne 0x64efb6
// 0064efaa  8b5008               mov edx, dword ptr [eax + 8]
// 0064efad  3b5118               cmp edx, dword ptr [ecx + 0x18]
// 0064efb0  7504                 jne 0x64efb6
// 0064efb2  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 0064efb6  56                   push esi
// 0064efb7  8b742408             mov esi, dword ptr [esp + 8]
// 0064efbb  50                   push eax
// 0064efbc  56                   push esi
// 0064efbd  e84e32ffff           call 0x642210
// 0064efc2  8bc6                 mov eax, esi
// 0064efc4  5e                   pop esi
// 0064efc5  c20800               ret 8

struct Event {
    int type;
    int reserved;
    int key;
};

struct KeyButton {
    char pad[0x18];
    int key;
    bool pressed;

    void* sub_642210(void* result, Event* event);
    void* sub_64EF90(void* result, Event* event);
};

void* KeyButton::sub_64EF90(void* result, Event* event) {
    if (event->type == 10 && event->key == key)
        pressed = true;

    if (event->type == 11 && event->key == key)
        pressed = false;

    sub_642210(result, event);
    return result;
}

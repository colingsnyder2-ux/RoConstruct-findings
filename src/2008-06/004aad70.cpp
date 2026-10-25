// from server: 100% by king_originala
// roc 2008-06 004aad70  unit: RBX::VNetworkSettings::?$GlobalSettingsItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aad70
//
// 004aad70  8b442404             mov eax, dword ptr [esp + 4]
// 004aad74  8b00                 mov eax, dword ptr [eax]
// 004aad76  3b8134010000         cmp eax, dword ptr [ecx + 0x134]
// 004aad7c  7413                 je 0x4aad91
// 004aad7e  898134010000         mov dword ptr [ecx + 0x134], eax
// 004aad84  c7442404c0129700     mov dword ptr [esp + 4], 0x9712c0
// 004aad8c  e96f2df6ff           jmp 0x40db00
// 004aad91  c20400               ret 4

extern char notification;

struct S {
    char padding[0x134];
    int value;
    void notify(const void*);
    void set(const int*);
};

void S::set(const int* input)
{
    if (*input != value) {
        value = *input;
        notify(&notification);
    }
}

// from server: 100% by colin
// roc 2008-06 005e7550  unit: RBX::Ball  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7550
//
// 005e7550  8b442404             mov eax, dword ptr [esp + 4]
// 005e7554  3b415c               cmp eax, dword ptr [ecx + 0x5c]
// 005e7557  7403                 je 0x5e755c
// 005e7559  89415c               mov dword ptr [ecx + 0x5c], eax
// 005e755c  c20400               ret 4

struct Ball {
    char pad[0x5c];
    int field_5c;
    void setField(int value);
};

void Ball::setField(int value) {
    if (value != field_5c) {
        field_5c = value;
    }
}

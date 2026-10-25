// from server: 100% by tester
// roc 2010-06 00750b60  unit: RBX::Assembly  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00750b60
//
// 00750b60  8a442404             mov al, byte ptr [esp + 4]
// 00750b64  88413c               mov byte ptr [ecx + 0x3c], al
// 00750b67  c20800               ret 8

struct RBX_Ball {
    char pad[0x3c];
    char field_0x3c;
    void setField(char value, int extra);
};

void RBX_Ball::setField(char value, int extra) {
    field_0x3c = value;
}

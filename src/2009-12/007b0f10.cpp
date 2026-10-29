// roc 2009-12 007b0f10  unit: RBX::Ball  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b0f10
//
// 007b0f10  8a442404             mov al, byte ptr [esp + 4]
// 007b0f14  88413c               mov byte ptr [ecx + 0x3c], al
// 007b0f17  c20800               ret 8
// copied from an identical function in another client (function ?setField@RBX_Ball@ns_ROCX000014@@QAEXDH@Z)

namespace ns_ROCX000014 {
// from server: 100% by why2
struct RBX_Ball {
    char pad[0x3c];
    char field_0x3c;
    void setField(char value, int extra);
};

void RBX_Ball::setField(char value, int extra) {
    field_0x3c = value;
}
}

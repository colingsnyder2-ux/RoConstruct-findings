// from server: 100% by tester
// roc 2011-06 007a1da0  unit: RBX::Assembly  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a1da0
//
// 007a1da0  8a442404             mov al, byte ptr [esp + 4]
// 007a1da4  884140               mov byte ptr [ecx + 0x40], al
// 007a1da7  c20800               ret 8

struct Ball {
    void setFlag(unsigned char value, int dummy);
};

void Ball::setFlag(unsigned char value, int dummy) {
    *(unsigned char*)((char*)this + 0x40) = value;
}

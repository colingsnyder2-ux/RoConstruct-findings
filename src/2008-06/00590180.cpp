// from server: 13% by colin
// roc 2008-06 00590180  unit: RBX::RootInstance  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00590180
//
// 00590180  c681b002000001       mov byte ptr [ecx + 0x2b0], 1
// 00590187  e9e444ffff           jmp 0x584670

struct RootInstance {
    bool isParentLocked;

    void setIsParentLocked(bool value);
    bool getIsParentLocked() const;
};

void RootInstance::setIsParentLocked(bool value) {
    isParentLocked = value;
}

bool RootInstance::getIsParentLocked() const {
    return isParentLocked;
}

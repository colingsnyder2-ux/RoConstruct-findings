// from server: 100% by colin
// roc 2007-08 005a9010  unit: RBX::VHumanoid::?$SignalDesc  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9010
//
// 005a9010  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 005a9013  8b01                 mov eax, dword ptr [ecx]
// 005a9015  8b5018               mov edx, dword ptr [eax + 0x18]
// 005a9018  6a01                 push 1
// 005a901a  ffd2                 call edx
// 005a901c  c3                   ret 

struct SignalTarget {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void fire(int value);
};

struct VHumanoid {
    char reserved[0x34];
    SignalTarget* target;
    void fireSignal();
};

void VHumanoid::fireSignal() {
    target->fire(1);
}

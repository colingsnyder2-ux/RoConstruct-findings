// roc 2007-03 005acbd0  unit: seg_005a0000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005acbd0
//
// 005acbd0  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 005acbd3  8b01                 mov eax, dword ptr [ecx]
// 005acbd5  8b5018               mov edx, dword ptr [eax + 0x18]
// 005acbd8  6a01                 push 1
// 005acbda  ffd2                 call edx
// 005acbdc  c3                   ret 
// copied from an identical function in another client (function ?fireSignal@VHumanoid@ns_ROCX000004@@QAEXXZ)

namespace ns_ROCX000004 {
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
}

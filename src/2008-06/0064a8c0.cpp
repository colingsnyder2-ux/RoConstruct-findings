// from server: 100% by king_originala
// roc 2008-06 0064a8c0  unit: RBX::SleepStage  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064a8c0
//
// 0064a8c0  8b542404             mov edx, dword ptr [esp + 4]
// 0064a8c4  8bc2                 mov eax, edx
// 0064a8c6  83e800               sub eax, 0
// 0064a8c9  742a                 je 0x64a8f5
// 0064a8cb  83e801               sub eax, 1
// 0064a8ce  741c                 je 0x64a8ec
// 0064a8d0  83e801               sub eax, 1
// 0064a8d3  740e                 je 0x64a8e3
// 0064a8d5  8b4908               mov ecx, dword ptr [ecx + 8]
// 0064a8d8  8b01                 mov eax, dword ptr [ecx]
// 0064a8da  89542404             mov dword ptr [esp + 4], edx
// 0064a8de  8b5018               mov edx, dword ptr [eax + 0x18]
// 0064a8e1  ffe2                 jmp edx
// 0064a8e3  8b81d4000000         mov eax, dword ptr [ecx + 0xd4]
// 0064a8e9  c20400               ret 4
// 0064a8ec  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 0064a8f2  c20400               ret 4
// 0064a8f5  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0064a8fb  c20400               ret 4

struct Base {
    virtual int slot0() = 0;
    virtual int slot1() = 0;
    virtual int slot2() = 0;
    virtual int slot3() = 0;
    virtual int slot4() = 0;
    virtual int slot5() = 0;
    virtual int get(int index) = 0;
};

struct SleepStage {
    char pad0[8];
    Base* base;
    char pad1[196];
    int value0;
    int value2;
    char pad2[204];
    int value1;

    int get(int index);
};

int SleepStage::get(int index)
{
    switch (index) {
    case 0: return value0;
    case 1: return value1;
    case 2: return value2;
    default: return base->get(index);
    }
}

// from server: 100% by colin
// roc 2007-08 00618a90  unit: RBX::Edge  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00618a90
//
// 00618a90  837c240400           cmp dword ptr [esp + 4], 0
// 00618a95  750a                 jne 0x618aa1
// 00618a97  8b442408             mov eax, dword ptr [esp + 8]
// 00618a9b  894108               mov dword ptr [ecx + 8], eax
// 00618a9e  c20800               ret 8
// 00618aa1  8b542408             mov edx, dword ptr [esp + 8]
// 00618aa5  89510c               mov dword ptr [ecx + 0xc], edx
// 00618aa8  c20800               ret 8

struct Edge {
    int field0;
    int field4;
    int field8;
    int fieldC;
    void set(int flag, int value);
};

void Edge::set(int flag, int value)
{
    if (flag == 0)
        field8 = value;
    else
        fieldC = value;
}

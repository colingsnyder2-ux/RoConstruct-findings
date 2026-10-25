// from server: 100% by atomic.potato
// roc 2008-06 00643d30  unit: RBX::HUMAN::HumanoidState  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00643d30
//
// 00643d30  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00643d33  85c0                 test eax, eax
// 00643d35  7406                 je 0x643d3d
// 00643d37  0528020000           add eax, 0x228
// 00643d3c  c3                   ret 
// 00643d3d  33c0                 xor eax, eax
// 00643d3f  c3                   ret 

struct HumanoidState
{
    int getValue();
    int padding24[9];
    int field24;
};

int HumanoidState::getValue()
{
    if (field24)
        return field24 + 0x228;
    return 0;
}

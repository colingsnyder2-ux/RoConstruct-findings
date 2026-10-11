// from server: 100% by why2
// roc 2009-06 006d16b0  unit: RBX::HUMAN::HumanoidState  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d16b0
//
// 006d16b0  d905a0cd8e00         fld dword ptr [0x8ecda0]
// 006d16b6  c3                   ret 

struct HumanoidState
{
    float getValue();
};

float HumanoidState::getValue()
{
    extern float g_value;
    return g_value;
}

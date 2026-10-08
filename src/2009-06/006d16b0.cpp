// from server: 45% by colin
// roc 2009-06 006d16b0  unit: RBX::HUMAN::HumanoidState  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d16b0
//
// 006d16b0  d905a0cd8e00         fld dword ptr [0x8ecda0]
// 006d16b6  c3                   ret 

extern "C" __declspec(dllimport) float __cdecl G4_func_0089caf0(int);

struct HumanoidState {
    float timer;
    float noTouchTimer;
    bool nearlyTouched;
    bool shouldRender;
    bool finished;
    bool outOfWater;
    bool headClear;
    int priorState;
    int luaState;
};

float f() {
    return G4_func_0089caf0(0x8ecda0);
}

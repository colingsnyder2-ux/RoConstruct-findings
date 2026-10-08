// from server: 13% by colin
// roc 2008-06 005c8930  unit: RBX::LaserTool  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c8930
//
// 005c8930  33c0                 xor eax, eax
// 005c8932  894108               mov dword ptr [ecx + 8], eax
// 005c8935  89410c               mov dword ptr [ecx + 0xc], eax
// 005c8938  c3                   ret 

struct LaserTool {
    int backendToolState;
    int frontendActivationState;
    int grip;
    bool enabled;
    bool droppable;
    bool requiresHandle;
    char toolTip[256];

    void ChangePropertyItem(int state);
};

extern "C" __declspec(dllimport) void __stdcall SetToolState(LaserTool* tool, int state);

void LaserTool::ChangePropertyItem(int state) {
    this->backendToolState = state;
    this->frontendActivationState = state;
    SetToolState(this, state);
}

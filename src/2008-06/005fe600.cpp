// from server: 40% by colin
// roc 2008-06 005fe600  unit: RBX::Tool  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fe600
//
// 005fe600  33c0                 xor eax, eax
// 005fe602  83b9c401000005       cmp dword ptr [ecx + 0x1c4], 5
// 005fe609  0f9dc0               setge al
// 005fe60c  c3                   ret 

struct Tool {
    int backendToolState;
    int frontendActivationState;
    float grip[12];
    bool enabled;
    bool droppable;
    bool requiresHandle;
    char toolTip[256];

    int getNumToolsInCharacter();

    int getBackendToolState();

    int getFrontendActivationState();

    void equipped();

    void unequipped();
};

extern "C" __declspec(dllimport) void __stdcall someFunction(int);

int Tool::getNumToolsInCharacter() {
    return 0;
}

int Tool::getBackendToolState() {
    return backendToolState;
}

int Tool::getFrontendActivationState() {
    return frontendActivationState;
}

void Tool::equipped() {
    if (backendToolState == 5) {
        someFunction(0x1c4);
    }
}

void Tool::unequipped() {
    // Implementation if needed
}

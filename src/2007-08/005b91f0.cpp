// from server: 92% by colin
// roc 2007-08 005b91f0  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b91f0
//
// 005b91f0  8b01                 mov eax, dword ptr [ecx]
// 005b91f2  8b80d8010000         mov eax, dword ptr [eax + 0x1d8]
// 005b91f8  8b4904               mov ecx, dword ptr [ecx + 4]
// 005b91fb  8b848894000000       mov eax, dword ptr [eax + ecx*4 + 0x94]
// 005b9202  85c0                 test eax, eax
// 005b9204  753a                 jne 0x5b9240
// 005b9206  b801000000           mov eax, 1
// 005b920b  8405bc5e8c00         test byte ptr [0x8c5ebc], al
// 005b9211  7528                 jne 0x5b923b
// 005b9213  d905f0547b00         fld dword ptr [0x7b54f0]
// 005b9219  0905bc5e8c00         or dword ptr [0x8c5ebc], eax
// 005b921f  d91db45e8c00         fstp dword ptr [0x8c5eb4]
// 005b9225  c705b05e8c0000000000 mov dword ptr [0x8c5eb0], 0
// 005b922f  d9059c7e7900         fld dword ptr [0x797e9c]
// 005b9235  d91db85e8c00         fstp dword ptr [0x8c5eb8]
// 005b923b  b8b05e8c00           mov eax, 0x8c5eb0
// 005b9240  d94008               fld dword ptr [eax + 8]
// 005b9243  c3                   ret 

struct EnumPropDescriptor {
    void* getset;
    int index;
    float getValue();
};

float EnumPropDescriptor::getValue()
{
    int* vtable = *(int**)this;
    int* type = *(int**)((char*)vtable + 0x1d8);
    int idx = *(int*)((char*)this + 4);
    float* result = *(float**)((char*)type + idx * 4 + 0x94);
    if (result == 0) {
        static int initialized = 0;
        if (!(initialized & 1)) {
            initialized |= 1;
            *(float*)0x8c5eb4 = *(float*)0x7b54f0;
            *(int*)0x8c5eb0 = 0;
            *(float*)0x8c5eb8 = *(float*)0x797e9c;
        }
        result = (float*)0x8c5eb0;
    }
    return result[2];
}

// from server: 90% by colin
// roc 2007-08 005b9130  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b9130
//
// 005b9130  8b01                 mov eax, dword ptr [ecx]
// 005b9132  8b80d8010000         mov eax, dword ptr [eax + 0x1d8]
// 005b9138  8b4904               mov ecx, dword ptr [ecx + 4]
// 005b913b  8b848894000000       mov eax, dword ptr [eax + ecx*4 + 0x94]
// 005b9142  85c0                 test eax, eax
// 005b9144  753a                 jne 0x5b9180
// 005b9146  b801000000           mov eax, 1
// 005b914b  8405bc5e8c00         test byte ptr [0x8c5ebc], al
// 005b9151  7528                 jne 0x5b917b
// 005b9153  d905f0547b00         fld dword ptr [0x7b54f0]
// 005b9159  0905bc5e8c00         or dword ptr [0x8c5ebc], eax
// 005b915f  d91db45e8c00         fstp dword ptr [0x8c5eb4]
// 005b9165  c705b05e8c0000000000 mov dword ptr [0x8c5eb0], 0
// 005b916f  d9059c7e7900         fld dword ptr [0x797e9c]
// 005b9175  d91db85e8c00         fstp dword ptr [0x8c5eb8]
// 005b917b  b8b05e8c00           mov eax, 0x8c5eb0
// 005b9180  8b00                 mov eax, dword ptr [eax]
// 005b9182  c3                   ret 

struct EnumPropDescriptor {
    void* getset;
    int enumDesc;
    int getValue();
};

int EnumPropDescriptor::getValue()
{
    int* vtbl = *(int**)this;
    int* desc = *(int**)((char*)vtbl + 0x1d8);
    int idx = *(int*)((char*)this + 4);
    int* entry = (int*)((char*)desc + idx * 4 + 0x94);
    int result = *entry;
    if (result == 0) {
        static int s_init = 0;
        if (!(s_init & 1)) {
            s_init |= 1;
            *(float*)0x8c5eb4 = *(float*)0x7b54f0;
            *(int*)0x8c5eb0 = 0;
            *(float*)0x8c5eb8 = *(float*)0x797e9c;
        }
        result = *(int*)0x8c5eb0;
    }
    return result;
}

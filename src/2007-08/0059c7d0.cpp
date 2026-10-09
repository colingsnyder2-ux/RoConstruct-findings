// from DeepSeek/server: 100% by colin
// roc 2007-08 0059c7d0  unit: RBX::UserInputBase  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059c7d0
//
// 0059c7d0  d9ee                 fldz 
// 0059c7d2  8b442404             mov eax, dword ptr [esp + 4]
// 0059c7d6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059c7da  d910                 fst dword ptr [eax]
// 0059c7dc  83ea02               sub edx, 2
// 0059c7df  d95804               fstp dword ptr [eax + 4]
// 0059c7e2  56                   push esi
// 0059c7e3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059c7e7  740c                 je 0x59c7f5
// 0059c7e9  83ea01               sub edx, 1
// 0059c7ec  750d                 jne 0x59c7fb
// 0059c7ee  d94108               fld dword ptr [ecx + 8]
// 0059c7f1  d826                 fsub dword ptr [esi]
// 0059c7f3  eb04                 jmp 0x59c7f9
// 0059c7f5  d906                 fld dword ptr [esi]
// 0059c7f7  d801                 fadd dword ptr [ecx]
// 0059c7f9  d918                 fstp dword ptr [eax]
// 0059c7fb  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059c7ff  83ea00               sub edx, 0
// 0059c802  7412                 je 0x59c816
// 0059c804  83ea01               sub edx, 1
// 0059c807  7516                 jne 0x59c81f
// 0059c809  d9410c               fld dword ptr [ecx + 0xc]
// 0059c80c  d86604               fsub dword ptr [esi + 4]
// 0059c80f  5e                   pop esi
// 0059c810  d95804               fstp dword ptr [eax + 4]
// 0059c813  c21000               ret 0x10
// 0059c816  d94604               fld dword ptr [esi + 4]
// 0059c819  d84104               fadd dword ptr [ecx + 4]
// 0059c81c  d95804               fstp dword ptr [eax + 4]
// 0059c81f  5e                   pop esi
// 0059c820  c21000               ret 0x10

struct UserInputBase {
    float unk0;
    float unk4;
    float unk8;
    float unkC;
    void getSteerThrottle(float* out, const float* in, int steerMode, int throttleMode);
};

void UserInputBase::getSteerThrottle(float* out, const float* in, int steerMode, int throttleMode)
{
    out[0] = 0.0f;
    out[1] = 0.0f;

    switch (steerMode) {
    case 2:
        out[0] = in[0] + this->unk0;
        break;
    case 3:
        out[0] = this->unk8 - in[0];
        break;
    }

    switch (throttleMode) {
    case 0:
        out[1] = in[1] + this->unk4;
        break;
    case 1:
        out[1] = this->unkC - in[1];
        break;
    }
}

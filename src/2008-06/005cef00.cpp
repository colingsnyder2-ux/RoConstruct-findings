// from server: 100% by tester
// roc 2008-06 005cef00  unit: DxUserInput  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cef00
//
// 005cef00  d9ee                 fldz 
// 005cef02  8b442404             mov eax, dword ptr [esp + 4]
// 005cef06  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005cef0a  d910                 fst dword ptr [eax]
// 005cef0c  83ea02               sub edx, 2
// 005cef0f  d95804               fstp dword ptr [eax + 4]
// 005cef12  56                   push esi
// 005cef13  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005cef17  740c                 je 0x5cef25
// 005cef19  83ea01               sub edx, 1
// 005cef1c  750d                 jne 0x5cef2b
// 005cef1e  d94108               fld dword ptr [ecx + 8]
// 005cef21  d826                 fsub dword ptr [esi]
// 005cef23  eb04                 jmp 0x5cef29
// 005cef25  d906                 fld dword ptr [esi]
// 005cef27  d801                 fadd dword ptr [ecx]
// 005cef29  d918                 fstp dword ptr [eax]
// 005cef2b  8b542414             mov edx, dword ptr [esp + 0x14]
// 005cef2f  83ea00               sub edx, 0
// 005cef32  7412                 je 0x5cef46
// 005cef34  83ea01               sub edx, 1
// 005cef37  7516                 jne 0x5cef4f
// 005cef39  d9410c               fld dword ptr [ecx + 0xc]
// 005cef3c  d86604               fsub dword ptr [esi + 4]
// 005cef3f  5e                   pop esi
// 005cef40  d95804               fstp dword ptr [eax + 4]
// 005cef43  c21000               ret 0x10
// 005cef46  d94604               fld dword ptr [esi + 4]
// 005cef49  d84104               fadd dword ptr [ecx + 4]
// 005cef4c  d95804               fstp dword ptr [eax + 4]
// 005cef4f  5e                   pop esi
// 005cef50  c21000               ret 0x10

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

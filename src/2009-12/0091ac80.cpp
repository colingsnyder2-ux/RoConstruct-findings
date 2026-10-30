// roc 2009-12 0091ac80  unit: RBX::AggregatingSceneManager  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0091ac80
//
// 0091ac80  55                   push ebp
// 0091ac81  8bec                 mov ebp, esp
// 0091ac83  51                   push ecx
// 0091ac84  8b4508               mov eax, dword ptr [ebp + 8]
// 0091ac87  83c024               add eax, 0x24
// 0091ac8a  50                   push eax
// 0091ac8b  e8b0000000           call 0x91ad40
// 0091ac90  83c404               add esp, 4
// 0091ac93  0fb6c8               movzx ecx, al
// 0091ac96  85c9                 test ecx, ecx
// 0091ac98  741c                 je 0x91acb6
// 0091ac9a  8b5508               mov edx, dword ptr [ebp + 8]
// 0091ac9d  52                   push edx
// 0091ac9e  e82d000000           call 0x91acd0
// 0091aca3  83c404               add esp, 4
// 0091aca6  0fb6c0               movzx eax, al
// 0091aca9  85c0                 test eax, eax
// 0091acab  7409                 je 0x91acb6
// 0091acad  c745fc01000000       mov dword ptr [ebp - 4], 1
// 0091acb4  eb07                 jmp 0x91acbd
// 0091acb6  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0091acbd  8a45fc               mov al, byte ptr [ebp - 4]
// 0091acc0  8be5                 mov esp, ebp
// 0091acc2  5d                   pop ebp
// 0091acc3  c3                   ret 
// copied from an identical function in another client (function ?checkFrame@@YA_NABUFrame@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#pragma optimize("", off)

struct Matrix3 {
    float values[9];
};

struct Vector3 {
    float values[3];
};

struct Frame {
    Matrix3 rotation;
    Vector3 translation;
};

extern bool __cdecl checkMatrix(const Matrix3&);
extern bool __cdecl checkVector(const Vector3&);

bool __cdecl checkFrame(const Frame& value)
{
    return checkVector(value.translation) && checkMatrix(value.rotation);
}
// roc 2009-06 005be860  unit: RBX::AggregatingSceneManager  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005be860
//
// 005be860  55                   push ebp
// 005be861  8bec                 mov ebp, esp
// 005be863  51                   push ecx
// 005be864  8b4508               mov eax, dword ptr [ebp + 8]
// 005be867  83c024               add eax, 0x24
// 005be86a  50                   push eax
// 005be86b  e8b0000000           call 0x5be920
// 005be870  83c404               add esp, 4
// 005be873  0fb6c8               movzx ecx, al
// 005be876  85c9                 test ecx, ecx
// 005be878  741c                 je 0x5be896
// 005be87a  8b5508               mov edx, dword ptr [ebp + 8]
// 005be87d  52                   push edx
// 005be87e  e82d000000           call 0x5be8b0
// 005be883  83c404               add esp, 4
// 005be886  0fb6c0               movzx eax, al
// 005be889  85c0                 test eax, eax
// 005be88b  7409                 je 0x5be896
// 005be88d  c745fc01000000       mov dword ptr [ebp - 4], 1
// 005be894  eb07                 jmp 0x5be89d
// 005be896  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005be89d  8a45fc               mov al, byte ptr [ebp - 4]
// 005be8a0  8be5                 mov esp, ebp
// 005be8a2  5d                   pop ebp
// 005be8a3  c3                   ret 
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
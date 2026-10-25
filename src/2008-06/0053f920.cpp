// from server: 100% by king_originala
// roc 2008-06 0053f920  unit: RBX::RenderBase::AggregatingSceneManager  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053f920
//
// 0053f920  55                   push ebp
// 0053f921  8bec                 mov ebp, esp
// 0053f923  51                   push ecx
// 0053f924  8b4508               mov eax, dword ptr [ebp + 8]
// 0053f927  83c024               add eax, 0x24
// 0053f92a  50                   push eax
// 0053f92b  e8b0000000           call 0x53f9e0
// 0053f930  83c404               add esp, 4
// 0053f933  0fb6c8               movzx ecx, al
// 0053f936  85c9                 test ecx, ecx
// 0053f938  741c                 je 0x53f956
// 0053f93a  8b5508               mov edx, dword ptr [ebp + 8]
// 0053f93d  52                   push edx
// 0053f93e  e82d000000           call 0x53f970
// 0053f943  83c404               add esp, 4
// 0053f946  0fb6c0               movzx eax, al
// 0053f949  85c0                 test eax, eax
// 0053f94b  7409                 je 0x53f956
// 0053f94d  c745fc01000000       mov dword ptr [ebp - 4], 1
// 0053f954  eb07                 jmp 0x53f95d
// 0053f956  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0053f95d  8a45fc               mov al, byte ptr [ebp - 4]
// 0053f960  8be5                 mov esp, ebp
// 0053f962  5d                   pop ebp
// 0053f963  c3                   ret 

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

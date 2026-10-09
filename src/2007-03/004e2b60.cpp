// roc 2007-03 004e2b60  unit: seg_004e0000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e2b60
//
// 004e2b60  55                   push ebp
// 004e2b61  8bec                 mov ebp, esp
// 004e2b63  83e4c0               and esp, 0xffffffc0
// 004e2b66  83ec34               sub esp, 0x34
// 004e2b69  53                   push ebx
// 004e2b6a  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004e2b6d  56                   push esi
// 004e2b6e  57                   push edi
// 004e2b6f  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 004e2b77  33f6                 xor esi, esi
// 004e2b79  8bfb                 mov edi, ebx
// 004e2b7b  eb03                 jmp 0x4e2b80
// 004e2b7d  8d4900               lea ecx, [ecx]
// 004e2b80  d907                 fld dword ptr [edi]
// 004e2b82  83ec08               sub esp, 8
// 004e2b85  dd1c24               fstp qword ptr [esp]
// 004e2b88  e86355fbff           call 0x4980f0
// 004e2b8d  83c408               add esp, 8
// 004e2b90  84c0                 test al, al
// 004e2b92  7427                 je 0x4e2bbb
// 004e2b94  83c601               add esi, 1
// 004e2b97  83c704               add edi, 4
// 004e2b9a  83fe03               cmp esi, 3
// 004e2b9d  7ce1                 jl 0x4e2b80
// 004e2b9f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 004e2ba3  83c001               add eax, 1
// 004e2ba6  83c30c               add ebx, 0xc
// 004e2ba9  83f803               cmp eax, 3
// 004e2bac  8944243c             mov dword ptr [esp + 0x3c], eax
// 004e2bb0  7cc5                 jl 0x4e2b77
// 004e2bb2  b001                 mov al, 1
// 004e2bb4  5f                   pop edi
// 004e2bb5  5e                   pop esi
// 004e2bb6  5b                   pop ebx
// 004e2bb7  8be5                 mov esp, ebp
// 004e2bb9  5d                   pop ebp
// 004e2bba  c3                   ret 
// 004e2bbb  5f                   pop edi
// 004e2bbc  5e                   pop esi
// 004e2bbd  32c0                 xor al, al
// 004e2bbf  5b                   pop ebx
// 004e2bc0  8be5                 mov esp, ebp
// 004e2bc2  5d                   pop ebp
// 004e2bc3  c3                   ret 
// copied from an identical function in another client (function ?method@ns_ROCX000000@@YA_NPAY02M@Z)

namespace ns_ROCX000000 {
extern "C" bool __cdecl sub_4a00e0(double);

struct RBX_Render_SceneManager {
};

bool __cdecl method(float (*matrix)[3]) {
    int row = 0;
    while (row < 3) {
        int col = 0;
        while (col < 3) {
            if (!sub_4a00e0((double)matrix[row][col])) {
                return false;
            }
            col++;
        }
        row++;
    }
    return true;
}
}

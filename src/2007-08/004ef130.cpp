// from server: 95% by colin
// roc 2007-08 004ef130  unit: RBX::Render::SceneManager  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ef130
//
// 004ef130  55                   push ebp
// 004ef131  8bec                 mov ebp, esp
// 004ef133  83e4c0               and esp, 0xffffffc0
// 004ef136  83ec34               sub esp, 0x34
// 004ef139  53                   push ebx
// 004ef13a  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004ef13d  56                   push esi
// 004ef13e  57                   push edi
// 004ef13f  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 004ef147  33f6                 xor esi, esi
// 004ef149  8bfb                 mov edi, ebx
// 004ef14b  eb03                 jmp 0x4ef150
// 004ef14d  8d4900               lea ecx, [ecx]
// 004ef150  d907                 fld dword ptr [edi]
// 004ef152  83ec08               sub esp, 8
// 004ef155  dd1c24               fstp qword ptr [esp]
// 004ef158  e8830ffbff           call 0x4a00e0
// 004ef15d  83c408               add esp, 8
// 004ef160  84c0                 test al, al
// 004ef162  7427                 je 0x4ef18b
// 004ef164  83c601               add esi, 1
// 004ef167  83c704               add edi, 4
// 004ef16a  83fe03               cmp esi, 3
// 004ef16d  7ce1                 jl 0x4ef150
// 004ef16f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 004ef173  83c001               add eax, 1
// 004ef176  83c30c               add ebx, 0xc
// 004ef179  83f803               cmp eax, 3
// 004ef17c  8944243c             mov dword ptr [esp + 0x3c], eax
// 004ef180  7cc5                 jl 0x4ef147
// 004ef182  b001                 mov al, 1
// 004ef184  5f                   pop edi
// 004ef185  5e                   pop esi
// 004ef186  5b                   pop ebx
// 004ef187  8be5                 mov esp, ebp
// 004ef189  5d                   pop ebp
// 004ef18a  c3                   ret 
// 004ef18b  5f                   pop edi
// 004ef18c  5e                   pop esi
// 004ef18d  32c0                 xor al, al
// 004ef18f  5b                   pop ebx
// 004ef190  8be5                 mov esp, ebp
// 004ef192  5d                   pop ebp
// 004ef193  c3                   ret 

extern "C" bool __cdecl sub_4a00e0(double);

struct RBX_Render_SceneManager {
    bool method(float (*matrix)[3]);
};

bool RBX_Render_SceneManager::method(float (*matrix)[3]) {
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

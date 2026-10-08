// roc 2007-08 005a70d0  unit: RBX::Humanoid  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a70d0
//
// 005a70d0  6aff                 push -1
// 005a70d2  68d3597500           push 0x7559d3
// 005a70d7  64a100000000         mov eax, dword ptr fs:[0]
// 005a70dd  50                   push eax
// 005a70de  64892500000000       mov dword ptr fs:[0], esp
// 005a70e5  51                   push ecx
// 005a70e6  56                   push esi
// 005a70e7  8bf1                 mov esi, ecx
// 005a70e9  89742404             mov dword ptr [esp + 4], esi
// 005a70ed  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005a70f0  85c9                 test ecx, ecx
// 005a70f2  c744241001000000     mov dword ptr [esp + 0x10], 1
// 005a70fa  7408                 je 0x5a7104
// 005a70fc  8b01                 mov eax, dword ptr [ecx]
// 005a70fe  8b10                 mov edx, dword ptr [eax]
// 005a7100  6a01                 push 1
// 005a7102  ffd2                 call edx
// 005a7104  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 005a7107  85c9                 test ecx, ecx
// 005a7109  c644241000           mov byte ptr [esp + 0x10], 0
// 005a710e  7408                 je 0x5a7118
// 005a7110  8b01                 mov eax, dword ptr [ecx]
// 005a7112  8b10                 mov edx, dword ptr [eax]
// 005a7114  6a01                 push 1
// 005a7116  ffd2                 call edx
// 005a7118  8bce                 mov ecx, esi
// 005a711a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005a7122  e8e904e7ff           call 0x417610
// 005a7127  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a712b  5e                   pop esi
// 005a712c  64890d00000000       mov dword ptr fs:[0], ecx
// 005a7133  83c410               add esp, 0x10
// 005a7136  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$BoundFuncDesc@VHumanoid@RBX@@$$A6AXVVector3@G3D@@V?$shared_ptr@VInstance@RBX@@@boost@@@Z$01@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp

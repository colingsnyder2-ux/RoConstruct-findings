// roc 2007-03 0047ba70  unit: seg_00470000  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047ba70
//
// 0047ba70  6aff                 push -1
// 0047ba72  68dc797400           push 0x7479dc
// 0047ba77  64a100000000         mov eax, dword ptr fs:[0]
// 0047ba7d  50                   push eax
// 0047ba7e  51                   push ecx
// 0047ba7f  53                   push ebx
// 0047ba80  55                   push ebp
// 0047ba81  56                   push esi
// 0047ba82  57                   push edi
// 0047ba83  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0047ba88  33c4                 xor eax, esp
// 0047ba8a  50                   push eax
// 0047ba8b  8d442418             lea eax, [esp + 0x18]
// 0047ba8f  64a300000000         mov dword ptr fs:[0], eax
// 0047ba95  8bf9                 mov edi, ecx
// 0047ba97  33db                 xor ebx, ebx
// 0047ba99  395f04               cmp dword ptr [edi + 4], ebx
// 0047ba9c  7e45                 jle 0x47bae3
// 0047ba9e  33ed                 xor ebp, ebp
// 0047baa0  8b37                 mov esi, dword ptr [edi]
// 0047baa2  03f5                 add esi, ebp
// 0047baa4  89742414             mov dword ptr [esp + 0x14], esi
// 0047baa8  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0047baab  50                   push eax
// 0047baac  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0047bab4  e8c7780700           call 0x4f3380
// 0047bab9  33c0                 xor eax, eax
// 0047babb  83c404               add esp, 4
// 0047babe  8d4e04               lea ecx, [esi + 4]
// 0047bac1  89462c               mov dword ptr [esi + 0x2c], eax
// 0047bac4  894630               mov dword ptr [esi + 0x30], eax
// 0047bac7  894634               mov dword ptr [esi + 0x34], eax
// 0047baca  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0047bad2  ff158ce77700         call dword ptr [0x77e78c]
// 0047bad8  83c301               add ebx, 1
// 0047badb  83c538               add ebp, 0x38
// 0047bade  3b5f04               cmp ebx, dword ptr [edi + 4]
// 0047bae1  7cbd                 jl 0x47baa0
// 0047bae3  8b0f                 mov ecx, dword ptr [edi]
// 0047bae5  51                   push ecx
// 0047bae6  e895780700           call 0x4f3380
// 0047baeb  83c404               add esp, 4
// 0047baee  33c0                 xor eax, eax
// 0047baf0  8907                 mov dword ptr [edi], eax
// 0047baf2  894704               mov dword ptr [edi + 4], eax
// 0047baf5  894708               mov dword ptr [edi + 8], eax
// 0047baf8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0047bafc  64890d00000000       mov dword ptr fs:[0], ecx
// 0047bb03  59                   pop ecx
// 0047bb04  5f                   pop edi
// 0047bb05  5e                   pop esi
// 0047bb06  5d                   pop ebp
// 0047bb07  5b                   pop ebx
// 0047bb08  83c410               add esp, 0x10
// 0047bb0b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??1?$Array@UJoystickInfo@_DirectInput@_internal@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

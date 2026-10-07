// roc 2008-06 00482b30  unit: G3D::Win32Window  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00482b30
//
// 00482b30  6aff                 push -1
// 00482b32  683bf47b00           push 0x7bf43b
// 00482b37  64a100000000         mov eax, dword ptr fs:[0]
// 00482b3d  50                   push eax
// 00482b3e  64892500000000       mov dword ptr fs:[0], esp
// 00482b45  51                   push ecx
// 00482b46  68f0010000           push 0x1f0
// 00482b4b  e8d0dd2100           call 0x6a0920
// 00482b50  83c404               add esp, 4
// 00482b53  890424               mov dword ptr [esp], eax
// 00482b56  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00482b5e  85c0                 test eax, eax
// 00482b60  7420                 je 0x482b82
// 00482b62  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00482b66  8b542414             mov edx, dword ptr [esp + 0x14]
// 00482b6a  51                   push ecx
// 00482b6b  52                   push edx
// 00482b6c  8bc8                 mov ecx, eax
// 00482b6e  e86dfeffff           call 0x4829e0
// 00482b73  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00482b77  64890d00000000       mov dword ptr fs:[0], ecx
// 00482b7e  83c410               add esp, 0x10
// 00482b81  c3                   ret 
// 00482b82  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00482b86  33c0                 xor eax, eax
// 00482b88  64890d00000000       mov dword ptr fs:[0], ecx
// 00482b8f  83c410               add esp, 0x10
// 00482b92  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?create@Win32Window@G3D@@SAPAV12@ABVSettings@GWindow@2@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

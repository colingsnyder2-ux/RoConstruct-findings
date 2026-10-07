// roc 2009-06 004aca40  unit: G3D::Win32Window  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004aca40
//
// 004aca40  6aff                 push -1
// 004aca42  687b9c8600           push 0x869c7b
// 004aca47  64a100000000         mov eax, dword ptr fs:[0]
// 004aca4d  50                   push eax
// 004aca4e  64892500000000       mov dword ptr fs:[0], esp
// 004aca55  51                   push ecx
// 004aca56  68f0010000           push 0x1f0
// 004aca5b  e8d8bf2600           call 0x718a38
// 004aca60  83c404               add esp, 4
// 004aca63  890424               mov dword ptr [esp], eax
// 004aca66  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004aca6e  85c0                 test eax, eax
// 004aca70  7420                 je 0x4aca92
// 004aca72  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004aca76  8b542414             mov edx, dword ptr [esp + 0x14]
// 004aca7a  51                   push ecx
// 004aca7b  52                   push edx
// 004aca7c  8bc8                 mov ecx, eax
// 004aca7e  e86dfeffff           call 0x4ac8f0
// 004aca83  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004aca87  64890d00000000       mov dword ptr fs:[0], ecx
// 004aca8e  83c410               add esp, 0x10
// 004aca91  c3                   ret 
// 004aca92  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004aca96  33c0                 xor eax, eax
// 004aca98  64890d00000000       mov dword ptr fs:[0], ecx
// 004aca9f  83c410               add esp, 0x10
// 004acaa2  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?create@Win32Window@G3D@@SAPAV12@ABVSettings@GWindow@2@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

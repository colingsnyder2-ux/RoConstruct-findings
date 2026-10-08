// from server: 100% by auto
// roc 2010-06 0048b6d0  unit: G3D::Win32Window  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048b6d0
//
// 0048b6d0  6aff                 push -1
// 0048b6d2  684b1d9a00           push 0x9a1d4b
// 0048b6d7  64a100000000         mov eax, dword ptr fs:[0]
// 0048b6dd  50                   push eax
// 0048b6de  64892500000000       mov dword ptr fs:[0], esp
// 0048b6e5  51                   push ecx
// 0048b6e6  68f0010000           push 0x1f0
// 0048b6eb  e8b0c23100           call 0x7a79a0
// 0048b6f0  83c404               add esp, 4
// 0048b6f3  890424               mov dword ptr [esp], eax
// 0048b6f6  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0048b6fe  85c0                 test eax, eax
// 0048b700  7420                 je 0x48b722
// 0048b702  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0048b706  8b542414             mov edx, dword ptr [esp + 0x14]
// 0048b70a  51                   push ecx
// 0048b70b  52                   push edx
// 0048b70c  8bc8                 mov ecx, eax
// 0048b70e  e86dfeffff           call 0x48b580
// 0048b713  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048b717  64890d00000000       mov dword ptr fs:[0], ecx
// 0048b71e  83c410               add esp, 0x10
// 0048b721  c3                   ret 
// 0048b722  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048b726  33c0                 xor eax, eax
// 0048b728  64890d00000000       mov dword ptr fs:[0], ecx
// 0048b72f  83c410               add esp, 0x10
// 0048b732  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?create@Win32Window@G3D@@SAPAV12@ABVSettings@GWindow@2@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

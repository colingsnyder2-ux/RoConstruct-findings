// roc 2009-12 004d9540  unit: G3D::Win32Window  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d9540
//
// 004d9540  6aff                 push -1
// 004d9542  68eba59400           push 0x94a5eb
// 004d9547  64a100000000         mov eax, dword ptr fs:[0]
// 004d954d  50                   push eax
// 004d954e  64892500000000       mov dword ptr fs:[0], esp
// 004d9555  51                   push ecx
// 004d9556  68f0010000           push 0x1f0
// 004d955b  e800a33100           call 0x7f3860
// 004d9560  83c404               add esp, 4
// 004d9563  890424               mov dword ptr [esp], eax
// 004d9566  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004d956e  85c0                 test eax, eax
// 004d9570  7420                 je 0x4d9592
// 004d9572  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d9576  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d957a  51                   push ecx
// 004d957b  52                   push edx
// 004d957c  8bc8                 mov ecx, eax
// 004d957e  e86dfeffff           call 0x4d93f0
// 004d9583  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d9587  64890d00000000       mov dword ptr fs:[0], ecx
// 004d958e  83c410               add esp, 0x10
// 004d9591  c3                   ret 
// 004d9592  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d9596  33c0                 xor eax, eax
// 004d9598  64890d00000000       mov dword ptr fs:[0], ecx
// 004d959f  83c410               add esp, 0x10
// 004d95a2  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?create@Win32Window@G3D@@SAPAV12@ABVSettings@GWindow@2@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

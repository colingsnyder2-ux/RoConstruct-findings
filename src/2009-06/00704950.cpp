// roc 2009-06 00704950  unit: RBX::AdornG3D  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00704950
//
// 00704950  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00704954  8b01                 mov eax, dword ptr [ecx]
// 00704956  83e800               sub eax, 0
// 00704959  7445                 je 0x7049a0
// 0070495b  83e801               sub eax, 1
// 0070495e  7424                 je 0x704984
// 00704960  83e801               sub eax, 1
// 00704963  7403                 je 0x704968
// 00704965  32c0                 xor al, al
// 00704967  c3                   ret 
// 00704968  d9442410             fld dword ptr [esp + 0x10]
// 0070496c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00704970  8b542408             mov edx, dword ptr [esp + 8]
// 00704974  51                   push ecx
// 00704975  d91c24               fstp dword ptr [esp]
// 00704978  50                   push eax
// 00704979  52                   push edx
// 0070497a  51                   push ecx
// 0070497b  e8b0feffff           call 0x704830
// 00704980  83c410               add esp, 0x10
// 00704983  c3                   ret 
// 00704984  d9442410             fld dword ptr [esp + 0x10]
// 00704988  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0070498c  8b542408             mov edx, dword ptr [esp + 8]
// 00704990  51                   push ecx
// 00704991  d91c24               fstp dword ptr [esp]
// 00704994  50                   push eax
// 00704995  52                   push edx
// 00704996  51                   push ecx
// 00704997  e834ffffff           call 0x7048d0
// 0070499c  83c410               add esp, 0x10
// 0070499f  c3                   ret 
// 007049a0  d9442410             fld dword ptr [esp + 0x10]
// 007049a4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007049a8  8b542408             mov edx, dword ptr [esp + 8]
// 007049ac  51                   push ecx
// 007049ad  d91c24               fstp dword ptr [esp]
// 007049b0  50                   push eax
// 007049b1  52                   push edx
// 007049b2  51                   push ecx
// 007049b3  e8a8fdffff           call 0x704760
// 007049b8  83c410               add esp, 0x10
// 007049bb  c3                   ret 
// library rbxgs-appdraw/HitTest.cpp (function ?hitTest@HitTest@RBX@@SA_NABVPart@2@AAVRay@G3D@@AAVVector3@5@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw HitTest.cpp

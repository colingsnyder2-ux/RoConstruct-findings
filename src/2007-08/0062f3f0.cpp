// roc 2007-08 0062f3f0  unit: RBX::AdornG3D  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062f3f0
//
// 0062f3f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062f3f4  8b01                 mov eax, dword ptr [ecx]
// 0062f3f6  83e800               sub eax, 0
// 0062f3f9  7445                 je 0x62f440
// 0062f3fb  83e801               sub eax, 1
// 0062f3fe  7424                 je 0x62f424
// 0062f400  83e801               sub eax, 1
// 0062f403  7403                 je 0x62f408
// 0062f405  32c0                 xor al, al
// 0062f407  c3                   ret 
// 0062f408  d9442410             fld dword ptr [esp + 0x10]
// 0062f40c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062f410  8b542408             mov edx, dword ptr [esp + 8]
// 0062f414  51                   push ecx
// 0062f415  d91c24               fstp dword ptr [esp]
// 0062f418  50                   push eax
// 0062f419  52                   push edx
// 0062f41a  51                   push ecx
// 0062f41b  e860feffff           call 0x62f280
// 0062f420  83c410               add esp, 0x10
// 0062f423  c3                   ret 
// 0062f424  d9442410             fld dword ptr [esp + 0x10]
// 0062f428  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062f42c  8b542408             mov edx, dword ptr [esp + 8]
// 0062f430  51                   push ecx
// 0062f431  d91c24               fstp dword ptr [esp]
// 0062f434  50                   push eax
// 0062f435  52                   push edx
// 0062f436  51                   push ecx
// 0062f437  e8f4feffff           call 0x62f330
// 0062f43c  83c410               add esp, 0x10
// 0062f43f  c3                   ret 
// 0062f440  d9442410             fld dword ptr [esp + 0x10]
// 0062f444  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062f448  8b542408             mov edx, dword ptr [esp + 8]
// 0062f44c  51                   push ecx
// 0062f44d  d91c24               fstp dword ptr [esp]
// 0062f450  50                   push eax
// 0062f451  52                   push edx
// 0062f452  51                   push ecx
// 0062f453  e848fdffff           call 0x62f1a0
// 0062f458  83c410               add esp, 0x10
// 0062f45b  c3                   ret 
// library rbxgs-appdraw/HitTest.cpp (function ?hitTest@HitTest@RBX@@SA_NABVPart@2@AAVRay@G3D@@AAVVector3@5@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw HitTest.cpp

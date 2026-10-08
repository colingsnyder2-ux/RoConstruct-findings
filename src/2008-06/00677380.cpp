// roc 2008-06 00677380  unit: RBX::AdornG3D  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00677380
//
// 00677380  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00677384  8b01                 mov eax, dword ptr [ecx]
// 00677386  83e800               sub eax, 0
// 00677389  7445                 je 0x6773d0
// 0067738b  83e801               sub eax, 1
// 0067738e  7424                 je 0x6773b4
// 00677390  83e801               sub eax, 1
// 00677393  7403                 je 0x677398
// 00677395  32c0                 xor al, al
// 00677397  c3                   ret 
// 00677398  d9442410             fld dword ptr [esp + 0x10]
// 0067739c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006773a0  8b542408             mov edx, dword ptr [esp + 8]
// 006773a4  51                   push ecx
// 006773a5  d91c24               fstp dword ptr [esp]
// 006773a8  50                   push eax
// 006773a9  52                   push edx
// 006773aa  51                   push ecx
// 006773ab  e8b0feffff           call 0x677260
// 006773b0  83c410               add esp, 0x10
// 006773b3  c3                   ret 
// 006773b4  d9442410             fld dword ptr [esp + 0x10]
// 006773b8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006773bc  8b542408             mov edx, dword ptr [esp + 8]
// 006773c0  51                   push ecx
// 006773c1  d91c24               fstp dword ptr [esp]
// 006773c4  50                   push eax
// 006773c5  52                   push edx
// 006773c6  51                   push ecx
// 006773c7  e834ffffff           call 0x677300
// 006773cc  83c410               add esp, 0x10
// 006773cf  c3                   ret 
// 006773d0  d9442410             fld dword ptr [esp + 0x10]
// 006773d4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006773d8  8b542408             mov edx, dword ptr [esp + 8]
// 006773dc  51                   push ecx
// 006773dd  d91c24               fstp dword ptr [esp]
// 006773e0  50                   push eax
// 006773e1  52                   push edx
// 006773e2  51                   push ecx
// 006773e3  e8a8fdffff           call 0x677190
// 006773e8  83c410               add esp, 0x10
// 006773eb  c3                   ret 
// library rbxgs-appdraw/HitTest.cpp (function ?hitTest@HitTest@RBX@@SA_NABVPart@2@AAVRay@G3D@@AAVVector3@5@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw HitTest.cpp

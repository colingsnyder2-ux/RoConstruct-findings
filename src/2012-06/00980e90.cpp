// roc 2012-06 00980e90  unit: RBX::CircleRadialNormal  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00980e90
//
// 00980e90  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00980e94  8b01                 mov eax, dword ptr [ecx]
// 00980e96  83e800               sub eax, 0
// 00980e99  7445                 je 0x980ee0
// 00980e9b  83e801               sub eax, 1
// 00980e9e  7424                 je 0x980ec4
// 00980ea0  83e801               sub eax, 1
// 00980ea3  7403                 je 0x980ea8
// 00980ea5  32c0                 xor al, al
// 00980ea7  c3                   ret 
// 00980ea8  d9442410             fld dword ptr [esp + 0x10]
// 00980eac  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00980eb0  8b542408             mov edx, dword ptr [esp + 8]
// 00980eb4  51                   push ecx
// 00980eb5  d91c24               fstp dword ptr [esp]
// 00980eb8  50                   push eax
// 00980eb9  52                   push edx
// 00980eba  51                   push ecx
// 00980ebb  e880feffff           call 0x980d40
// 00980ec0  83c410               add esp, 0x10
// 00980ec3  c3                   ret 
// 00980ec4  d9442410             fld dword ptr [esp + 0x10]
// 00980ec8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00980ecc  8b542408             mov edx, dword ptr [esp + 8]
// 00980ed0  51                   push ecx
// 00980ed1  d91c24               fstp dword ptr [esp]
// 00980ed4  50                   push eax
// 00980ed5  52                   push edx
// 00980ed6  51                   push ecx
// 00980ed7  e804ffffff           call 0x980de0
// 00980edc  83c410               add esp, 0x10
// 00980edf  c3                   ret 
// 00980ee0  d9442410             fld dword ptr [esp + 0x10]
// 00980ee4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00980ee8  8b542408             mov edx, dword ptr [esp + 8]
// 00980eec  51                   push ecx
// 00980eed  d91c24               fstp dword ptr [esp]
// 00980ef0  50                   push eax
// 00980ef1  52                   push edx
// 00980ef2  51                   push ecx
// 00980ef3  e858fdffff           call 0x980c50
// 00980ef8  83c410               add esp, 0x10
// 00980efb  c3                   ret 
// library rbxgs-appdraw/HitTest.cpp (function ?hitTest@HitTest@RBX@@SA_NABVPart@2@AAVRay@G3D@@AAVVector3@5@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw HitTest.cpp

// roc 2007-03 0061dc70  unit: seg_00610000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061dc70
//
// 0061dc70  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0061dc74  8b01                 mov eax, dword ptr [ecx]
// 0061dc76  83e800               sub eax, 0
// 0061dc79  7445                 je 0x61dcc0
// 0061dc7b  83e801               sub eax, 1
// 0061dc7e  7424                 je 0x61dca4
// 0061dc80  83e801               sub eax, 1
// 0061dc83  7403                 je 0x61dc88
// 0061dc85  32c0                 xor al, al
// 0061dc87  c3                   ret 
// 0061dc88  d9442410             fld dword ptr [esp + 0x10]
// 0061dc8c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0061dc90  8b542408             mov edx, dword ptr [esp + 8]
// 0061dc94  51                   push ecx
// 0061dc95  d91c24               fstp dword ptr [esp]
// 0061dc98  50                   push eax
// 0061dc99  52                   push edx
// 0061dc9a  51                   push ecx
// 0061dc9b  e860feffff           call 0x61db00
// 0061dca0  83c410               add esp, 0x10
// 0061dca3  c3                   ret 
// 0061dca4  d9442410             fld dword ptr [esp + 0x10]
// 0061dca8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0061dcac  8b542408             mov edx, dword ptr [esp + 8]
// 0061dcb0  51                   push ecx
// 0061dcb1  d91c24               fstp dword ptr [esp]
// 0061dcb4  50                   push eax
// 0061dcb5  52                   push edx
// 0061dcb6  51                   push ecx
// 0061dcb7  e8f4feffff           call 0x61dbb0
// 0061dcbc  83c410               add esp, 0x10
// 0061dcbf  c3                   ret 
// 0061dcc0  d9442410             fld dword ptr [esp + 0x10]
// 0061dcc4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0061dcc8  8b542408             mov edx, dword ptr [esp + 8]
// 0061dccc  51                   push ecx
// 0061dccd  d91c24               fstp dword ptr [esp]
// 0061dcd0  50                   push eax
// 0061dcd1  52                   push edx
// 0061dcd2  51                   push ecx
// 0061dcd3  e848fdffff           call 0x61da20
// 0061dcd8  83c410               add esp, 0x10
// 0061dcdb  c3                   ret 
// library rbxgs-appdraw/HitTest.cpp (function ?hitTest@HitTest@RBX@@SA_NABVPart@2@AAVRay@G3D@@AAVVector3@5@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw HitTest.cpp

// roc 2011-06 007f7f60  unit: RBX::CircleRadialNormal  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f7f60
//
// 007f7f60  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007f7f64  8b01                 mov eax, dword ptr [ecx]
// 007f7f66  83e800               sub eax, 0
// 007f7f69  7445                 je 0x7f7fb0
// 007f7f6b  83e801               sub eax, 1
// 007f7f6e  7424                 je 0x7f7f94
// 007f7f70  83e801               sub eax, 1
// 007f7f73  7403                 je 0x7f7f78
// 007f7f75  32c0                 xor al, al
// 007f7f77  c3                   ret 
// 007f7f78  d9442410             fld dword ptr [esp + 0x10]
// 007f7f7c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f7f80  8b542408             mov edx, dword ptr [esp + 8]
// 007f7f84  51                   push ecx
// 007f7f85  d91c24               fstp dword ptr [esp]
// 007f7f88  50                   push eax
// 007f7f89  52                   push edx
// 007f7f8a  51                   push ecx
// 007f7f8b  e880feffff           call 0x7f7e10
// 007f7f90  83c410               add esp, 0x10
// 007f7f93  c3                   ret 
// 007f7f94  d9442410             fld dword ptr [esp + 0x10]
// 007f7f98  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f7f9c  8b542408             mov edx, dword ptr [esp + 8]
// 007f7fa0  51                   push ecx
// 007f7fa1  d91c24               fstp dword ptr [esp]
// 007f7fa4  50                   push eax
// 007f7fa5  52                   push edx
// 007f7fa6  51                   push ecx
// 007f7fa7  e804ffffff           call 0x7f7eb0
// 007f7fac  83c410               add esp, 0x10
// 007f7faf  c3                   ret 
// 007f7fb0  d9442410             fld dword ptr [esp + 0x10]
// 007f7fb4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f7fb8  8b542408             mov edx, dword ptr [esp + 8]
// 007f7fbc  51                   push ecx
// 007f7fbd  d91c24               fstp dword ptr [esp]
// 007f7fc0  50                   push eax
// 007f7fc1  52                   push edx
// 007f7fc2  51                   push ecx
// 007f7fc3  e858fdffff           call 0x7f7d20
// 007f7fc8  83c410               add esp, 0x10
// 007f7fcb  c3                   ret 
// library rbxgs-appdraw/HitTest.cpp (function ?hitTest@HitTest@RBX@@SA_NABVPart@2@AAVRay@G3D@@AAVVector3@5@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw HitTest.cpp

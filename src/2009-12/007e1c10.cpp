// roc 2009-12 007e1c10  unit: RBX::CircleRadialNormal  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e1c10
//
// 007e1c10  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007e1c14  8b01                 mov eax, dword ptr [ecx]
// 007e1c16  83e800               sub eax, 0
// 007e1c19  7445                 je 0x7e1c60
// 007e1c1b  83e801               sub eax, 1
// 007e1c1e  7424                 je 0x7e1c44
// 007e1c20  83e801               sub eax, 1
// 007e1c23  7403                 je 0x7e1c28
// 007e1c25  32c0                 xor al, al
// 007e1c27  c3                   ret 
// 007e1c28  d9442410             fld dword ptr [esp + 0x10]
// 007e1c2c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007e1c30  8b542408             mov edx, dword ptr [esp + 8]
// 007e1c34  51                   push ecx
// 007e1c35  d91c24               fstp dword ptr [esp]
// 007e1c38  50                   push eax
// 007e1c39  52                   push edx
// 007e1c3a  51                   push ecx
// 007e1c3b  e850feffff           call 0x7e1a90
// 007e1c40  83c410               add esp, 0x10
// 007e1c43  c3                   ret 
// 007e1c44  d9442410             fld dword ptr [esp + 0x10]
// 007e1c48  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007e1c4c  8b542408             mov edx, dword ptr [esp + 8]
// 007e1c50  51                   push ecx
// 007e1c51  d91c24               fstp dword ptr [esp]
// 007e1c54  50                   push eax
// 007e1c55  52                   push edx
// 007e1c56  51                   push ecx
// 007e1c57  e804ffffff           call 0x7e1b60
// 007e1c5c  83c410               add esp, 0x10
// 007e1c5f  c3                   ret 
// 007e1c60  d9442410             fld dword ptr [esp + 0x10]
// 007e1c64  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007e1c68  8b542408             mov edx, dword ptr [esp + 8]
// 007e1c6c  51                   push ecx
// 007e1c6d  d91c24               fstp dword ptr [esp]
// 007e1c70  50                   push eax
// 007e1c71  52                   push edx
// 007e1c72  51                   push ecx
// 007e1c73  e828fdffff           call 0x7e19a0
// 007e1c78  83c410               add esp, 0x10
// 007e1c7b  c3                   ret 
// library rbxgs-appdraw/HitTest.cpp (function ?hitTest@HitTest@RBX@@SA_NABVPart@2@AAVRay@G3D@@AAVVector3@5@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw HitTest.cpp

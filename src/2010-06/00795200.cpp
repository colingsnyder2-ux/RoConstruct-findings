// roc 2010-06 00795200  unit: RBX::IndexBox  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00795200
//
// 00795200  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00795204  8b01                 mov eax, dword ptr [ecx]
// 00795206  83e800               sub eax, 0
// 00795209  7445                 je 0x795250
// 0079520b  83e801               sub eax, 1
// 0079520e  7424                 je 0x795234
// 00795210  83e801               sub eax, 1
// 00795213  7403                 je 0x795218
// 00795215  32c0                 xor al, al
// 00795217  c3                   ret 
// 00795218  d9442410             fld dword ptr [esp + 0x10]
// 0079521c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00795220  8b542408             mov edx, dword ptr [esp + 8]
// 00795224  51                   push ecx
// 00795225  d91c24               fstp dword ptr [esp]
// 00795228  50                   push eax
// 00795229  52                   push edx
// 0079522a  51                   push ecx
// 0079522b  e850feffff           call 0x795080
// 00795230  83c410               add esp, 0x10
// 00795233  c3                   ret 
// 00795234  d9442410             fld dword ptr [esp + 0x10]
// 00795238  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0079523c  8b542408             mov edx, dword ptr [esp + 8]
// 00795240  51                   push ecx
// 00795241  d91c24               fstp dword ptr [esp]
// 00795244  50                   push eax
// 00795245  52                   push edx
// 00795246  51                   push ecx
// 00795247  e804ffffff           call 0x795150
// 0079524c  83c410               add esp, 0x10
// 0079524f  c3                   ret 
// 00795250  d9442410             fld dword ptr [esp + 0x10]
// 00795254  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00795258  8b542408             mov edx, dword ptr [esp + 8]
// 0079525c  51                   push ecx
// 0079525d  d91c24               fstp dword ptr [esp]
// 00795260  50                   push eax
// 00795261  52                   push edx
// 00795262  51                   push ecx
// 00795263  e828fdffff           call 0x794f90
// 00795268  83c410               add esp, 0x10
// 0079526b  c3                   ret 
// library rbxgs-appdraw/HitTest.cpp (function ?hitTest@HitTest@RBX@@SA_NABVPart@2@AAVRay@G3D@@AAVVector3@5@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw HitTest.cpp

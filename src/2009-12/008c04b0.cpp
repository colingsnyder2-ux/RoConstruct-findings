// roc 2009-12 008c04b0  unit: PAVCXTPDockingPaneBase::?$CList  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c04b0
//
// 008c04b0  6aff                 push -1
// 008c04b2  68ce3d9600           push 0x963dce
// 008c04b7  64a100000000         mov eax, dword ptr fs:[0]
// 008c04bd  50                   push eax
// 008c04be  a10052b600           mov eax, dword ptr [0xb65200]
// 008c04c3  33c4                 xor eax, esp
// 008c04c5  50                   push eax
// 008c04c6  8d442404             lea eax, [esp + 4]
// 008c04ca  64a300000000         mov dword ptr fs:[0], eax
// 008c04d0  b801000000           mov eax, 1
// 008c04d5  84051cbeb900         test byte ptr [0xb9be1c], al
// 008c04db  7525                 jne 0x8c0502
// 008c04dd  09051cbeb900         or dword ptr [0xb9be1c], eax
// 008c04e3  b9f8bdb900           mov ecx, 0xb9bdf8
// 008c04e8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 008c04f0  e8dbfeffff           call 0x8c03d0
// 008c04f5  6880a79800           push 0x98a780
// 008c04fa  e82a44f3ff           call 0x7f4929
// 008c04ff  83c404               add esp, 4
// 008c0502  b8f8bdb900           mov eax, 0xb9bdf8
// 008c0507  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008c050b  64890d00000000       mov dword ptr fs:[0], ecx
// 008c0512  59                   pop ecx
// 008c0513  83c40c               add esp, 0xc
// 008c0516  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp

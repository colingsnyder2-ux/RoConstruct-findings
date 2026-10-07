// roc 2008-06 0076d2e0  unit: PAVCXTPDockingPaneBase::?$CList  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076d2e0
//
// 0076d2e0  6aff                 push -1
// 0076d2e2  689ea37e00           push 0x7ea39e
// 0076d2e7  64a100000000         mov eax, dword ptr fs:[0]
// 0076d2ed  50                   push eax
// 0076d2ee  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 0076d2f3  33c4                 xor eax, esp
// 0076d2f5  50                   push eax
// 0076d2f6  8d442404             lea eax, [esp + 4]
// 0076d2fa  64a300000000         mov dword ptr fs:[0], eax
// 0076d300  b801000000           mov eax, 1
// 0076d305  8405ccf09700         test byte ptr [0x97f0cc], al
// 0076d30b  7525                 jne 0x76d332
// 0076d30d  0905ccf09700         or dword ptr [0x97f0cc], eax
// 0076d313  b9a8f09700           mov ecx, 0x97f0a8
// 0076d318  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0076d320  e8dbfeffff           call 0x76d200
// 0076d325  6800198000           push 0x801900
// 0076d32a  e88044f3ff           call 0x6a17af
// 0076d32f  83c404               add esp, 4
// 0076d332  b8a8f09700           mov eax, 0x97f0a8
// 0076d337  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0076d33b  64890d00000000       mov dword ptr fs:[0], ecx
// 0076d342  59                   pop ecx
// 0076d343  83c40c               add esp, 0xc
// 0076d346  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp

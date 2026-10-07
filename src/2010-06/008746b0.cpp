// roc 2010-06 008746b0  unit: CXTPShadowsManager::PAVCShadowWnd::?$CList  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008746b0
//
// 008746b0  6aff                 push -1
// 008746b2  689e9d9b00           push 0x9b9d9e
// 008746b7  64a100000000         mov eax, dword ptr fs:[0]
// 008746bd  50                   push eax
// 008746be  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008746c3  33c4                 xor eax, esp
// 008746c5  50                   push eax
// 008746c6  8d442404             lea eax, [esp + 4]
// 008746ca  64a300000000         mov dword ptr fs:[0], eax
// 008746d0  b801000000           mov eax, 1
// 008746d5  84054c65c200         test byte ptr [0xc2654c], al
// 008746db  7525                 jne 0x874702
// 008746dd  09054c65c200         or dword ptr [0xc2654c], eax
// 008746e3  b92865c200           mov ecx, 0xc26528
// 008746e8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 008746f0  e8dbfeffff           call 0x8745d0
// 008746f5  6880919e00           push 0x9e9180
// 008746fa  e86443f3ff           call 0x7a8a63
// 008746ff  83c404               add esp, 4
// 00874702  b82865c200           mov eax, 0xc26528
// 00874707  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0087470b  64890d00000000       mov dword ptr fs:[0], ecx
// 00874712  59                   pop ecx
// 00874713  83c40c               add esp, 0xc
// 00874716  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp

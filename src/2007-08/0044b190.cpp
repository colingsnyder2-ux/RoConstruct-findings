// roc 2007-08 0044b190  unit: ErrorUploader::Udata::?$sp_counted_impl_p  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044b190
//
// 0044b190  6aff                 push -1
// 0044b192  68ce007400           push 0x7400ce
// 0044b197  64a100000000         mov eax, dword ptr fs:[0]
// 0044b19d  50                   push eax
// 0044b19e  a188518b00           mov eax, dword ptr [0x8b5188]
// 0044b1a3  33c4                 xor eax, esp
// 0044b1a5  50                   push eax
// 0044b1a6  8d442404             lea eax, [esp + 4]
// 0044b1aa  64a300000000         mov dword ptr fs:[0], eax
// 0044b1b0  b801000000           mov eax, 1
// 0044b1b5  8405a8be8b00         test byte ptr [0x8bbea8], al
// 0044b1bb  7525                 jne 0x44b1e2
// 0044b1bd  0905a8be8b00         or dword ptr [0x8bbea8], eax
// 0044b1c3  b9a4be8b00           mov ecx, 0x8bbea4
// 0044b1c8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0044b1d0  e83bfeffff           call 0x44b010
// 0044b1d5  68107d7700           push 0x777d10
// 0044b1da  e8445b1e00           call 0x630d23
// 0044b1df  83c404               add esp, 4
// 0044b1e2  b8a4be8b00           mov eax, 0x8bbea4
// 0044b1e7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0044b1eb  64890d00000000       mov dword ptr fs:[0], ecx
// 0044b1f2  59                   pop ecx
// 0044b1f3  83c40c               add esp, 0xc
// 0044b1f6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp

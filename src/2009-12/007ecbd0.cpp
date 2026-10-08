// roc 2009-12 007ecbd0  unit: W4_D3DFORMAT::?$EnumDesc  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ecbd0
//
// 007ecbd0  6aff                 push -1
// 007ecbd2  68be829500           push 0x9582be
// 007ecbd7  64a100000000         mov eax, dword ptr fs:[0]
// 007ecbdd  50                   push eax
// 007ecbde  a10052b600           mov eax, dword ptr [0xb65200]
// 007ecbe3  33c4                 xor eax, esp
// 007ecbe5  50                   push eax
// 007ecbe6  8d442404             lea eax, [esp + 4]
// 007ecbea  64a300000000         mov dword ptr fs:[0], eax
// 007ecbf0  b801000000           mov eax, 1
// 007ecbf5  84059c9cb900         test byte ptr [0xb99c9c], al
// 007ecbfb  7525                 jne 0x7ecc22
// 007ecbfd  09059c9cb900         or dword ptr [0xb99c9c], eax
// 007ecc03  b9b09bb900           mov ecx, 0xb99bb0
// 007ecc08  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007ecc10  e81b1b0000           call 0x7ee730
// 007ecc15  6870a49800           push 0x98a470
// 007ecc1a  e80a7d0000           call 0x7f4929
// 007ecc1f  83c404               add esp, 4
// 007ecc22  b8b09bb900           mov eax, 0xb99bb0
// 007ecc27  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007ecc2b  64890d00000000       mov dword ptr fs:[0], ecx
// 007ecc32  59                   pop ecx
// 007ecc33  83c40c               add esp, 0xc
// 007ecc36  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp

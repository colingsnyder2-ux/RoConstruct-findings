// roc 2012-06 00737990  unit: RBX::TextService::W4YAlignment::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00737990
//
// 00737990  64a100000000         mov eax, dword ptr fs:[0]
// 00737996  6aff                 push -1
// 00737998  68ce09ac00           push 0xac09ce
// 0073799d  50                   push eax
// 0073799e  b801000000           mov eax, 1
// 007379a3  64892500000000       mov dword ptr fs:[0], esp
// 007379aa  84052444e300         test byte ptr [0xe34424], al
// 007379b0  7525                 jne 0x7379d7
// 007379b2  09052444e300         or dword ptr [0xe34424], eax
// 007379b8  b97843e300           mov ecx, 0xe34378
// 007379bd  c744240800000000     mov dword ptr [esp + 8], 0
// 007379c5  e886700700           call 0x7aea50
// 007379ca  68b080b100           push 0xb180b0
// 007379cf  e821b82400           call 0x9831f5
// 007379d4  83c404               add esp, 4
// 007379d7  8b0c24               mov ecx, dword ptr [esp]
// 007379da  b87843e300           mov eax, 0xe34378
// 007379df  64890d00000000       mov dword ptr fs:[0], ecx
// 007379e6  83c40c               add esp, 0xc
// 007379e9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp

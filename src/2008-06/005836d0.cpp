// roc 2008-06 005836d0  unit: RBX::ModelInstance  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005836d0
//
// 005836d0  56                   push esi
// 005836d1  6a00                 push 0
// 005836d3  681c7f9400           push 0x947f1c
// 005836d8  8bf1                 mov esi, ecx
// 005836da  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 005836e0  687c909200           push 0x92907c
// 005836e5  6a00                 push 0
// 005836e7  50                   push eax
// 005836e8  e8d9e01100           call 0x6a17c6
// 005836ed  83c414               add esp, 0x14
// 005836f0  85c0                 test eax, eax
// 005836f2  742f                 je 0x583723
// 005836f4  eb0a                 jmp 0x583700
// 005836f6  8da42400000000       lea esp, [esp]
// 005836fd  8d4900               lea ecx, [ecx]
// 00583700  8b8804010000         mov ecx, dword ptr [eax + 0x104]
// 00583706  6a00                 push 0
// 00583708  681c7f9400           push 0x947f1c
// 0058370d  687c909200           push 0x92907c
// 00583712  6a00                 push 0
// 00583714  51                   push ecx
// 00583715  8bf0                 mov esi, eax
// 00583717  e8aae01100           call 0x6a17c6
// 0058371c  83c414               add esp, 0x14
// 0058371f  85c0                 test eax, eax
// 00583721  75dd                 jne 0x583700
// 00583723  8bc6                 mov eax, esi
// 00583725  5e                   pop esi
// 00583726  c3                   ret 
// library openrbx-client/App\v8datamodel\ModelInstance.cpp (function ??$getTypedRoot@VPVInstance@RBX@@@Instance@RBX@@QBEPBVPVInstance@1@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/ModelInstance.cpp

// roc 2007-03 005acb60  unit: seg_005a0000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005acb60
//
// 005acb60  64a100000000         mov eax, dword ptr fs:[0]
// 005acb66  6aff                 push -1
// 005acb68  688e987500           push 0x75988e
// 005acb6d  50                   push eax
// 005acb6e  b801000000           mov eax, 1
// 005acb73  64892500000000       mov dword ptr fs:[0], esp
// 005acb7a  8405a8f48b00         test byte ptr [0x8bf4a8], al
// 005acb80  7518                 jne 0x5acb9a
// 005acb82  0905a8f48b00         or dword ptr [0x8bf4a8], eax
// 005acb88  b9a0f48b00           mov ecx, 0x8bf4a0
// 005acb8d  c744240800000000     mov dword ptr [esp + 8], 0
// 005acb95  e896070400           call 0x5ed330
// 005acb9a  8b0c24               mov ecx, dword ptr [esp]
// 005acb9d  b8a0f48b00           mov eax, 0x8bf4a0
// 005acba2  64890d00000000       mov dword ptr fs:[0], ecx
// 005acba9  83c40c               add esp, 0xc
// 005acbac  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Shape.cpp (function ?box@Shape@G3D@@UAEAAVBox@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Shape.cpp

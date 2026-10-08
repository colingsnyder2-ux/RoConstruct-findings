// roc 2007-03 00654fa0  unit: seg_00650000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00654fa0
//
// 00654fa0  6aff                 push -1
// 00654fa2  682e117600           push 0x76112e
// 00654fa7  64a100000000         mov eax, dword ptr fs:[0]
// 00654fad  50                   push eax
// 00654fae  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00654fb3  33c4                 xor eax, esp
// 00654fb5  50                   push eax
// 00654fb6  8d442404             lea eax, [esp + 4]
// 00654fba  64a300000000         mov dword ptr fs:[0], eax
// 00654fc0  b801000000           mov eax, 1
// 00654fc5  8405681c8c00         test byte ptr [0x8c1c68], al
// 00654fcb  7525                 jne 0x654ff2
// 00654fcd  0905681c8c00         or dword ptr [0x8c1c68], eax
// 00654fd3  b900188c00           mov ecx, 0x8c1800
// 00654fd8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00654fe0  e89bf5ffff           call 0x654580
// 00654fe5  6850c07700           push 0x77c050
// 00654fea  e8c4a1fcff           call 0x61f1b3
// 00654fef  83c404               add esp, 4
// 00654ff2  b800188c00           mov eax, 0x8c1800
// 00654ff7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00654ffb  64890d00000000       mov dword ptr fs:[0], ecx
// 00655002  59                   pop ecx
// 00655003  83c40c               add esp, 0xc
// 00655006  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp

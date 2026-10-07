// roc 2007-08 004467b0  unit: CRenderSettings::W4AASamples::?$EnumDesc  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004467b0
//
// 004467b0  6aff                 push -1
// 004467b2  68eef77300           push 0x73f7ee
// 004467b7  64a100000000         mov eax, dword ptr fs:[0]
// 004467bd  50                   push eax
// 004467be  a188518b00           mov eax, dword ptr [0x8b5188]
// 004467c3  33c4                 xor eax, esp
// 004467c5  50                   push eax
// 004467c6  8d442404             lea eax, [esp + 4]
// 004467ca  64a300000000         mov dword ptr fs:[0], eax
// 004467d0  b801000000           mov eax, 1
// 004467d5  840580bb8b00         test byte ptr [0x8bbb80], al
// 004467db  7525                 jne 0x446802
// 004467dd  090580bb8b00         or dword ptr [0x8bbb80], eax
// 004467e3  b9e8ba8b00           mov ecx, 0x8bbae8
// 004467e8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004467f0  e83bfeffff           call 0x446630
// 004467f5  68f07c7700           push 0x777cf0
// 004467fa  e824a51e00           call 0x630d23
// 004467ff  83c404               add esp, 4
// 00446802  b8e8ba8b00           mov eax, 0x8bbae8
// 00446807  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0044680b  64890d00000000       mov dword ptr fs:[0], ecx
// 00446812  59                   pop ecx
// 00446813  83c40c               add esp, 0xc
// 00446816  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp

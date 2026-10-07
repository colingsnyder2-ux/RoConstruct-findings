// roc 2007-08 0064dfd0  unit: CXTPImageManager  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064dfd0
//
// 0064dfd0  6aff                 push -1
// 0064dfd2  689ef17500           push 0x75f19e
// 0064dfd7  64a100000000         mov eax, dword ptr fs:[0]
// 0064dfdd  50                   push eax
// 0064dfde  a188518b00           mov eax, dword ptr [0x8b5188]
// 0064dfe3  33c4                 xor eax, esp
// 0064dfe5  50                   push eax
// 0064dfe6  8d442404             lea eax, [esp + 4]
// 0064dfea  64a300000000         mov dword ptr fs:[0], eax
// 0064dff0  b801000000           mov eax, 1
// 0064dff5  840558878c00         test byte ptr [0x8c8758], al
// 0064dffb  7525                 jne 0x64e022
// 0064dffd  090558878c00         or dword ptr [0x8c8758], eax
// 0064e003  b9f0868c00           mov ecx, 0x8c86f0
// 0064e008  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0064e010  e8cbe6ffff           call 0x64c6e0
// 0064e015  6890ca7700           push 0x77ca90
// 0064e01a  e8042dfeff           call 0x630d23
// 0064e01f  83c404               add esp, 4
// 0064e022  b8f0868c00           mov eax, 0x8c86f0
// 0064e027  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0064e02b  64890d00000000       mov dword ptr fs:[0], ecx
// 0064e032  59                   pop ecx
// 0064e033  83c40c               add esp, 0xc
// 0064e036  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp

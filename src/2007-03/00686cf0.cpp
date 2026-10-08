// roc 2007-03 00686cf0  unit: seg_00680000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00686cf0
//
// 00686cf0  6aff                 push -1
// 00686cf2  687e417600           push 0x76417e
// 00686cf7  64a100000000         mov eax, dword ptr fs:[0]
// 00686cfd  50                   push eax
// 00686cfe  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00686d03  33c4                 xor eax, esp
// 00686d05  50                   push eax
// 00686d06  8d442404             lea eax, [esp + 4]
// 00686d0a  64a300000000         mov dword ptr fs:[0], eax
// 00686d10  b801000000           mov eax, 1
// 00686d15  8405f4218c00         test byte ptr [0x8c21f4], al
// 00686d1b  7525                 jne 0x686d42
// 00686d1d  0905f4218c00         or dword ptr [0x8c21f4], eax
// 00686d23  b9bc218c00           mov ecx, 0x8c21bc
// 00686d28  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00686d30  e8dbfdffff           call 0x686b10
// 00686d35  6810c17700           push 0x77c110
// 00686d3a  e87484f9ff           call 0x61f1b3
// 00686d3f  83c404               add esp, 4
// 00686d42  b8bc218c00           mov eax, 0x8c21bc
// 00686d47  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00686d4b  64890d00000000       mov dword ptr fs:[0], ecx
// 00686d52  59                   pop ecx
// 00686d53  83c40c               add esp, 0xc
// 00686d56  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp

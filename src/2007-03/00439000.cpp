// roc 2007-03 00439000  unit: seg_00430000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00439000
//
// 00439000  6aff                 push -1
// 00439002  68de107400           push 0x7410de
// 00439007  64a100000000         mov eax, dword ptr fs:[0]
// 0043900d  50                   push eax
// 0043900e  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00439013  33c4                 xor eax, esp
// 00439015  50                   push eax
// 00439016  8d442404             lea eax, [esp + 4]
// 0043901a  64a300000000         mov dword ptr fs:[0], eax
// 00439020  b801000000           mov eax, 1
// 00439025  8405845e8b00         test byte ptr [0x8b5e84], al
// 0043902b  7525                 jne 0x439052
// 0043902d  0905845e8b00         or dword ptr [0x8b5e84], eax
// 00439033  b97c5e8b00           mov ecx, 0x8b5e7c
// 00439038  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00439040  e8ebd92e00           call 0x726a30
// 00439045  68c0797700           push 0x7779c0
// 0043904a  e864611e00           call 0x61f1b3
// 0043904f  83c404               add esp, 4
// 00439052  b87c5e8b00           mov eax, 0x8b5e7c
// 00439057  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043905b  64890d00000000       mov dword ptr fs:[0], ecx
// 00439062  59                   pop ecx
// 00439063  83c40c               add esp, 0xc
// 00439066  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp

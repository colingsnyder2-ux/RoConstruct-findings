// roc 2007-08 00470160  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00470160
//
// 00470160  6aff                 push -1
// 00470162  68c9e67300           push 0x73e6c9
// 00470167  64a100000000         mov eax, dword ptr fs:[0]
// 0047016d  50                   push eax
// 0047016e  51                   push ecx
// 0047016f  56                   push esi
// 00470170  a188518b00           mov eax, dword ptr [0x8b5188]
// 00470175  33c4                 xor eax, esp
// 00470177  50                   push eax
// 00470178  8d44240c             lea eax, [esp + 0xc]
// 0047017c  64a300000000         mov dword ptr fs:[0], eax
// 00470182  8bf1                 mov esi, ecx
// 00470184  89742408             mov dword ptr [esp + 8], esi
// 00470188  8d4e1c               lea ecx, [esi + 0x1c]
// 0047018b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00470193  ff15ace67700         call dword ptr [0x77e6ac]
// 00470199  8bce                 mov ecx, esi
// 0047019b  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004701a3  ff15ace67700         call dword ptr [0x77e6ac]
// 004701a9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004701ad  64890d00000000       mov dword ptr fs:[0], ecx
// 004701b4  59                   pop ecx
// 004701b5  5e                   pop esi
// 004701b6  83c410               add esp, 0x10
// 004701b9  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??1Error@GImage@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp

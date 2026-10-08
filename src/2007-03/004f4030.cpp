// roc 2007-03 004f4030  unit: seg_004f0000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f4030
//
// 004f4030  6aff                 push -1
// 004f4032  68befa7400           push 0x74fabe
// 004f4037  64a100000000         mov eax, dword ptr fs:[0]
// 004f403d  50                   push eax
// 004f403e  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f4043  33c4                 xor eax, esp
// 004f4045  50                   push eax
// 004f4046  8d442404             lea eax, [esp + 4]
// 004f404a  64a300000000         mov dword ptr fs:[0], eax
// 004f4050  e84bf7ffff           call 0x4f37a0
// 004f4055  b801000000           mov eax, 1
// 004f405a  840500ae8b00         test byte ptr [0x8bae00], al
// 004f4060  752b                 jne 0x4f408d
// 004f4062  090500ae8b00         or dword ptr [0x8bae00], eax
// 004f4068  6868a98b00           push 0x8ba968
// 004f406d  b9e4ad8b00           mov ecx, 0x8bade4
// 004f4072  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004f407a  ff1578e77700         call dword ptr [0x77e778]
// 004f4080  68e0927700           push 0x7792e0
// 004f4085  e829b11200           call 0x61f1b3
// 004f408a  83c404               add esp, 4
// 004f408d  b8e4ad8b00           mov eax, 0x8bade4
// 004f4092  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f4096  64890d00000000       mov dword ptr fs:[0], ecx
// 004f409d  59                   pop ecx
// 004f409e  83c40c               add esp, 0xc
// 004f40a1  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?operatingSystem@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

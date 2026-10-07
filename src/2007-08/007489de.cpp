// roc 2007-08 007489de  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007489de
//
// 007489de  8b542408             mov edx, dword ptr [esp + 8]
// 007489e2  8d02                 lea eax, [edx]
// 007489e4  8b4afc               mov ecx, dword ptr [edx - 4]
// 007489e7  33c8                 xor ecx, eax
// 007489e9  e83080eeff           call 0x630a1e
// 007489ee  b864f28400           mov eax, 0x84f264
// 007489f3  e92080eeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

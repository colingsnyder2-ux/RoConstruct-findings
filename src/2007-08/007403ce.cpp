// roc 2007-08 007403ce  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007403ce
//
// 007403ce  8b542408             mov edx, dword ptr [esp + 8]
// 007403d2  8d02                 lea eax, [edx]
// 007403d4  8b4afc               mov ecx, dword ptr [edx - 4]
// 007403d7  33c8                 xor ecx, eax
// 007403d9  e84006efff           call 0x630a1e
// 007403de  b8f0748400           mov eax, 0x8474f0
// 007403e3  e93006efff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

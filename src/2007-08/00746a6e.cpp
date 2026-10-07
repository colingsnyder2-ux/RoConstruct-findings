// roc 2007-08 00746a6e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00746a6e
//
// 00746a6e  8b542408             mov edx, dword ptr [esp + 8]
// 00746a72  8d02                 lea eax, [edx]
// 00746a74  8b4afc               mov ecx, dword ptr [edx - 4]
// 00746a77  33c8                 xor ecx, eax
// 00746a79  e8a09feeff           call 0x630a1e
// 00746a7e  b818cf8400           mov eax, 0x84cf18
// 00746a83  e9909feeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

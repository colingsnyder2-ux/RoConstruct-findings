// roc 2007-08 00746afe  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00746afe
//
// 00746afe  8b542408             mov edx, dword ptr [esp + 8]
// 00746b02  8d02                 lea eax, [edx]
// 00746b04  8b4afc               mov ecx, dword ptr [edx - 4]
// 00746b07  33c8                 xor ecx, eax
// 00746b09  e8109feeff           call 0x630a1e
// 00746b0e  b89ccf8400           mov eax, 0x84cf9c
// 00746b13  e9009feeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

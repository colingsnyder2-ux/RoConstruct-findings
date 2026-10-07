// roc 2007-08 00741ede  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00741ede
//
// 00741ede  8b542408             mov edx, dword ptr [esp + 8]
// 00741ee2  8d02                 lea eax, [edx]
// 00741ee4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00741ee7  33c8                 xor ecx, eax
// 00741ee9  e830ebeeff           call 0x630a1e
// 00741eee  b8c88d8400           mov eax, 0x848dc8
// 00741ef3  e920ebeeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

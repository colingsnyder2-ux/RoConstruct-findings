// roc 2007-08 00746c7e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00746c7e
//
// 00746c7e  8b542408             mov edx, dword ptr [esp + 8]
// 00746c82  8d02                 lea eax, [edx]
// 00746c84  8b4afc               mov ecx, dword ptr [edx - 4]
// 00746c87  33c8                 xor ecx, eax
// 00746c89  e8909deeff           call 0x630a1e
// 00746c8e  b8fcd08400           mov eax, 0x84d0fc
// 00746c93  e9809deeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

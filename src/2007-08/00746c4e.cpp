// roc 2007-08 00746c4e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00746c4e
//
// 00746c4e  8b542408             mov edx, dword ptr [esp + 8]
// 00746c52  8d02                 lea eax, [edx]
// 00746c54  8b4afc               mov ecx, dword ptr [edx - 4]
// 00746c57  33c8                 xor ecx, eax
// 00746c59  e8c09deeff           call 0x630a1e
// 00746c5e  b8d0d08400           mov eax, 0x84d0d0
// 00746c63  e9b09deeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

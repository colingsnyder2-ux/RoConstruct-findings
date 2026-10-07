// roc 2007-08 00746b2e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00746b2e
//
// 00746b2e  8b542408             mov edx, dword ptr [esp + 8]
// 00746b32  8d02                 lea eax, [edx]
// 00746b34  8b4afc               mov ecx, dword ptr [edx - 4]
// 00746b37  33c8                 xor ecx, eax
// 00746b39  e8e09eeeff           call 0x630a1e
// 00746b3e  b8c8cf8400           mov eax, 0x84cfc8
// 00746b43  e9d09eeeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

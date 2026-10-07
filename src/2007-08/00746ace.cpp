// roc 2007-08 00746ace  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00746ace
//
// 00746ace  8b542408             mov edx, dword ptr [esp + 8]
// 00746ad2  8d02                 lea eax, [edx]
// 00746ad4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00746ad7  33c8                 xor ecx, eax
// 00746ad9  e8409feeff           call 0x630a1e
// 00746ade  b870cf8400           mov eax, 0x84cf70
// 00746ae3  e9309feeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

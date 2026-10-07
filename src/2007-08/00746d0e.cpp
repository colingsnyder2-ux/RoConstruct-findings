// roc 2007-08 00746d0e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00746d0e
//
// 00746d0e  8b542408             mov edx, dword ptr [esp + 8]
// 00746d12  8d02                 lea eax, [edx]
// 00746d14  8b4afc               mov ecx, dword ptr [edx - 4]
// 00746d17  33c8                 xor ecx, eax
// 00746d19  e8009deeff           call 0x630a1e
// 00746d1e  b880d18400           mov eax, 0x84d180
// 00746d23  e9f09ceeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

// roc 2010-06 009b1b8e  unit: seg_009b0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009b1b8e
//
// 009b1b8e  8b542408             mov edx, dword ptr [esp + 8]
// 009b1b92  8d02                 lea eax, [edx]
// 009b1b94  8b4afc               mov ecx, dword ptr [edx - 4]
// 009b1b97  33c8                 xor ecx, eax
// 009b1b99  e83679dfff           call 0x7a94d4
// 009b1b9e  b824aeb400           mov eax, 0xb4ae24
// 009b1ba3  e9ac6ddfff           jmp 0x7a8954
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

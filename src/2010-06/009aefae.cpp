// roc 2010-06 009aefae  unit: seg_009a0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009aefae
//
// 009aefae  8b542408             mov edx, dword ptr [esp + 8]
// 009aefb2  8d02                 lea eax, [edx]
// 009aefb4  8b4afc               mov ecx, dword ptr [edx - 4]
// 009aefb7  33c8                 xor ecx, eax
// 009aefb9  e816a5dfff           call 0x7a94d4
// 009aefbe  b88482b400           mov eax, 0xb48284
// 009aefc3  e98c99dfff           jmp 0x7a8954
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

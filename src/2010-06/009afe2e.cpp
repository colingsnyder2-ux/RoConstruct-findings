// roc 2010-06 009afe2e  unit: seg_009a0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009afe2e
//
// 009afe2e  8b542408             mov edx, dword ptr [esp + 8]
// 009afe32  8d02                 lea eax, [edx]
// 009afe34  8b4afc               mov ecx, dword ptr [edx - 4]
// 009afe37  33c8                 xor ecx, eax
// 009afe39  e89696dfff           call 0x7a94d4
// 009afe3e  b8d490b400           mov eax, 0xb490d4
// 009afe43  e90c8bdfff           jmp 0x7a8954
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

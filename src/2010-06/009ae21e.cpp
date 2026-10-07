// roc 2010-06 009ae21e  unit: seg_009a0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ae21e
//
// 009ae21e  8b542408             mov edx, dword ptr [esp + 8]
// 009ae222  8d02                 lea eax, [edx]
// 009ae224  8b4afc               mov ecx, dword ptr [edx - 4]
// 009ae227  33c8                 xor ecx, eax
// 009ae229  e8a6b2dfff           call 0x7a94d4
// 009ae22e  b89475b400           mov eax, 0xb47594
// 009ae233  e91ca7dfff           jmp 0x7a8954
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

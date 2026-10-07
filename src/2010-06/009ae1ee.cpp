// roc 2010-06 009ae1ee  unit: seg_009a0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ae1ee
//
// 009ae1ee  8b542408             mov edx, dword ptr [esp + 8]
// 009ae1f2  8d02                 lea eax, [edx]
// 009ae1f4  8b4afc               mov ecx, dword ptr [edx - 4]
// 009ae1f7  33c8                 xor ecx, eax
// 009ae1f9  e8d6b2dfff           call 0x7a94d4
// 009ae1fe  b86875b400           mov eax, 0xb47568
// 009ae203  e94ca7dfff           jmp 0x7a8954
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

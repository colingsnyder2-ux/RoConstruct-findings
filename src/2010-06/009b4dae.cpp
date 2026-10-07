// roc 2010-06 009b4dae  unit: seg_009b0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009b4dae
//
// 009b4dae  8b542408             mov edx, dword ptr [esp + 8]
// 009b4db2  8d02                 lea eax, [edx]
// 009b4db4  8b4afc               mov ecx, dword ptr [edx - 4]
// 009b4db7  33c8                 xor ecx, eax
// 009b4db9  e81647dfff           call 0x7a94d4
// 009b4dbe  b8b8dbb400           mov eax, 0xb4dbb8
// 009b4dc3  e98c3bdfff           jmp 0x7a8954
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

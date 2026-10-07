// roc 2008-06 007e7009  unit: seg_007e0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007e7009
//
// 007e7009  8b542408             mov edx, dword ptr [esp + 8]
// 007e700d  8d02                 lea eax, [edx]
// 007e700f  8b4afc               mov ecx, dword ptr [edx - 4]
// 007e7012  33c8                 xor ecx, eax
// 007e7014  e8b9adebff           call 0x6a1dd2
// 007e7019  b8a8899000           mov eax, 0x9089a8
// 007e701e  e99da4ebff           jmp 0x6a14c0
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

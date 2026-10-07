// roc 2008-06 007e2afe  unit: seg_007e0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007e2afe
//
// 007e2afe  8b542408             mov edx, dword ptr [esp + 8]
// 007e2b02  8d02                 lea eax, [edx]
// 007e2b04  8b4afc               mov ecx, dword ptr [edx - 4]
// 007e2b07  33c8                 xor ecx, eax
// 007e2b09  e8c4f2ebff           call 0x6a1dd2
// 007e2b0e  b850499000           mov eax, 0x904950
// 007e2b13  e9a8e9ebff           jmp 0x6a14c0
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

// roc 2008-06 007ec19e  unit: seg_007e0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ec19e
//
// 007ec19e  8b542408             mov edx, dword ptr [esp + 8]
// 007ec1a2  8d02                 lea eax, [edx]
// 007ec1a4  8b4afc               mov ecx, dword ptr [edx - 4]
// 007ec1a7  33c8                 xor ecx, eax
// 007ec1a9  e8245cebff           call 0x6a1dd2
// 007ec1ae  b82cd09000           mov eax, 0x90d02c
// 007ec1b3  e90853ebff           jmp 0x6a14c0
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

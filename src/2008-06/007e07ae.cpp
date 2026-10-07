// roc 2008-06 007e07ae  unit: seg_007e0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007e07ae
//
// 007e07ae  8b542408             mov edx, dword ptr [esp + 8]
// 007e07b2  8d02                 lea eax, [edx]
// 007e07b4  8b4afc               mov ecx, dword ptr [edx - 4]
// 007e07b7  33c8                 xor ecx, eax
// 007e07b9  e81416ecff           call 0x6a1dd2
// 007e07be  b8f0259000           mov eax, 0x9025f0
// 007e07c3  e9f80cecff           jmp 0x6a14c0
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

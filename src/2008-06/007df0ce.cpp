// roc 2008-06 007df0ce  unit: seg_007d0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007df0ce
//
// 007df0ce  8b542408             mov edx, dword ptr [esp + 8]
// 007df0d2  8d02                 lea eax, [edx]
// 007df0d4  8b4afc               mov ecx, dword ptr [edx - 4]
// 007df0d7  33c8                 xor ecx, eax
// 007df0d9  e8f42cecff           call 0x6a1dd2
// 007df0de  b860109000           mov eax, 0x901060
// 007df0e3  e9d823ecff           jmp 0x6a14c0
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

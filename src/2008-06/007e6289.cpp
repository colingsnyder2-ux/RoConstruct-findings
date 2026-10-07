// roc 2008-06 007e6289  unit: seg_007e0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007e6289
//
// 007e6289  8b542408             mov edx, dword ptr [esp + 8]
// 007e628d  8d02                 lea eax, [edx]
// 007e628f  8b4afc               mov ecx, dword ptr [edx - 4]
// 007e6292  33c8                 xor ecx, eax
// 007e6294  e839bbebff           call 0x6a1dd2
// 007e6299  b8547d9000           mov eax, 0x907d54
// 007e629e  e91db2ebff           jmp 0x6a14c0
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

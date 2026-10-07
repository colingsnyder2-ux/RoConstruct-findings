// roc 2008-06 007ea39e  unit: seg_007e0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ea39e
//
// 007ea39e  8b542408             mov edx, dword ptr [esp + 8]
// 007ea3a2  8d02                 lea eax, [edx]
// 007ea3a4  8b4afc               mov ecx, dword ptr [edx - 4]
// 007ea3a7  33c8                 xor ecx, eax
// 007ea3a9  e8247aebff           call 0x6a1dd2
// 007ea3ae  b854b69000           mov eax, 0x90b654
// 007ea3b3  e90871ebff           jmp 0x6a14c0
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

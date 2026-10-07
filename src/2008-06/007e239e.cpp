// roc 2008-06 007e239e  unit: seg_007e0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007e239e
//
// 007e239e  8b542408             mov edx, dword ptr [esp + 8]
// 007e23a2  8d02                 lea eax, [edx]
// 007e23a4  8b4afc               mov ecx, dword ptr [edx - 4]
// 007e23a7  33c8                 xor ecx, eax
// 007e23a9  e824faebff           call 0x6a1dd2
// 007e23ae  b80c429000           mov eax, 0x90420c
// 007e23b3  e908f1ebff           jmp 0x6a14c0
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

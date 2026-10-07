// roc 2010-06 009bbbde  unit: seg_009b0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009bbbde
//
// 009bbbde  8b542408             mov edx, dword ptr [esp + 8]
// 009bbbe2  8d02                 lea eax, [edx]
// 009bbbe4  8b4afc               mov ecx, dword ptr [edx - 4]
// 009bbbe7  33c8                 xor ecx, eax
// 009bbbe9  e8e6d8deff           call 0x7a94d4
// 009bbbee  b87c3eb500           mov eax, 0xb53e7c
// 009bbbf3  e95ccddeff           jmp 0x7a8954
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

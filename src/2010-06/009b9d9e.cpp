// roc 2010-06 009b9d9e  unit: seg_009b0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009b9d9e
//
// 009b9d9e  8b542408             mov edx, dword ptr [esp + 8]
// 009b9da2  8d02                 lea eax, [edx]
// 009b9da4  8b4afc               mov ecx, dword ptr [edx - 4]
// 009b9da7  33c8                 xor ecx, eax
// 009b9da9  e826f7deff           call 0x7a94d4
// 009b9dae  b87424b500           mov eax, 0xb52474
// 009b9db3  e99cebdeff           jmp 0x7a8954
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

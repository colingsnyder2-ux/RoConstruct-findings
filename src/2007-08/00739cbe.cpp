// roc 2007-08 00739cbe  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00739cbe
//
// 00739cbe  8b542408             mov edx, dword ptr [esp + 8]
// 00739cc2  8d02                 lea eax, [edx]
// 00739cc4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00739cc7  33c8                 xor ecx, eax
// 00739cc9  e8506defff           call 0x630a1e
// 00739cce  b8e8048400           mov eax, 0x8404e8
// 00739cd3  e9406defff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

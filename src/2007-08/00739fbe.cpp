// roc 2007-08 00739fbe  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00739fbe
//
// 00739fbe  8b542408             mov edx, dword ptr [esp + 8]
// 00739fc2  8d02                 lea eax, [edx]
// 00739fc4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00739fc7  33c8                 xor ecx, eax
// 00739fc9  e8506aefff           call 0x630a1e
// 00739fce  b86c098400           mov eax, 0x84096c
// 00739fd3  e9406aefff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

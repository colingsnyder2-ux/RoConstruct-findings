// roc 2007-08 0073904e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073904e
//
// 0073904e  8b542408             mov edx, dword ptr [esp + 8]
// 00739052  8d02                 lea eax, [edx]
// 00739054  8b4afc               mov ecx, dword ptr [edx - 4]
// 00739057  33c8                 xor ecx, eax
// 00739059  e8c079efff           call 0x630a1e
// 0073905e  b82cf18300           mov eax, 0x83f12c
// 00739063  e9b079efff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

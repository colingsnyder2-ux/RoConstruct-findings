// roc 2007-08 0073955e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073955e
//
// 0073955e  8b542408             mov edx, dword ptr [esp + 8]
// 00739562  8d02                 lea eax, [edx]
// 00739564  8b4afc               mov ecx, dword ptr [edx - 4]
// 00739567  33c8                 xor ecx, eax
// 00739569  e8b074efff           call 0x630a1e
// 0073956e  b878fa8300           mov eax, 0x83fa78
// 00739573  e9a074efff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

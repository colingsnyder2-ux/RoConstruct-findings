// roc 2007-08 00739cee  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00739cee
//
// 00739cee  8b542408             mov edx, dword ptr [esp + 8]
// 00739cf2  8d02                 lea eax, [edx]
// 00739cf4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00739cf7  33c8                 xor ecx, eax
// 00739cf9  e8206defff           call 0x630a1e
// 00739cfe  b814058400           mov eax, 0x840514
// 00739d03  e9106defff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

// roc 2007-08 00739d1e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00739d1e
//
// 00739d1e  8b542408             mov edx, dword ptr [esp + 8]
// 00739d22  8d02                 lea eax, [edx]
// 00739d24  8b4afc               mov ecx, dword ptr [edx - 4]
// 00739d27  33c8                 xor ecx, eax
// 00739d29  e8f06cefff           call 0x630a1e
// 00739d2e  b840058400           mov eax, 0x840540
// 00739d33  e9e06cefff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

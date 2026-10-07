// roc 2007-08 00738fee  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00738fee
//
// 00738fee  8b542408             mov edx, dword ptr [esp + 8]
// 00738ff2  8d02                 lea eax, [edx]
// 00738ff4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00738ff7  33c8                 xor ecx, eax
// 00738ff9  e8207aefff           call 0x630a1e
// 00738ffe  b8d4f08300           mov eax, 0x83f0d4
// 00739003  e9107aefff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

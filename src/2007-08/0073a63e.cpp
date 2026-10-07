// roc 2007-08 0073a63e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073a63e
//
// 0073a63e  8b542408             mov edx, dword ptr [esp + 8]
// 0073a642  8d02                 lea eax, [edx]
// 0073a644  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073a647  33c8                 xor ecx, eax
// 0073a649  e8d063efff           call 0x630a1e
// 0073a64e  b858118400           mov eax, 0x841158
// 0073a653  e9c063efff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

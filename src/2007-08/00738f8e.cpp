// roc 2007-08 00738f8e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00738f8e
//
// 00738f8e  8b542408             mov edx, dword ptr [esp + 8]
// 00738f92  8d02                 lea eax, [edx]
// 00738f94  8b4afc               mov ecx, dword ptr [edx - 4]
// 00738f97  33c8                 xor ecx, eax
// 00738f99  e8807aefff           call 0x630a1e
// 00738f9e  b87cf08300           mov eax, 0x83f07c
// 00738fa3  e9707aefff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

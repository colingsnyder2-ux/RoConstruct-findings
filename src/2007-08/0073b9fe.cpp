// roc 2007-08 0073b9fe  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073b9fe
//
// 0073b9fe  8b542408             mov edx, dword ptr [esp + 8]
// 0073ba02  8d02                 lea eax, [edx]
// 0073ba04  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073ba07  33c8                 xor ecx, eax
// 0073ba09  e81050efff           call 0x630a1e
// 0073ba0e  b830288400           mov eax, 0x842830
// 0073ba13  e90050efff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

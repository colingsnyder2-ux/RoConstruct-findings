// roc 2007-08 0073a04e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073a04e
//
// 0073a04e  8b542408             mov edx, dword ptr [esp + 8]
// 0073a052  8d02                 lea eax, [edx]
// 0073a054  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073a057  33c8                 xor ecx, eax
// 0073a059  e8c069efff           call 0x630a1e
// 0073a05e  b82c0a8400           mov eax, 0x840a2c
// 0073a063  e9b069efff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

// roc 2007-08 0073a60e  unit: CSpinButtonCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073a60e
//
// 0073a60e  8b542408             mov edx, dword ptr [esp + 8]
// 0073a612  8d02                 lea eax, [edx]
// 0073a614  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073a617  33c8                 xor ecx, eax
// 0073a619  e80064efff           call 0x630a1e
// 0073a61e  b82c118400           mov eax, 0x84112c
// 0073a623  e9f063efff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

// roc 2007-08 0074ebee  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0074ebee
//
// 0074ebee  8b542408             mov edx, dword ptr [esp + 8]
// 0074ebf2  8d02                 lea eax, [edx]
// 0074ebf4  8b4afc               mov ecx, dword ptr [edx - 4]
// 0074ebf7  33c8                 xor ecx, eax
// 0074ebf9  e8201eeeff           call 0x630a1e
// 0074ebfe  b8f0598500           mov eax, 0x8559f0
// 0074ec03  e9101eeeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

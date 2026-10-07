// roc 2007-08 0074993e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0074993e
//
// 0074993e  8b542408             mov edx, dword ptr [esp + 8]
// 00749942  8d02                 lea eax, [edx]
// 00749944  8b4afc               mov ecx, dword ptr [edx - 4]
// 00749947  33c8                 xor ecx, eax
// 00749949  e8d070eeff           call 0x630a1e
// 0074994e  b858038500           mov eax, 0x850358
// 00749953  e9c070eeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

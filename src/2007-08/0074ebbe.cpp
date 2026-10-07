// roc 2007-08 0074ebbe  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0074ebbe
//
// 0074ebbe  8b542408             mov edx, dword ptr [esp + 8]
// 0074ebc2  8d02                 lea eax, [edx]
// 0074ebc4  8b4afc               mov ecx, dword ptr [edx - 4]
// 0074ebc7  33c8                 xor ecx, eax
// 0074ebc9  e8501eeeff           call 0x630a1e
// 0074ebce  b8c4598500           mov eax, 0x8559c4
// 0074ebd3  e9401eeeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

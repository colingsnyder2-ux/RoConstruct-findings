// roc 2009-12 009582be  unit: seg_00950000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009582be
//
// 009582be  8b542408             mov edx, dword ptr [esp + 8]
// 009582c2  8d02                 lea eax, [edx]
// 009582c4  8b4afc               mov ecx, dword ptr [edx - 4]
// 009582c7  33c8                 xor ecx, eax
// 009582c9  e8ccd0e9ff           call 0x7f539a
// 009582ce  b85857ad00           mov eax, 0xad5758
// 009582d3  e942c5e9ff           jmp 0x7f481a
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

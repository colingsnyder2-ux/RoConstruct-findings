// roc 2007-08 0074df4a  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0074df4a
//
// 0074df4a  8b542408             mov edx, dword ptr [esp + 8]
// 0074df4e  8d02                 lea eax, [edx]
// 0074df50  8b4afc               mov ecx, dword ptr [edx - 4]
// 0074df53  33c8                 xor ecx, eax
// 0074df55  e8c42aeeff           call 0x630a1e
// 0074df5a  b8984e8500           mov eax, 0x854e98
// 0074df5f  e9b42aeeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

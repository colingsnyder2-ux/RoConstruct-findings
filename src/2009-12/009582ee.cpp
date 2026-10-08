// roc 2009-12 009582ee  unit: seg_00950000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009582ee
//
// 009582ee  8b542408             mov edx, dword ptr [esp + 8]
// 009582f2  8d02                 lea eax, [edx]
// 009582f4  8b4afc               mov ecx, dword ptr [edx - 4]
// 009582f7  33c8                 xor ecx, eax
// 009582f9  e89cd0e9ff           call 0x7f539a
// 009582fe  b88457ad00           mov eax, 0xad5784
// 00958303  e912c5e9ff           jmp 0x7f481a
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

// roc 2009-12 00958aee  unit: seg_00950000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00958aee
//
// 00958aee  8b542408             mov edx, dword ptr [esp + 8]
// 00958af2  8d02                 lea eax, [edx]
// 00958af4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00958af7  33c8                 xor ecx, eax
// 00958af9  e89cc8e9ff           call 0x7f539a
// 00958afe  b8a05fad00           mov eax, 0xad5fa0
// 00958b03  e912bde9ff           jmp 0x7f481a
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

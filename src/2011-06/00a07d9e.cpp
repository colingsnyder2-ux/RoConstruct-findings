// roc 2011-06 00a07d9e  unit: seg_00a00000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a07d9e
//
// 00a07d9e  8b542408             mov edx, dword ptr [esp + 8]
// 00a07da2  8d02                 lea eax, [edx]
// 00a07da4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00a07da7  33c8                 xor ecx, eax
// 00a07da9  e8493be0ff           call 0x80b8f7
// 00a07dae  b87892bd00           mov eax, 0xbd9278
// 00a07db3  e99632e0ff           jmp 0x80b04e
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

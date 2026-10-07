// roc 2011-06 00a0a239  unit: seg_00a00000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a0a239
//
// 00a0a239  8b542408             mov edx, dword ptr [esp + 8]
// 00a0a23d  8d02                 lea eax, [edx]
// 00a0a23f  8b4afc               mov ecx, dword ptr [edx - 4]
// 00a0a242  33c8                 xor ecx, eax
// 00a0a244  e8ae16e0ff           call 0x80b8f7
// 00a0a249  b8e4b3bd00           mov eax, 0xbdb3e4
// 00a0a24e  e9fb0de0ff           jmp 0x80b04e
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

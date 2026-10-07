// roc 2011-06 00a0e72e  unit: seg_00a00000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a0e72e
//
// 00a0e72e  8b542408             mov edx, dword ptr [esp + 8]
// 00a0e732  8d02                 lea eax, [edx]
// 00a0e734  8b4afc               mov ecx, dword ptr [edx - 4]
// 00a0e737  33c8                 xor ecx, eax
// 00a0e739  e8b9d1dfff           call 0x80b8f7
// 00a0e73e  b818f1bd00           mov eax, 0xbdf118
// 00a0e743  e906c9dfff           jmp 0x80b04e
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

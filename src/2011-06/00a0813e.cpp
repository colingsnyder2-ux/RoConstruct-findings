// roc 2011-06 00a0813e  unit: seg_00a00000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a0813e
//
// 00a0813e  8b542408             mov edx, dword ptr [esp + 8]
// 00a08142  8d02                 lea eax, [edx]
// 00a08144  8b4afc               mov ecx, dword ptr [edx - 4]
// 00a08147  33c8                 xor ecx, eax
// 00a08149  e8a937e0ff           call 0x80b8f7
// 00a0814e  b8b895bd00           mov eax, 0xbd95b8
// 00a08153  e9f62ee0ff           jmp 0x80b04e
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

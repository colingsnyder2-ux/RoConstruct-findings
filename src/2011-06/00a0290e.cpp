// roc 2011-06 00a0290e  unit: seg_00a00000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a0290e
//
// 00a0290e  8b542408             mov edx, dword ptr [esp + 8]
// 00a02912  8d02                 lea eax, [edx]
// 00a02914  8b4afc               mov ecx, dword ptr [edx - 4]
// 00a02917  33c8                 xor ecx, eax
// 00a02919  e8d98fe0ff           call 0x80b8f7
// 00a0291e  b8e441bd00           mov eax, 0xbd41e4
// 00a02923  e92687e0ff           jmp 0x80b04e
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

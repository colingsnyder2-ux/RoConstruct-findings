// roc 2011-06 00a08c69  unit: seg_00a00000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a08c69
//
// 00a08c69  8b542408             mov edx, dword ptr [esp + 8]
// 00a08c6d  8d02                 lea eax, [edx]
// 00a08c6f  8b4afc               mov ecx, dword ptr [edx - 4]
// 00a08c72  33c8                 xor ecx, eax
// 00a08c74  e87e2ce0ff           call 0x80b8f7
// 00a08c79  b8b4a1bd00           mov eax, 0xbda1b4
// 00a08c7e  e9cb23e0ff           jmp 0x80b04e
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

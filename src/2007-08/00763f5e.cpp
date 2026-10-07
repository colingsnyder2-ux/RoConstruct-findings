// roc 2007-08 00763f5e  unit: seg_00760000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00763f5e
//
// 00763f5e  8b542408             mov edx, dword ptr [esp + 8]
// 00763f62  8d02                 lea eax, [edx]
// 00763f64  8b4afc               mov ecx, dword ptr [edx - 4]
// 00763f67  33c8                 xor ecx, eax
// 00763f69  e8b0caecff           call 0x630a1e
// 00763f6e  b8d4fc8600           mov eax, 0x86fcd4
// 00763f73  e9a0caecff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

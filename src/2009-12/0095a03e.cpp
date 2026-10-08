// roc 2009-12 0095a03e  unit: seg_00950000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0095a03e
//
// 0095a03e  8b542408             mov edx, dword ptr [esp + 8]
// 0095a042  8d02                 lea eax, [edx]
// 0095a044  8b4afc               mov ecx, dword ptr [edx - 4]
// 0095a047  33c8                 xor ecx, eax
// 0095a049  e84cb3e9ff           call 0x7f539a
// 0095a04e  b8a073ad00           mov eax, 0xad73a0
// 0095a053  e9c2a7e9ff           jmp 0x7f481a
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp

// roc 2010-06 004fe6a0  unit: RBX::Network::IdSerializer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004fe6a0
//
// 004fe6a0  833d8c68c00000       cmp dword ptr [0xc0688c], 0
// 004fe6a7  7e2f                 jle 0x4fe6d8
// 004fe6a9  832d8c68c00001       sub dword ptr [0xc0688c], 1
// 004fe6b0  7526                 jne 0x4fe6d8
// 004fe6b2  8b0d8868c000         mov ecx, dword ptr [0xc06888]
// 004fe6b8  56                   push esi
// 004fe6b9  8bf1                 mov esi, ecx
// 004fe6bb  85c9                 test ecx, ecx
// 004fe6bd  740e                 je 0x4fe6cd
// 004fe6bf  e8acfeffff           call 0x4fe570
// 004fe6c4  56                   push esi
// 004fe6c5  e8d0922a00           call 0x7a799a
// 004fe6ca  83c404               add esp, 4
// 004fe6cd  c7058868c00000000000 mov dword ptr [0xc06888], 0
// 004fe6d7  5e                   pop esi
// 004fe6d8  c3                   ret 
// library rbx2016-raknet/StringCompressor.cpp (function ?RemoveReference@StringCompressor@RakNet@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringCompressor.cpp

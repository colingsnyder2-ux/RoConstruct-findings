// roc 2008-06 004ba9d0  unit: RBX::Network::IdSerializer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ba9d0
//
// 004ba9d0  833d1418970000       cmp dword ptr [0x971814], 0
// 004ba9d7  7e2f                 jle 0x4baa08
// 004ba9d9  832d1418970001       sub dword ptr [0x971814], 1
// 004ba9e0  7526                 jne 0x4baa08
// 004ba9e2  8b0d10189700         mov ecx, dword ptr [0x971810]
// 004ba9e8  56                   push esi
// 004ba9e9  8bf1                 mov esi, ecx
// 004ba9eb  85c9                 test ecx, ecx
// 004ba9ed  740e                 je 0x4ba9fd
// 004ba9ef  e8ecfeffff           call 0x4ba8e0
// 004ba9f4  56                   push esi
// 004ba9f5  e8805c1e00           call 0x6a067a
// 004ba9fa  83c404               add esp, 4
// 004ba9fd  c7051018970000000000 mov dword ptr [0x971810], 0
// 004baa07  5e                   pop esi
// 004baa08  c3                   ret 
// library rbx2016-raknet/StringCompressor.cpp (function ?RemoveReference@StringCompressor@RakNet@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringCompressor.cpp

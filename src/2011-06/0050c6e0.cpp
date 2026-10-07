// roc 2011-06 0050c6e0  unit: RBX::Network::ServerReplicator  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050c6e0
//
// 0050c6e0  833d7885cb0000       cmp dword ptr [0xcb8578], 0
// 0050c6e7  7e2f                 jle 0x50c718
// 0050c6e9  832d7885cb0001       sub dword ptr [0xcb8578], 1
// 0050c6f0  7526                 jne 0x50c718
// 0050c6f2  8b0d7485cb00         mov ecx, dword ptr [0xcb8574]
// 0050c6f8  56                   push esi
// 0050c6f9  8bf1                 mov esi, ecx
// 0050c6fb  85c9                 test ecx, ecx
// 0050c6fd  740e                 je 0x50c70d
// 0050c6ff  e8fcfeffff           call 0x50c600
// 0050c704  56                   push esi
// 0050c705  e84ed92f00           call 0x80a058
// 0050c70a  83c404               add esp, 4
// 0050c70d  c7057485cb0000000000 mov dword ptr [0xcb8574], 0
// 0050c717  5e                   pop esi
// 0050c718  c3                   ret 
// library rbx2016-raknet/StringCompressor.cpp (function ?RemoveReference@StringCompressor@RakNet@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringCompressor.cpp

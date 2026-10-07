// roc 2011-06 0050cdc0  unit: RBX::Network::ServerReplicator  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050cdc0
//
// 0050cdc0  833d8885cb0000       cmp dword ptr [0xcb8588], 0
// 0050cdc7  7e2f                 jle 0x50cdf8
// 0050cdc9  832d8885cb0001       sub dword ptr [0xcb8588], 1
// 0050cdd0  7526                 jne 0x50cdf8
// 0050cdd2  8b0d8485cb00         mov ecx, dword ptr [0xcb8584]
// 0050cdd8  56                   push esi
// 0050cdd9  8bf1                 mov esi, ecx
// 0050cddb  85c9                 test ecx, ecx
// 0050cddd  740e                 je 0x50cded
// 0050cddf  e89cfeffff           call 0x50cc80
// 0050cde4  56                   push esi
// 0050cde5  e86ed22f00           call 0x80a058
// 0050cdea  83c404               add esp, 4
// 0050cded  c7058485cb0000000000 mov dword ptr [0xcb8584], 0
// 0050cdf7  5e                   pop esi
// 0050cdf8  c3                   ret 
// library rbx2016-raknet/StringCompressor.cpp (function ?RemoveReference@StringCompressor@RakNet@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringCompressor.cpp

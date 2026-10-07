// roc 2012-06 00599470  unit: RBX::Network::ServerReplicator  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00599470
//
// 00599470  833dac52e20000       cmp dword ptr [0xe252ac], 0
// 00599477  7e2f                 jle 0x5994a8
// 00599479  832dac52e20001       sub dword ptr [0xe252ac], 1
// 00599480  7526                 jne 0x5994a8
// 00599482  8b0da852e200         mov ecx, dword ptr [0xe252a8]
// 00599488  56                   push esi
// 00599489  8bf1                 mov esi, ecx
// 0059948b  85c9                 test ecx, ecx
// 0059948d  740e                 je 0x59949d
// 0059948f  e89cfeffff           call 0x599330
// 00599494  56                   push esi
// 00599495  e87a8c3e00           call 0x982114
// 0059949a  83c404               add esp, 4
// 0059949d  c705a852e20000000000 mov dword ptr [0xe252a8], 0
// 005994a7  5e                   pop esi
// 005994a8  c3                   ret 
// library rbx2016-raknet/StringCompressor.cpp (function ?RemoveReference@StringCompressor@RakNet@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringCompressor.cpp

// roc 2009-06 004e1560  unit: RBX::Network::IdSerializer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e1560
//
// 004e1560  833d3cf1a30000       cmp dword ptr [0xa3f13c], 0
// 004e1567  7e2f                 jle 0x4e1598
// 004e1569  832d3cf1a30001       sub dword ptr [0xa3f13c], 1
// 004e1570  7526                 jne 0x4e1598
// 004e1572  8b0d38f1a300         mov ecx, dword ptr [0xa3f138]
// 004e1578  56                   push esi
// 004e1579  8bf1                 mov esi, ecx
// 004e157b  85c9                 test ecx, ecx
// 004e157d  740e                 je 0x4e158d
// 004e157f  e8acfeffff           call 0x4e1430
// 004e1584  56                   push esi
// 004e1585  e8a8742300           call 0x718a32
// 004e158a  83c404               add esp, 4
// 004e158d  c70538f1a30000000000 mov dword ptr [0xa3f138], 0
// 004e1597  5e                   pop esi
// 004e1598  c3                   ret 
// library rbx2016-raknet/StringCompressor.cpp (function ?RemoveReference@StringCompressor@RakNet@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringCompressor.cpp

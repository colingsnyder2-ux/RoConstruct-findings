// roc 2012-06 00598d70  unit: RBX::Network::ServerReplicator  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00598d70
//
// 00598d70  833d9052e20000       cmp dword ptr [0xe25290], 0
// 00598d77  7e2f                 jle 0x598da8
// 00598d79  832d9052e20001       sub dword ptr [0xe25290], 1
// 00598d80  7526                 jne 0x598da8
// 00598d82  8b0d8c52e200         mov ecx, dword ptr [0xe2528c]
// 00598d88  56                   push esi
// 00598d89  8bf1                 mov esi, ecx
// 00598d8b  85c9                 test ecx, ecx
// 00598d8d  740e                 je 0x598d9d
// 00598d8f  e8fcfeffff           call 0x598c90
// 00598d94  56                   push esi
// 00598d95  e87a933e00           call 0x982114
// 00598d9a  83c404               add esp, 4
// 00598d9d  c7058c52e20000000000 mov dword ptr [0xe2528c], 0
// 00598da7  5e                   pop esi
// 00598da8  c3                   ret 
// library rbx2016-raknet/StringCompressor.cpp (function ?RemoveReference@StringCompressor@RakNet@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringCompressor.cpp

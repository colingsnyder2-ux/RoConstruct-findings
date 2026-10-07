// roc 2009-06 004e0e70  unit: RBX::Network::IdSerializer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e0e70
//
// 004e0e70  833d34f1a30000       cmp dword ptr [0xa3f134], 0
// 004e0e77  7e2f                 jle 0x4e0ea8
// 004e0e79  832d34f1a30001       sub dword ptr [0xa3f134], 1
// 004e0e80  7526                 jne 0x4e0ea8
// 004e0e82  8b0d30f1a300         mov ecx, dword ptr [0xa3f130]
// 004e0e88  56                   push esi
// 004e0e89  8bf1                 mov esi, ecx
// 004e0e8b  85c9                 test ecx, ecx
// 004e0e8d  740e                 je 0x4e0e9d
// 004e0e8f  e8fcfeffff           call 0x4e0d90
// 004e0e94  56                   push esi
// 004e0e95  e8987b2300           call 0x718a32
// 004e0e9a  83c404               add esp, 4
// 004e0e9d  c70530f1a30000000000 mov dword ptr [0xa3f130], 0
// 004e0ea7  5e                   pop esi
// 004e0ea8  c3                   ret 
// library rbx2016-raknet/StringCompressor.cpp (function ?RemoveReference@StringCompressor@RakNet@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringCompressor.cpp

// roc 2009-06 004e0e30  unit: RBX::Network::IdSerializer  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e0e30
//
// 004e0e30  a134f1a300           mov eax, dword ptr [0xa3f134]
// 004e0e35  40                   inc eax
// 004e0e36  a334f1a300           mov dword ptr [0xa3f134], eax
// 004e0e3b  83f801               cmp eax, 1
// 004e0e3e  7525                 jne 0x4e0e65
// 004e0e40  6a0c                 push 0xc
// 004e0e42  e8f17b2300           call 0x718a38
// 004e0e47  33c9                 xor ecx, ecx
// 004e0e49  83c404               add esp, 4
// 004e0e4c  3bc1                 cmp eax, ecx
// 004e0e4e  740e                 je 0x4e0e5e
// 004e0e50  894808               mov dword ptr [eax + 8], ecx
// 004e0e53  8908                 mov dword ptr [eax], ecx
// 004e0e55  894804               mov dword ptr [eax + 4], ecx
// 004e0e58  a330f1a300           mov dword ptr [0xa3f130], eax
// 004e0e5d  c3                   ret 
// 004e0e5e  33c0                 xor eax, eax
// 004e0e60  a330f1a300           mov dword ptr [0xa3f130], eax
// 004e0e65  c3                   ret 
// library rbx2016-raknet/StringTable.cpp (function ?AddReference@StringTable@RakNet@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringTable.cpp

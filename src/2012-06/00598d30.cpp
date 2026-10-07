// roc 2012-06 00598d30  unit: RBX::Network::ServerReplicator  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00598d30
//
// 00598d30  a19052e200           mov eax, dword ptr [0xe25290]
// 00598d35  40                   inc eax
// 00598d36  a39052e200           mov dword ptr [0xe25290], eax
// 00598d3b  83f801               cmp eax, 1
// 00598d3e  7525                 jne 0x598d65
// 00598d40  6a0c                 push 0xc
// 00598d42  e8d3933e00           call 0x98211a
// 00598d47  33c9                 xor ecx, ecx
// 00598d49  83c404               add esp, 4
// 00598d4c  3bc1                 cmp eax, ecx
// 00598d4e  740e                 je 0x598d5e
// 00598d50  894808               mov dword ptr [eax + 8], ecx
// 00598d53  8908                 mov dword ptr [eax], ecx
// 00598d55  894804               mov dword ptr [eax + 4], ecx
// 00598d58  a38c52e200           mov dword ptr [0xe2528c], eax
// 00598d5d  c3                   ret 
// 00598d5e  33c0                 xor eax, eax
// 00598d60  a38c52e200           mov dword ptr [0xe2528c], eax
// 00598d65  c3                   ret 
// library rbx2016-raknet/StringTable.cpp (function ?AddReference@StringTable@RakNet@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringTable.cpp

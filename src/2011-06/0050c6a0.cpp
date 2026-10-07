// roc 2011-06 0050c6a0  unit: RBX::Network::ServerReplicator  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050c6a0
//
// 0050c6a0  a17885cb00           mov eax, dword ptr [0xcb8578]
// 0050c6a5  40                   inc eax
// 0050c6a6  a37885cb00           mov dword ptr [0xcb8578], eax
// 0050c6ab  83f801               cmp eax, 1
// 0050c6ae  7525                 jne 0x50c6d5
// 0050c6b0  6a0c                 push 0xc
// 0050c6b2  e8a7d92f00           call 0x80a05e
// 0050c6b7  33c9                 xor ecx, ecx
// 0050c6b9  83c404               add esp, 4
// 0050c6bc  3bc1                 cmp eax, ecx
// 0050c6be  740e                 je 0x50c6ce
// 0050c6c0  894808               mov dword ptr [eax + 8], ecx
// 0050c6c3  8908                 mov dword ptr [eax], ecx
// 0050c6c5  894804               mov dword ptr [eax + 4], ecx
// 0050c6c8  a37485cb00           mov dword ptr [0xcb8574], eax
// 0050c6cd  c3                   ret 
// 0050c6ce  33c0                 xor eax, eax
// 0050c6d0  a37485cb00           mov dword ptr [0xcb8574], eax
// 0050c6d5  c3                   ret 
// library rbx2016-raknet/StringTable.cpp (function ?AddReference@StringTable@RakNet@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringTable.cpp

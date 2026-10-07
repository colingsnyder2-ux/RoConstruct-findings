// roc 2012-06 005ba590  unit: RakNet::PluginInterface2  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005ba590
//
// 005ba590  56                   push esi
// 005ba591  68f815d900           push 0xd915f8
// 005ba596  8bf1                 mov esi, ecx
// 005ba598  e87377faff           call 0x561d10
// 005ba59d  84c0                 test al, al
// 005ba59f  7418                 je 0x5ba5b9
// 005ba5a1  684c69e200           push 0xe2694c
// 005ba5a6  8d4e10               lea ecx, [esi + 0x10]
// 005ba5a9  e8f272faff           call 0x5618a0
// 005ba5ae  84c0                 test al, al
// 005ba5b0  7407                 je 0x5ba5b9
// 005ba5b2  b801000000           mov eax, 1
// 005ba5b7  5e                   pop esi
// 005ba5b8  c3                   ret 
// 005ba5b9  33c0                 xor eax, eax
// 005ba5bb  5e                   pop esi
// 005ba5bc  c3                   ret 
// library rbx2016-raknet/RakPeer.cpp (function ?IsUndefined@AddressOrGUID@RakNet@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp

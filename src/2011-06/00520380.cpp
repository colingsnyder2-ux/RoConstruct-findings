// roc 2011-06 00520380  unit: RBX::Network::ProfiledRakPeer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00520380
//
// 00520380  56                   push esi
// 00520381  8bf1                 mov esi, ecx
// 00520383  8b06                 mov eax, dword ptr [esi]
// 00520385  8b5020               mov edx, dword ptr [eax + 0x20]
// 00520388  57                   push edi
// 00520389  ffd2                 call edx
// 0052038b  8bce                 mov ecx, esi
// 0052038d  668bf8               mov di, ax
// 00520390  e86bfdffff           call 0x520100
// 00520395  663bc7               cmp ax, di
// 00520398  5f                   pop edi
// 00520399  5e                   pop esi
// 0052039a  1bc0                 sbb eax, eax
// 0052039c  f7d8                 neg eax
// 0052039e  c3                   ret 
// library rbx2016-raknet/RakPeer.cpp (function ?AllowIncomingConnections@RakPeer@RakNet@@IBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp

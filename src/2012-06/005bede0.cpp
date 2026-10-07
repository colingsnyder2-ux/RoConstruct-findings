// roc 2012-06 005bede0  unit: RakNet::RakPeer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bede0
//
// 005bede0  56                   push esi
// 005bede1  8bf1                 mov esi, ecx
// 005bede3  8b4604               mov eax, dword ptr [esi + 4]
// 005bede6  85c0                 test eax, eax
// 005bede8  742d                 je 0x5bee17
// 005bedea  8300ff               add dword ptr [eax], -1
// 005beded  7528                 jne 0x5bee17
// 005bedef  57                   push edi
// 005bedf0  8b3e                 mov edi, dword ptr [esi]
// 005bedf2  85ff                 test edi, edi
// 005bedf4  7410                 je 0x5bee06
// 005bedf6  8bcf                 mov ecx, edi
// 005bedf8  e8e3a50000           call 0x5c93e0
// 005bedfd  57                   push edi
// 005bedfe  e811333c00           call 0x982114
// 005bee03  83c404               add esp, 4
// 005bee06  8b7604               mov esi, dword ptr [esi + 4]
// 005bee09  5f                   pop edi
// 005bee0a  85f6                 test esi, esi
// 005bee0c  7409                 je 0x5bee17
// 005bee0e  56                   push esi
// 005bee0f  e800333c00           call 0x982114
// 005bee14  83c404               add esp, 4
// 005bee17  5e                   pop esi
// 005bee18  c3                   ret 
// library rbx2016-raknet/CloudServer.cpp (function ??1?$RakNetSmartPtr@URakNetSocket@RakNet@@@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp

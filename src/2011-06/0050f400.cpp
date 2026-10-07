// roc 2011-06 0050f400  unit: RBX::Network::VMarker::?$EventDesc  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050f400
//
// 0050f400  56                   push esi
// 0050f401  8bf1                 mov esi, ecx
// 0050f403  8b4604               mov eax, dword ptr [esi + 4]
// 0050f406  85c0                 test eax, eax
// 0050f408  742d                 je 0x50f437
// 0050f40a  8300ff               add dword ptr [eax], -1
// 0050f40d  7528                 jne 0x50f437
// 0050f40f  57                   push edi
// 0050f410  8b3e                 mov edi, dword ptr [esi]
// 0050f412  85ff                 test edi, edi
// 0050f414  7410                 je 0x50f426
// 0050f416  8bcf                 mov ecx, edi
// 0050f418  e8c3e30100           call 0x52d7e0
// 0050f41d  57                   push edi
// 0050f41e  e835ac2f00           call 0x80a058
// 0050f423  83c404               add esp, 4
// 0050f426  8b7604               mov esi, dword ptr [esi + 4]
// 0050f429  5f                   pop edi
// 0050f42a  85f6                 test esi, esi
// 0050f42c  7409                 je 0x50f437
// 0050f42e  56                   push esi
// 0050f42f  e824ac2f00           call 0x80a058
// 0050f434  83c404               add esp, 4
// 0050f437  5e                   pop esi
// 0050f438  c3                   ret 
// library rbx2016-raknet/CloudServer.cpp (function ??1?$RakNetSmartPtr@URakNetSocket@RakNet@@@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp

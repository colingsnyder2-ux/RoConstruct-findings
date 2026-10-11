// from server: 100% by auto
// roc 2007-08 004ba6d0  unit: RakPeer  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ba6d0
//
// 004ba6d0  56                   push esi
// 004ba6d1  8bf1                 mov esi, ecx
// 004ba6d3  8b06                 mov eax, dword ptr [esi]
// 004ba6d5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004ba6d8  ffd2                 call edx
// 004ba6da  84c0                 test al, al
// 004ba6dc  7406                 je 0x4ba6e4
// 004ba6de  32c0                 xor al, al
// 004ba6e0  5e                   pop esi
// 004ba6e1  c20400               ret 4
// 004ba6e4  807c240800           cmp byte ptr [esp + 8], 0
// 004ba6e9  57                   push edi
// 004ba6ea  742b                 je 0x4ba717
// 004ba6ec  8bbecc060000         mov edi, dword ptr [esi + 0x6cc]
// 004ba6f2  85ff                 test edi, edi
// 004ba6f4  7445                 je 0x4ba73b
// 004ba6f6  8bcf                 mov ecx, edi
// 004ba6f8  e8939b0000           call 0x4c4290
// 004ba6fd  57                   push edi
// 004ba6fe  e85f551700           call 0x62fc62
// 004ba703  83c404               add esp, 4
// 004ba706  5f                   pop edi
// 004ba707  c786cc06000000000000 mov dword ptr [esi + 0x6cc], 0
// 004ba711  b001                 mov al, 1
// 004ba713  5e                   pop esi
// 004ba714  c20400               ret 4
// 004ba717  8bbed0060000         mov edi, dword ptr [esi + 0x6d0]
// 004ba71d  85ff                 test edi, edi
// 004ba71f  741a                 je 0x4ba73b
// 004ba721  8bcf                 mov ecx, edi
// 004ba723  e8689b0000           call 0x4c4290
// 004ba728  57                   push edi
// 004ba729  e834551700           call 0x62fc62
// 004ba72e  c786d006000000000000 mov dword ptr [esi + 0x6d0], 0
// 004ba738  83c404               add esp, 4
// 004ba73b  5f                   pop edi
// 004ba73c  b001                 mov al, 1
// 004ba73e  5e                   pop esi
// 004ba73f  c20400               ret 4

// from server: 37% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp
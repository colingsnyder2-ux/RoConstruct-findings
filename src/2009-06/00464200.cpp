// roc 2009-06 00464200  unit: Scintilla::CScintillaView  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464200
//
// 00464200  8b442408             mov eax, dword ptr [esp + 8]
// 00464204  56                   push esi
// 00464205  8bf1                 mov esi, ecx
// 00464207  8b08                 mov ecx, dword ptr [eax]
// 00464209  8b5174               mov edx, dword ptr [ecx + 0x74]
// 0046420c  f6421401             test byte ptr [edx + 0x14], 1
// 00464210  57                   push edi
// 00464211  743b                 je 0x46424e
// 00464213  53                   push ebx
// 00464214  6a01                 push 1
// 00464216  8d4e58               lea ecx, [esi + 0x58]
// 00464219  e8e2d3ffff           call 0x461600
// 0046421e  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 00464224  81c6b4000000         add esi, 0xb4
// 0046422a  8bd8                 mov ebx, eax
// 0046422c  85ff                 test edi, edi
// 0046422e  7d05                 jge 0x464235
// 00464230  e8af4a2b00           call 0x718ce4
// 00464235  6aff                 push -1
// 00464237  8d4701               lea eax, [edi + 1]
// 0046423a  50                   push eax
// 0046423b  8bce                 mov ecx, esi
// 0046423d  e8cee22e00           call 0x752510
// 00464242  8b4e04               mov ecx, dword ptr [esi + 4]
// 00464245  891cb9               mov dword ptr [ecx + edi*4], ebx
// 00464248  5b                   pop ebx
// 00464249  5f                   pop edi
// 0046424a  5e                   pop esi
// 0046424b  c20800               ret 8
// 0046424e  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 00464254  81c6b4000000         add esi, 0xb4
// 0046425a  85ff                 test edi, edi
// 0046425c  7d05                 jge 0x464263
// 0046425e  e8814a2b00           call 0x718ce4
// 00464263  6aff                 push -1
// 00464265  8d5701               lea edx, [edi + 1]
// 00464268  52                   push edx
// 00464269  8bce                 mov ecx, esi
// 0046426b  e8a0e22e00           call 0x752510
// 00464270  8b4604               mov eax, dword ptr [esi + 4]
// 00464273  c704b800000000       mov dword ptr [eax + edi*4], 0
// 0046427a  5f                   pop edi
// 0046427b  5e                   pop esi
// 0046427c  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnBeginPrinting@CScintillaView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp

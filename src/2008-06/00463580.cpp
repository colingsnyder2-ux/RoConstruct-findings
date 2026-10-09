// roc 2008-06 00463580  unit: Scintilla::CScintillaView  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00463580
//
// 00463580  8b442408             mov eax, dword ptr [esp + 8]
// 00463584  56                   push esi
// 00463585  8bf1                 mov esi, ecx
// 00463587  8b08                 mov ecx, dword ptr [eax]
// 00463589  8b5174               mov edx, dword ptr [ecx + 0x74]
// 0046358c  f6421401             test byte ptr [edx + 0x14], 1
// 00463590  57                   push edi
// 00463591  743b                 je 0x4635ce
// 00463593  53                   push ebx
// 00463594  6a01                 push 1
// 00463596  8d4e58               lea ecx, [esi + 0x58]
// 00463599  e8f2d3ffff           call 0x460990
// 0046359e  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 004635a4  81c6b4000000         add esi, 0xb4
// 004635aa  8bd8                 mov ebx, eax
// 004635ac  85ff                 test edi, edi
// 004635ae  7d05                 jge 0x4635b5
// 004635b0  e88fd32300           call 0x6a0944
// 004635b5  6aff                 push -1
// 004635b7  8d4701               lea eax, [edi + 1]
// 004635ba  50                   push eax
// 004635bb  8bce                 mov ecx, esi
// 004635bd  e80eac2a00           call 0x70e1d0
// 004635c2  8b4e04               mov ecx, dword ptr [esi + 4]
// 004635c5  891cb9               mov dword ptr [ecx + edi*4], ebx
// 004635c8  5b                   pop ebx
// 004635c9  5f                   pop edi
// 004635ca  5e                   pop esi
// 004635cb  c20800               ret 8
// 004635ce  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 004635d4  81c6b4000000         add esi, 0xb4
// 004635da  85ff                 test edi, edi
// 004635dc  7d05                 jge 0x4635e3
// 004635de  e861d32300           call 0x6a0944
// 004635e3  6aff                 push -1
// 004635e5  8d5701               lea edx, [edi + 1]
// 004635e8  52                   push edx
// 004635e9  8bce                 mov ecx, esi
// 004635eb  e8e0ab2a00           call 0x70e1d0
// 004635f0  8b4604               mov eax, dword ptr [esi + 4]
// 004635f3  c704b800000000       mov dword ptr [eax + edi*4], 0
// 004635fa  5f                   pop edi
// 004635fb  5e                   pop esi
// 004635fc  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnBeginPrinting@CScintillaView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp

// roc 2010-06 004708c0  unit: Scintilla::CScintillaView  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004708c0
//
// 004708c0  8b442408             mov eax, dword ptr [esp + 8]
// 004708c4  56                   push esi
// 004708c5  8bf1                 mov esi, ecx
// 004708c7  8b08                 mov ecx, dword ptr [eax]
// 004708c9  8b5174               mov edx, dword ptr [ecx + 0x74]
// 004708cc  f6421401             test byte ptr [edx + 0x14], 1
// 004708d0  57                   push edi
// 004708d1  743b                 je 0x47090e
// 004708d3  53                   push ebx
// 004708d4  6a01                 push 1
// 004708d6  8d4e58               lea ecx, [esi + 0x58]
// 004708d9  e8c2d3ffff           call 0x46dca0
// 004708de  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 004708e4  81c6b4000000         add esi, 0xb4
// 004708ea  8bd8                 mov ebx, eax
// 004708ec  85ff                 test edi, edi
// 004708ee  7d05                 jge 0x4708f5
// 004708f0  e857733300           call 0x7a7c4c
// 004708f5  6aff                 push -1
// 004708f7  8d4701               lea eax, [edi + 1]
// 004708fa  50                   push eax
// 004708fb  8bce                 mov ecx, esi
// 004708fd  e8fe093700           call 0x7e1300
// 00470902  8b4e04               mov ecx, dword ptr [esi + 4]
// 00470905  891cb9               mov dword ptr [ecx + edi*4], ebx
// 00470908  5b                   pop ebx
// 00470909  5f                   pop edi
// 0047090a  5e                   pop esi
// 0047090b  c20800               ret 8
// 0047090e  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 00470914  81c6b4000000         add esi, 0xb4
// 0047091a  85ff                 test edi, edi
// 0047091c  7d05                 jge 0x470923
// 0047091e  e829733300           call 0x7a7c4c
// 00470923  6aff                 push -1
// 00470925  8d5701               lea edx, [edi + 1]
// 00470928  52                   push edx
// 00470929  8bce                 mov ecx, esi
// 0047092b  e8d0093700           call 0x7e1300
// 00470930  8b4604               mov eax, dword ptr [esi + 4]
// 00470933  c704b800000000       mov dword ptr [eax + edi*4], 0
// 0047093a  5f                   pop edi
// 0047093b  5e                   pop esi
// 0047093c  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnBeginPrinting@CScintillaView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp

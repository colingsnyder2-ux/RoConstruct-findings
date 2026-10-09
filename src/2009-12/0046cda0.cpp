// roc 2009-12 0046cda0  unit: Scintilla::CScintillaView  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046cda0
//
// 0046cda0  8b442408             mov eax, dword ptr [esp + 8]
// 0046cda4  56                   push esi
// 0046cda5  8bf1                 mov esi, ecx
// 0046cda7  8b08                 mov ecx, dword ptr [eax]
// 0046cda9  8b5174               mov edx, dword ptr [ecx + 0x74]
// 0046cdac  f6421401             test byte ptr [edx + 0x14], 1
// 0046cdb0  57                   push edi
// 0046cdb1  743b                 je 0x46cdee
// 0046cdb3  53                   push ebx
// 0046cdb4  6a01                 push 1
// 0046cdb6  8d4e58               lea ecx, [esi + 0x58]
// 0046cdb9  e8e2d3ffff           call 0x46a1a0
// 0046cdbe  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 0046cdc4  81c6b4000000         add esi, 0xb4
// 0046cdca  8bd8                 mov ebx, eax
// 0046cdcc  85ff                 test edi, edi
// 0046cdce  7d05                 jge 0x46cdd5
// 0046cdd0  e8376d3800           call 0x7f3b0c
// 0046cdd5  6aff                 push -1
// 0046cdd7  8d4701               lea eax, [edi + 1]
// 0046cdda  50                   push eax
// 0046cddb  8bce                 mov ecx, esi
// 0046cddd  e8be853e00           call 0x8553a0
// 0046cde2  8b4e04               mov ecx, dword ptr [esi + 4]
// 0046cde5  891cb9               mov dword ptr [ecx + edi*4], ebx
// 0046cde8  5b                   pop ebx
// 0046cde9  5f                   pop edi
// 0046cdea  5e                   pop esi
// 0046cdeb  c20800               ret 8
// 0046cdee  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 0046cdf4  81c6b4000000         add esi, 0xb4
// 0046cdfa  85ff                 test edi, edi
// 0046cdfc  7d05                 jge 0x46ce03
// 0046cdfe  e8096d3800           call 0x7f3b0c
// 0046ce03  6aff                 push -1
// 0046ce05  8d5701               lea edx, [edi + 1]
// 0046ce08  52                   push edx
// 0046ce09  8bce                 mov ecx, esi
// 0046ce0b  e890853e00           call 0x8553a0
// 0046ce10  8b4604               mov eax, dword ptr [esi + 4]
// 0046ce13  c704b800000000       mov dword ptr [eax + edi*4], 0
// 0046ce1a  5f                   pop edi
// 0046ce1b  5e                   pop esi
// 0046ce1c  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnBeginPrinting@CScintillaView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp

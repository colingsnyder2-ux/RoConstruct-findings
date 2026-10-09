// roc 2011-06 0048d1b0  unit: Scintilla::CScintillaView  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048d1b0
//
// 0048d1b0  8b442408             mov eax, dword ptr [esp + 8]
// 0048d1b4  56                   push esi
// 0048d1b5  8bf1                 mov esi, ecx
// 0048d1b7  8b08                 mov ecx, dword ptr [eax]
// 0048d1b9  8b5174               mov edx, dword ptr [ecx + 0x74]
// 0048d1bc  f6421401             test byte ptr [edx + 0x14], 1
// 0048d1c0  57                   push edi
// 0048d1c1  743b                 je 0x48d1fe
// 0048d1c3  53                   push ebx
// 0048d1c4  6a01                 push 1
// 0048d1c6  8d4e58               lea ecx, [esi + 0x58]
// 0048d1c9  e8e2d3ffff           call 0x48a5b0
// 0048d1ce  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 0048d1d4  81c6b4000000         add esi, 0xb4
// 0048d1da  8bd8                 mov ebx, eax
// 0048d1dc  85ff                 test edi, edi
// 0048d1de  7d05                 jge 0x48d1e5
// 0048d1e0  e825d13700           call 0x80a30a
// 0048d1e5  6aff                 push -1
// 0048d1e7  8d4701               lea eax, [edi + 1]
// 0048d1ea  50                   push eax
// 0048d1eb  8bce                 mov ecx, esi
// 0048d1ed  e84e193b00           call 0x83eb40
// 0048d1f2  8b4e04               mov ecx, dword ptr [esi + 4]
// 0048d1f5  891cb9               mov dword ptr [ecx + edi*4], ebx
// 0048d1f8  5b                   pop ebx
// 0048d1f9  5f                   pop edi
// 0048d1fa  5e                   pop esi
// 0048d1fb  c20800               ret 8
// 0048d1fe  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 0048d204  81c6b4000000         add esi, 0xb4
// 0048d20a  85ff                 test edi, edi
// 0048d20c  7d05                 jge 0x48d213
// 0048d20e  e8f7d03700           call 0x80a30a
// 0048d213  6aff                 push -1
// 0048d215  8d5701               lea edx, [edi + 1]
// 0048d218  52                   push edx
// 0048d219  8bce                 mov ecx, esi
// 0048d21b  e820193b00           call 0x83eb40
// 0048d220  8b4604               mov eax, dword ptr [esi + 4]
// 0048d223  c704b800000000       mov dword ptr [eax + edi*4], 0
// 0048d22a  5f                   pop edi
// 0048d22b  5e                   pop esi
// 0048d22c  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnBeginPrinting@CScintillaView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp

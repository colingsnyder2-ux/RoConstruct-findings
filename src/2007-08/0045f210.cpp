// roc 2007-08 0045f210  unit: Scintilla::CScintillaView  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045f210
//
// 0045f210  8b442408             mov eax, dword ptr [esp + 8]
// 0045f214  56                   push esi
// 0045f215  8bf1                 mov esi, ecx
// 0045f217  8b08                 mov ecx, dword ptr [eax]
// 0045f219  8b5174               mov edx, dword ptr [ecx + 0x74]
// 0045f21c  f6421401             test byte ptr [edx + 0x14], 1
// 0045f220  57                   push edi
// 0045f221  743b                 je 0x45f25e
// 0045f223  53                   push ebx
// 0045f224  6a01                 push 1
// 0045f226  8d4e58               lea ecx, [esi + 0x58]
// 0045f229  e8a2d5ffff           call 0x45c7d0
// 0045f22e  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 0045f234  81c6b4000000         add esi, 0xb4
// 0045f23a  85ff                 test edi, edi
// 0045f23c  8bd8                 mov ebx, eax
// 0045f23e  7d05                 jge 0x45f245
// 0045f240  e8db0c1d00           call 0x62ff20
// 0045f245  6aff                 push -1
// 0045f247  8d4701               lea eax, [edi + 1]
// 0045f24a  50                   push eax
// 0045f24b  8bce                 mov ecx, esi
// 0045f24d  e85e082a00           call 0x6ffab0
// 0045f252  8b4e04               mov ecx, dword ptr [esi + 4]
// 0045f255  891cb9               mov dword ptr [ecx + edi*4], ebx
// 0045f258  5b                   pop ebx
// 0045f259  5f                   pop edi
// 0045f25a  5e                   pop esi
// 0045f25b  c20800               ret 8
// 0045f25e  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 0045f264  81c6b4000000         add esi, 0xb4
// 0045f26a  85ff                 test edi, edi
// 0045f26c  7d05                 jge 0x45f273
// 0045f26e  e8ad0c1d00           call 0x62ff20
// 0045f273  6aff                 push -1
// 0045f275  8d5701               lea edx, [edi + 1]
// 0045f278  52                   push edx
// 0045f279  8bce                 mov ecx, esi
// 0045f27b  e830082a00           call 0x6ffab0
// 0045f280  8b4604               mov eax, dword ptr [esi + 4]
// 0045f283  c704b800000000       mov dword ptr [eax + edi*4], 0
// 0045f28a  5f                   pop edi
// 0045f28b  5e                   pop esi
// 0045f28c  c20800               ret 8
// library scintilla-mfc-1.20-vc8/ScintillaDocView.cpp (function ?OnBeginPrinting@CScintillaView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20-vc8 ScintillaDocView.cpp

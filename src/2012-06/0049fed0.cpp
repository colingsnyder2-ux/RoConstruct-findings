// roc 2012-06 0049fed0  unit: Scintilla::CScintillaView  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049fed0
//
// 0049fed0  8b442408             mov eax, dword ptr [esp + 8]
// 0049fed4  56                   push esi
// 0049fed5  8bf1                 mov esi, ecx
// 0049fed7  8b08                 mov ecx, dword ptr [eax]
// 0049fed9  8b5174               mov edx, dword ptr [ecx + 0x74]
// 0049fedc  f6421401             test byte ptr [edx + 0x14], 1
// 0049fee0  57                   push edi
// 0049fee1  743b                 je 0x49ff1e
// 0049fee3  53                   push ebx
// 0049fee4  6a01                 push 1
// 0049fee6  8d4e58               lea ecx, [esi + 0x58]
// 0049fee9  e8f2d3ffff           call 0x49d2e0
// 0049feee  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 0049fef4  81c6b4000000         add esi, 0xb4
// 0049fefa  8bd8                 mov ebx, eax
// 0049fefc  85ff                 test edi, edi
// 0049fefe  7d05                 jge 0x49ff05
// 0049ff00  e8bb244e00           call 0x9823c0
// 0049ff05  6aff                 push -1
// 0049ff07  8d4701               lea eax, [edi + 1]
// 0049ff0a  50                   push eax
// 0049ff0b  8bce                 mov ecx, esi
// 0049ff0d  e84e834f00           call 0x998260
// 0049ff12  8b4e04               mov ecx, dword ptr [esi + 4]
// 0049ff15  891cb9               mov dword ptr [ecx + edi*4], ebx
// 0049ff18  5b                   pop ebx
// 0049ff19  5f                   pop edi
// 0049ff1a  5e                   pop esi
// 0049ff1b  c20800               ret 8
// 0049ff1e  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 0049ff24  81c6b4000000         add esi, 0xb4
// 0049ff2a  85ff                 test edi, edi
// 0049ff2c  7d05                 jge 0x49ff33
// 0049ff2e  e88d244e00           call 0x9823c0
// 0049ff33  6aff                 push -1
// 0049ff35  8d5701               lea edx, [edi + 1]
// 0049ff38  52                   push edx
// 0049ff39  8bce                 mov ecx, esi
// 0049ff3b  e820834f00           call 0x998260
// 0049ff40  8b4604               mov eax, dword ptr [esi + 4]
// 0049ff43  c704b800000000       mov dword ptr [eax + edi*4], 0
// 0049ff4a  5f                   pop edi
// 0049ff4b  5e                   pop esi
// 0049ff4c  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnBeginPrinting@CScintillaView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp

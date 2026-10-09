// roc 2007-03 0045cb30  unit: seg_00450000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045cb30
//
// 0045cb30  8b442408             mov eax, dword ptr [esp + 8]
// 0045cb34  56                   push esi
// 0045cb35  8bf1                 mov esi, ecx
// 0045cb37  8b08                 mov ecx, dword ptr [eax]
// 0045cb39  8b5174               mov edx, dword ptr [ecx + 0x74]
// 0045cb3c  f6421401             test byte ptr [edx + 0x14], 1
// 0045cb40  57                   push edi
// 0045cb41  743b                 je 0x45cb7e
// 0045cb43  53                   push ebx
// 0045cb44  6a01                 push 1
// 0045cb46  8d4e58               lea ecx, [esi + 0x58]
// 0045cb49  e812d4ffff           call 0x459f60
// 0045cb4e  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 0045cb54  81c6b4000000         add esi, 0xb4
// 0045cb5a  85ff                 test edi, edi
// 0045cb5c  8bd8                 mov ebx, eax
// 0045cb5e  7d05                 jge 0x45cb65
// 0045cb60  e849181c00           call 0x61e3ae
// 0045cb65  6aff                 push -1
// 0045cb67  8d4701               lea eax, [edi + 1]
// 0045cb6a  50                   push eax
// 0045cb6b  8bce                 mov ecx, esi
// 0045cb6d  e8aee6ffff           call 0x45b220
// 0045cb72  8b4e04               mov ecx, dword ptr [esi + 4]
// 0045cb75  891cb9               mov dword ptr [ecx + edi*4], ebx
// 0045cb78  5b                   pop ebx
// 0045cb79  5f                   pop edi
// 0045cb7a  5e                   pop esi
// 0045cb7b  c20800               ret 8
// 0045cb7e  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 0045cb84  81c6b4000000         add esi, 0xb4
// 0045cb8a  85ff                 test edi, edi
// 0045cb8c  7d05                 jge 0x45cb93
// 0045cb8e  e81b181c00           call 0x61e3ae
// 0045cb93  6aff                 push -1
// 0045cb95  8d5701               lea edx, [edi + 1]
// 0045cb98  52                   push edx
// 0045cb99  8bce                 mov ecx, esi
// 0045cb9b  e880e6ffff           call 0x45b220
// 0045cba0  8b4604               mov eax, dword ptr [esi + 4]
// 0045cba3  c704b800000000       mov dword ptr [eax + edi*4], 0
// 0045cbaa  5f                   pop edi
// 0045cbab  5e                   pop esi
// 0045cbac  c20800               ret 8
// library scintilla-mfc-1.20-vc8/ScintillaDocView.cpp (function ?OnBeginPrinting@CScintillaView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20-vc8 ScintillaDocView.cpp

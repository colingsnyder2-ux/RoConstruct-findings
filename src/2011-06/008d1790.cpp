// roc 2011-06 008d1790  unit: CXTPShadowsManager::CShadowWnd  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d1790
//
// 008d1790  83ec10               sub esp, 0x10
// 008d1793  57                   push edi
// 008d1794  8b7908               mov edi, dword ptr [ecx + 8]
// 008d1797  85ff                 test edi, edi
// 008d1799  0f8496000000         je 0x8d1835
// 008d179f  55                   push ebp
// 008d17a0  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008d17a4  56                   push esi
// 008d17a5  8bc7                 mov eax, edi
// 008d17a7  8b7008               mov esi, dword ptr [eax + 8]
// 008d17aa  8b3f                 mov edi, dword ptr [edi]
// 008d17ac  3b6e68               cmp ebp, dword ptr [esi + 0x68]
// 008d17af  757a                 jne 0x8d182b
// 008d17b1  8b4620               mov eax, dword ptr [esi + 0x20]
// 008d17b4  85c0                 test eax, eax
// 008d17b6  7473                 je 0x8d182b
// 008d17b8  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 008d17bc  756d                 jne 0x8d182b
// 008d17be  837e6000             cmp dword ptr [esi + 0x60], 0
// 008d17c2  7412                 je 0x8d17d6
// 008d17c4  6a00                 push 0
// 008d17c6  6a00                 push 0
// 008d17c8  50                   push eax
// 008d17c9  ff15041ca400         call dword ptr [0xa41c04]
// 008d17cf  c7466000000000       mov dword ptr [esi + 0x60], 0
// 008d17d6  56                   push esi
// 008d17d7  8d4c2410             lea ecx, [esp + 0x10]
// 008d17db  e850b5f8ff           call 0x85cd30
// 008d17e0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d17e4  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d17e8  8b542414             mov edx, dword ptr [esp + 0x14]
// 008d17ec  2bc8                 sub ecx, eax
// 008d17ee  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008d17f2  6814020000           push 0x214
// 008d17f7  7415                 je 0x8d180e
// 008d17f9  51                   push ecx
// 008d17fa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d17fe  2bd1                 sub edx, ecx
// 008d1800  0354242c             add edx, dword ptr [esp + 0x2c]
// 008d1804  52                   push edx
// 008d1805  8b542434             mov edx, dword ptr [esp + 0x34]
// 008d1809  03d0                 add edx, eax
// 008d180b  52                   push edx
// 008d180c  eb13                 jmp 0x8d1821
// 008d180e  034c242c             add ecx, dword ptr [esp + 0x2c]
// 008d1812  51                   push ecx
// 008d1813  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d1817  2bd1                 sub edx, ecx
// 008d1819  52                   push edx
// 008d181a  50                   push eax
// 008d181b  8b442434             mov eax, dword ptr [esp + 0x34]
// 008d181f  03c8                 add ecx, eax
// 008d1821  51                   push ecx
// 008d1822  6a00                 push 0
// 008d1824  8bce                 mov ecx, esi
// 008d1826  e8ff8bf3ff           call 0x80a42a
// 008d182b  85ff                 test edi, edi
// 008d182d  0f8572ffffff         jne 0x8d17a5
// 008d1833  5e                   pop esi
// 008d1834  5d                   pop ebp
// 008d1835  5f                   pop edi
// 008d1836  83c410               add esp, 0x10
// 008d1839  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?OffsetShadow@CXTPShadowsManager@@QAEXPAVCXTPCommandBar@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp

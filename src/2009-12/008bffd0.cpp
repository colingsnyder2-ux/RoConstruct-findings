// roc 2009-12 008bffd0  unit: CXTPShadowsManager::CShadowWnd  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bffd0
//
// 008bffd0  83ec10               sub esp, 0x10
// 008bffd3  57                   push edi
// 008bffd4  8b7908               mov edi, dword ptr [ecx + 8]
// 008bffd7  85ff                 test edi, edi
// 008bffd9  0f8496000000         je 0x8c0075
// 008bffdf  55                   push ebp
// 008bffe0  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008bffe4  56                   push esi
// 008bffe5  8bc7                 mov eax, edi
// 008bffe7  8b7008               mov esi, dword ptr [eax + 8]
// 008bffea  8b3f                 mov edi, dword ptr [edi]
// 008bffec  3b6e68               cmp ebp, dword ptr [esi + 0x68]
// 008bffef  757a                 jne 0x8c006b
// 008bfff1  8b4620               mov eax, dword ptr [esi + 0x20]
// 008bfff4  85c0                 test eax, eax
// 008bfff6  7473                 je 0x8c006b
// 008bfff8  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 008bfffc  756d                 jne 0x8c006b
// 008bfffe  837e6000             cmp dword ptr [esi + 0x60], 0
// 008c0002  7412                 je 0x8c0016
// 008c0004  6a00                 push 0
// 008c0006  6a00                 push 0
// 008c0008  50                   push eax
// 008c0009  ff1554cb9800         call dword ptr [0x98cb54]
// 008c000f  c7466000000000       mov dword ptr [esi + 0x60], 0
// 008c0016  56                   push esi
// 008c0017  8d4c2410             lea ecx, [esp + 0x10]
// 008c001b  e850b2f8ff           call 0x84b270
// 008c0020  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008c0024  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c0028  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c002c  2bc8                 sub ecx, eax
// 008c002e  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008c0032  6814020000           push 0x214
// 008c0037  7415                 je 0x8c004e
// 008c0039  51                   push ecx
// 008c003a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c003e  2bd1                 sub edx, ecx
// 008c0040  0354242c             add edx, dword ptr [esp + 0x2c]
// 008c0044  52                   push edx
// 008c0045  8b542434             mov edx, dword ptr [esp + 0x34]
// 008c0049  03d0                 add edx, eax
// 008c004b  52                   push edx
// 008c004c  eb13                 jmp 0x8c0061
// 008c004e  034c242c             add ecx, dword ptr [esp + 0x2c]
// 008c0052  51                   push ecx
// 008c0053  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c0057  2bd1                 sub edx, ecx
// 008c0059  52                   push edx
// 008c005a  50                   push eax
// 008c005b  8b442434             mov eax, dword ptr [esp + 0x34]
// 008c005f  03c8                 add ecx, eax
// 008c0061  51                   push ecx
// 008c0062  6a00                 push 0
// 008c0064  8bce                 mov ecx, esi
// 008c0066  e8c13bf3ff           call 0x7f3c2c
// 008c006b  85ff                 test edi, edi
// 008c006d  0f8572ffffff         jne 0x8bffe5
// 008c0073  5e                   pop esi
// 008c0074  5d                   pop ebp
// 008c0075  5f                   pop edi
// 008c0076  83c410               add esp, 0x10
// 008c0079  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?OffsetShadow@CXTPShadowsManager@@QAEXPAVCXTPCommandBar@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp

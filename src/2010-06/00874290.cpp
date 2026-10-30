// roc 2010-06 00874290  unit: CXTPShadowsManager::CShadowWnd  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00874290
//
// 00874290  83ec10               sub esp, 0x10
// 00874293  57                   push edi
// 00874294  8b7908               mov edi, dword ptr [ecx + 8]
// 00874297  85ff                 test edi, edi
// 00874299  0f8496000000         je 0x874335
// 0087429f  55                   push ebp
// 008742a0  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008742a4  56                   push esi
// 008742a5  8bc7                 mov eax, edi
// 008742a7  8b7008               mov esi, dword ptr [eax + 8]
// 008742aa  8b3f                 mov edi, dword ptr [edi]
// 008742ac  3b6e68               cmp ebp, dword ptr [esi + 0x68]
// 008742af  757a                 jne 0x87432b
// 008742b1  8b4620               mov eax, dword ptr [esi + 0x20]
// 008742b4  85c0                 test eax, eax
// 008742b6  7473                 je 0x87432b
// 008742b8  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 008742bc  756d                 jne 0x87432b
// 008742be  837e6000             cmp dword ptr [esi + 0x60], 0
// 008742c2  7412                 je 0x8742d6
// 008742c4  6a00                 push 0
// 008742c6  6a00                 push 0
// 008742c8  50                   push eax
// 008742c9  ff150cba9e00         call dword ptr [0x9eba0c]
// 008742cf  c7466000000000       mov dword ptr [esi + 0x60], 0
// 008742d6  56                   push esi
// 008742d7  8d4c2410             lea ecx, [esp + 0x10]
// 008742db  e8d0aff8ff           call 0x7ff2b0
// 008742e0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008742e4  8b442410             mov eax, dword ptr [esp + 0x10]
// 008742e8  8b542414             mov edx, dword ptr [esp + 0x14]
// 008742ec  2bc8                 sub ecx, eax
// 008742ee  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008742f2  6814020000           push 0x214
// 008742f7  7415                 je 0x87430e
// 008742f9  51                   push ecx
// 008742fa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008742fe  2bd1                 sub edx, ecx
// 00874300  0354242c             add edx, dword ptr [esp + 0x2c]
// 00874304  52                   push edx
// 00874305  8b542434             mov edx, dword ptr [esp + 0x34]
// 00874309  03d0                 add edx, eax
// 0087430b  52                   push edx
// 0087430c  eb13                 jmp 0x874321
// 0087430e  034c242c             add ecx, dword ptr [esp + 0x2c]
// 00874312  51                   push ecx
// 00874313  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00874317  2bd1                 sub edx, ecx
// 00874319  52                   push edx
// 0087431a  50                   push eax
// 0087431b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0087431f  03c8                 add ecx, eax
// 00874321  51                   push ecx
// 00874322  6a00                 push 0
// 00874324  8bce                 mov ecx, esi
// 00874326  e8413af3ff           call 0x7a7d6c
// 0087432b  85ff                 test edi, edi
// 0087432d  0f8572ffffff         jne 0x8742a5
// 00874333  5e                   pop esi
// 00874334  5d                   pop ebp
// 00874335  5f                   pop edi
// 00874336  83c410               add esp, 0x10
// 00874339  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?OffsetShadow@CXTPShadowsManager@@QAEXPAVCXTPCommandBar@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp

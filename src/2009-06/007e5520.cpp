// roc 2009-06 007e5520  unit: CXTPShadowsManager::CShadowWnd  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e5520
//
// 007e5520  83ec10               sub esp, 0x10
// 007e5523  57                   push edi
// 007e5524  8b7908               mov edi, dword ptr [ecx + 8]
// 007e5527  85ff                 test edi, edi
// 007e5529  0f8496000000         je 0x7e55c5
// 007e552f  55                   push ebp
// 007e5530  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007e5534  56                   push esi
// 007e5535  8bc7                 mov eax, edi
// 007e5537  8b7008               mov esi, dword ptr [eax + 8]
// 007e553a  8b3f                 mov edi, dword ptr [edi]
// 007e553c  3b6e68               cmp ebp, dword ptr [esi + 0x68]
// 007e553f  757a                 jne 0x7e55bb
// 007e5541  8b4620               mov eax, dword ptr [esi + 0x20]
// 007e5544  85c0                 test eax, eax
// 007e5546  7473                 je 0x7e55bb
// 007e5548  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 007e554c  756d                 jne 0x7e55bb
// 007e554e  837e6000             cmp dword ptr [esi + 0x60], 0
// 007e5552  7412                 je 0x7e5566
// 007e5554  6a00                 push 0
// 007e5556  6a00                 push 0
// 007e5558  50                   push eax
// 007e5559  ff1584ec8900         call dword ptr [0x89ec84]
// 007e555f  c7466000000000       mov dword ptr [esi + 0x60], 0
// 007e5566  56                   push esi
// 007e5567  8d4c2410             lea ecx, [esp + 0x10]
// 007e556b  e800aff8ff           call 0x770470
// 007e5570  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007e5574  8b442410             mov eax, dword ptr [esp + 0x10]
// 007e5578  8b542414             mov edx, dword ptr [esp + 0x14]
// 007e557c  2bc8                 sub ecx, eax
// 007e557e  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 007e5582  6814020000           push 0x214
// 007e5587  7415                 je 0x7e559e
// 007e5589  51                   push ecx
// 007e558a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e558e  2bd1                 sub edx, ecx
// 007e5590  0354242c             add edx, dword ptr [esp + 0x2c]
// 007e5594  52                   push edx
// 007e5595  8b542434             mov edx, dword ptr [esp + 0x34]
// 007e5599  03d0                 add edx, eax
// 007e559b  52                   push edx
// 007e559c  eb13                 jmp 0x7e55b1
// 007e559e  034c242c             add ecx, dword ptr [esp + 0x2c]
// 007e55a2  51                   push ecx
// 007e55a3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e55a7  2bd1                 sub edx, ecx
// 007e55a9  52                   push edx
// 007e55aa  50                   push eax
// 007e55ab  8b442434             mov eax, dword ptr [esp + 0x34]
// 007e55af  03c8                 add ecx, eax
// 007e55b1  51                   push ecx
// 007e55b2  6a00                 push 0
// 007e55b4  8bce                 mov ecx, esi
// 007e55b6  e84938f3ff           call 0x718e04
// 007e55bb  85ff                 test edi, edi
// 007e55bd  0f8572ffffff         jne 0x7e5535
// 007e55c3  5e                   pop esi
// 007e55c4  5d                   pop ebp
// 007e55c5  5f                   pop edi
// 007e55c6  83c410               add esp, 0x10
// 007e55c9  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?OffsetShadow@CXTPShadowsManager@@QAEXPAVCXTPCommandBar@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp

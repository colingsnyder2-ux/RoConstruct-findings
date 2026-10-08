// roc 2012-06 00a49a50  unit: CXTPShadowsManager::CShadowWnd  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a49a50
//
// 00a49a50  83ec10               sub esp, 0x10
// 00a49a53  57                   push edi
// 00a49a54  8b7908               mov edi, dword ptr [ecx + 8]
// 00a49a57  85ff                 test edi, edi
// 00a49a59  0f8496000000         je 0xa49af5
// 00a49a5f  55                   push ebp
// 00a49a60  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00a49a64  56                   push esi
// 00a49a65  8bc7                 mov eax, edi
// 00a49a67  8b7008               mov esi, dword ptr [eax + 8]
// 00a49a6a  8b3f                 mov edi, dword ptr [edi]
// 00a49a6c  3b6e68               cmp ebp, dword ptr [esi + 0x68]
// 00a49a6f  757a                 jne 0xa49aeb
// 00a49a71  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a49a74  85c0                 test eax, eax
// 00a49a76  7473                 je 0xa49aeb
// 00a49a78  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 00a49a7c  756d                 jne 0xa49aeb
// 00a49a7e  837e6000             cmp dword ptr [esi + 0x60], 0
// 00a49a82  7412                 je 0xa49a96
// 00a49a84  6a00                 push 0
// 00a49a86  6a00                 push 0
// 00a49a88  50                   push eax
// 00a49a89  ff15983cb200         call dword ptr [0xb23c98]
// 00a49a8f  c7466000000000       mov dword ptr [esi + 0x60], 0
// 00a49a96  56                   push esi
// 00a49a97  8d4c2410             lea ecx, [esp + 0x10]
// 00a49a9b  e8a0b6f8ff           call 0x9d5140
// 00a49aa0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a49aa4  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a49aa8  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a49aac  2bc8                 sub ecx, eax
// 00a49aae  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00a49ab2  6814020000           push 0x214
// 00a49ab7  7415                 je 0xa49ace
// 00a49ab9  51                   push ecx
// 00a49aba  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a49abe  2bd1                 sub edx, ecx
// 00a49ac0  0354242c             add edx, dword ptr [esp + 0x2c]
// 00a49ac4  52                   push edx
// 00a49ac5  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a49ac9  03d0                 add edx, eax
// 00a49acb  52                   push edx
// 00a49acc  eb13                 jmp 0xa49ae1
// 00a49ace  034c242c             add ecx, dword ptr [esp + 0x2c]
// 00a49ad2  51                   push ecx
// 00a49ad3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a49ad7  2bd1                 sub edx, ecx
// 00a49ad9  52                   push edx
// 00a49ada  50                   push eax
// 00a49adb  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a49adf  03c8                 add ecx, eax
// 00a49ae1  51                   push ecx
// 00a49ae2  6a00                 push 0
// 00a49ae4  8bce                 mov ecx, esi
// 00a49ae6  e8e989f3ff           call 0x9824d4
// 00a49aeb  85ff                 test edi, edi
// 00a49aed  0f8572ffffff         jne 0xa49a65
// 00a49af3  5e                   pop esi
// 00a49af4  5d                   pop ebp
// 00a49af5  5f                   pop edi
// 00a49af6  83c410               add esp, 0x10
// 00a49af9  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?OffsetShadow@CXTPShadowsManager@@QAEXPAVCXTPCommandBar@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp

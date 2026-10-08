// roc 2012-06 00a69dc0  unit: CXTCaptionButtonThemeOfficeXP  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a69dc0
//
// 00a69dc0  83ec10               sub esp, 0x10
// 00a69dc3  53                   push ebx
// 00a69dc4  55                   push ebp
// 00a69dc5  56                   push esi
// 00a69dc6  8b742420             mov esi, dword ptr [esp + 0x20]
// 00a69dca  8b4618               mov eax, dword ptr [esi + 0x18]
// 00a69dcd  57                   push edi
// 00a69dce  50                   push eax
// 00a69dcf  8bf9                 mov edi, ecx
// 00a69dd1  e89cf70200           call 0xa99572
// 00a69dd6  8d4e1c               lea ecx, [esi + 0x1c]
// 00a69dd9  51                   push ecx
// 00a69dda  8d542414             lea edx, [esp + 0x14]
// 00a69dde  52                   push edx
// 00a69ddf  8be8                 mov ebp, eax
// 00a69de1  ff15ec3ab200         call dword ptr [0xb23aec]
// 00a69de7  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00a69dea  8b742428             mov esi, dword ptr [esp + 0x28]
// 00a69dee  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00a69df5  0f8582000000         jne 0xa69e7d
// 00a69dfb  ff157c3ab200         call dword ptr [0xb23a7c]
// 00a69e01  3b4620               cmp eax, dword ptr [esi + 0x20]
// 00a69e04  7477                 je 0xa69e7d
// 00a69e06  f6c301               test bl, 1
// 00a69e09  7577                 jne 0xa69e82
// 00a69e0b  8bb6ac000000         mov esi, dword ptr [esi + 0xac]
// 00a69e11  85f6                 test esi, esi
// 00a69e13  7504                 jne 0xa69e19
// 00a69e15  33c0                 xor eax, eax
// 00a69e17  eb03                 jmp 0xa69e1c
// 00a69e19  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a69e1c  50                   push eax
// 00a69e1d  ff15143bb200         call dword ptr [0xb23b14]
// 00a69e23  85c0                 test eax, eax
// 00a69e25  7406                 je 0xa69e2d
// 00a69e27  8b4674               mov eax, dword ptr [esi + 0x74]
// 00a69e2a  894728               mov dword ptr [edi + 0x28], eax
// 00a69e2d  8b4728               mov eax, dword ptr [edi + 0x28]
// 00a69e30  83f8ff               cmp eax, -1
// 00a69e33  7503                 jne 0xa69e38
// 00a69e35  8b4724               mov eax, dword ptr [edi + 0x24]
// 00a69e38  50                   push eax
// 00a69e39  8d4c2414             lea ecx, [esp + 0x14]
// 00a69e3d  51                   push ecx
// 00a69e3e  8bcd                 mov ecx, ebp
// 00a69e40  e86790f1ff           call 0x982eac
// 00a69e45  83bf8000000000       cmp dword ptr [edi + 0x80], 0
// 00a69e4c  0f8480000000         je 0xa69ed2
// 00a69e52  8b4758               mov eax, dword ptr [edi + 0x58]
// 00a69e55  83f8ff               cmp eax, -1
// 00a69e58  7505                 jne 0xa69e5f
// 00a69e5a  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 00a69e5d  eb02                 jmp 0xa69e61
// 00a69e5f  8bc8                 mov ecx, eax
// 00a69e61  83f8ff               cmp eax, -1
// 00a69e64  750c                 jne 0xa69e72
// 00a69e66  8b7f54               mov edi, dword ptr [edi + 0x54]
// 00a69e69  51                   push ecx
// 00a69e6a  57                   push edi
// 00a69e6b  8d542418             lea edx, [esp + 0x18]
// 00a69e6f  52                   push edx
// 00a69e70  eb59                 jmp 0xa69ecb
// 00a69e72  51                   push ecx
// 00a69e73  8bf8                 mov edi, eax
// 00a69e75  57                   push edi
// 00a69e76  8d542418             lea edx, [esp + 0x18]
// 00a69e7a  52                   push edx
// 00a69e7b  eb4e                 jmp 0xa69ecb
// 00a69e7d  f6c301               test bl, 1
// 00a69e80  7409                 je 0xa69e8b
// 00a69e82  e8d939f5ff           call 0x9bd860
// 00a69e87  6a21                 push 0x21
// 00a69e89  eb07                 jmp 0xa69e92
// 00a69e8b  e8d039f5ff           call 0x9bd860
// 00a69e90  6a1f                 push 0x1f
// 00a69e92  8bc8                 mov ecx, eax
// 00a69e94  e84731f5ff           call 0x9bcfe0
// 00a69e99  50                   push eax
// 00a69e9a  8d442414             lea eax, [esp + 0x14]
// 00a69e9e  50                   push eax
// 00a69e9f  8bcd                 mov ecx, ebp
// 00a69ea1  e80690f1ff           call 0x982eac
// 00a69ea6  e8b539f5ff           call 0x9bd860
// 00a69eab  6a20                 push 0x20
// 00a69ead  8bc8                 mov ecx, eax
// 00a69eaf  e82c31f5ff           call 0x9bcfe0
// 00a69eb4  8bf0                 mov esi, eax
// 00a69eb6  e8a539f5ff           call 0x9bd860
// 00a69ebb  6a20                 push 0x20
// 00a69ebd  8bc8                 mov ecx, eax
// 00a69ebf  e81c31f5ff           call 0x9bcfe0
// 00a69ec4  56                   push esi
// 00a69ec5  50                   push eax
// 00a69ec6  8d4c2418             lea ecx, [esp + 0x18]
// 00a69eca  51                   push ecx
// 00a69ecb  8bcd                 mov ecx, ebp
// 00a69ecd  e8d48ff1ff           call 0x982ea6
// 00a69ed2  5f                   pop edi
// 00a69ed3  5e                   pop esi
// 00a69ed4  5d                   pop ebp
// 00a69ed5  b801000000           mov eax, 1
// 00a69eda  5b                   pop ebx
// 00a69edb  83c410               add esp, 0x10
// 00a69ede  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ?DrawButtonThemeBackground@CXTCaptionButtonThemeOfficeXP@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp

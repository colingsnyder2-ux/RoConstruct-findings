// from server: 100% by auto
// roc 2007-08 00713c50  unit: CXTCaptionTheme  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00713c50
//
// 00713c50  83ec10               sub esp, 0x10
// 00713c53  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00713c57  8b5004               mov edx, dword ptr [eax + 4]
// 00713c5a  53                   push ebx
// 00713c5b  55                   push ebp
// 00713c5c  56                   push esi
// 00713c5d  8bf1                 mov esi, ecx
// 00713c5f  8b08                 mov ecx, dword ptr [eax]
// 00713c61  894c240c             mov dword ptr [esp + 0xc], ecx
// 00713c65  8b4808               mov ecx, dword ptr [eax + 8]
// 00713c68  57                   push edi
// 00713c69  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00713c6d  89542414             mov dword ptr [esp + 0x14], edx
// 00713c71  8b500c               mov edx, dword ptr [eax + 0xc]
// 00713c74  894c2418             mov dword ptr [esp + 0x18], ecx
// 00713c78  6a01                 push 1
// 00713c7a  8bcf                 mov ecx, edi
// 00713c7c  89542420             mov dword ptr [esp + 0x20], edx
// 00713c80  e863470200           call 0x7383e8
// 00713c85  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00713c89  8b4370               mov eax, dword ptr [ebx + 0x70]
// 00713c8c  50                   push eax
// 00713c8d  8d4c2414             lea ecx, [esp + 0x14]
// 00713c91  51                   push ecx
// 00713c92  8bcf                 mov ecx, edi
// 00713c94  e817ccf1ff           call 0x6308b0
// 00713c99  8b83c8000000         mov eax, dword ptr [ebx + 0xc8]
// 00713c9f  a801                 test al, 1
// 00713ca1  8b2d90ed7700         mov ebp, dword ptr [0x77ed90]
// 00713ca7  746c                 je 0x713d15
// 00713ca9  8b4628               mov eax, dword ptr [esi + 0x28]
// 00713cac  83f8ff               cmp eax, -1
// 00713caf  7505                 jne 0x713cb6
// 00713cb1  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00713cb4  eb02                 jmp 0x713cb8
// 00713cb6  8bc8                 mov ecx, eax
// 00713cb8  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00713cbb  83f8ff               cmp eax, -1
// 00713cbe  7503                 jne 0x713cc3
// 00713cc0  8b4618               mov eax, dword ptr [esi + 0x18]
// 00713cc3  51                   push ecx
// 00713cc4  50                   push eax
// 00713cc5  8d542418             lea edx, [esp + 0x18]
// 00713cc9  52                   push edx
// 00713cca  8bcf                 mov ecx, edi
// 00713ccc  e8d9cbf1ff           call 0x6308aa
// 00713cd1  6aff                 push -1
// 00713cd3  6aff                 push -1
// 00713cd5  8d442418             lea eax, [esp + 0x18]
// 00713cd9  50                   push eax
// 00713cda  ffd5                 call ebp
// 00713cdc  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00713cdf  83f8ff               cmp eax, -1
// 00713ce2  7503                 jne 0x713ce7
// 00713ce4  8b4618               mov eax, dword ptr [esi + 0x18]
// 00713ce7  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00713cea  83f9ff               cmp ecx, -1
// 00713ced  7505                 jne 0x713cf4
// 00713cef  8b7624               mov esi, dword ptr [esi + 0x24]
// 00713cf2  eb02                 jmp 0x713cf6
// 00713cf4  8bf1                 mov esi, ecx
// 00713cf6  50                   push eax
// 00713cf7  56                   push esi
// 00713cf8  8d4c2418             lea ecx, [esp + 0x18]
// 00713cfc  51                   push ecx
// 00713cfd  8bcf                 mov ecx, edi
// 00713cff  e8a6cbf1ff           call 0x6308aa
// 00713d04  837b6c00             cmp dword ptr [ebx + 0x6c], 0
// 00713d08  754c                 jne 0x713d56
// 00713d0a  6aff                 push -1
// 00713d0c  6aff                 push -1
// 00713d0e  8d542418             lea edx, [esp + 0x18]
// 00713d12  52                   push edx
// 00713d13  eb3f                 jmp 0x713d54
// 00713d15  a802                 test al, 2
// 00713d17  743d                 je 0x713d56
// 00713d19  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00713d1c  83f8ff               cmp eax, -1
// 00713d1f  7505                 jne 0x713d26
// 00713d21  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00713d24  eb02                 jmp 0x713d28
// 00713d26  8bc8                 mov ecx, eax
// 00713d28  8b4628               mov eax, dword ptr [esi + 0x28]
// 00713d2b  83f8ff               cmp eax, -1
// 00713d2e  7505                 jne 0x713d35
// 00713d30  8b7624               mov esi, dword ptr [esi + 0x24]
// 00713d33  eb02                 jmp 0x713d37
// 00713d35  8bf0                 mov esi, eax
// 00713d37  51                   push ecx
// 00713d38  56                   push esi
// 00713d39  8d442418             lea eax, [esp + 0x18]
// 00713d3d  50                   push eax
// 00713d3e  8bcf                 mov ecx, edi
// 00713d40  e865cbf1ff           call 0x6308aa
// 00713d45  837b6c00             cmp dword ptr [ebx + 0x6c], 0
// 00713d49  750b                 jne 0x713d56
// 00713d4b  6aff                 push -1
// 00713d4d  6aff                 push -1
// 00713d4f  8d4c2418             lea ecx, [esp + 0x18]
// 00713d53  51                   push ecx
// 00713d54  ffd5                 call ebp
// 00713d56  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 00713d59  f7d8                 neg eax
// 00713d5b  50                   push eax
// 00713d5c  50                   push eax
// 00713d5d  8d542418             lea edx, [esp + 0x18]
// 00713d61  52                   push edx
// 00713d62  ffd5                 call ebp
// 00713d64  8b4374               mov eax, dword ptr [ebx + 0x74]
// 00713d67  50                   push eax
// 00713d68  8d4c2414             lea ecx, [esp + 0x14]
// 00713d6c  51                   push ecx
// 00713d6d  8bcf                 mov ecx, edi
// 00713d6f  e83ccbf1ff           call 0x6308b0
// 00713d74  5f                   pop edi
// 00713d75  5e                   pop esi
// 00713d76  5d                   pop ebp
// 00713d77  5b                   pop ebx
// 00713d78  83c410               add esp, 0x10
// 00713d7b  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTCaptionTheme.cpp (function ?DrawCaptionBack@CXTCaptionTheme@@UAEXPAVCDC@@PAVCXTCaption@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaptionTheme.cpp

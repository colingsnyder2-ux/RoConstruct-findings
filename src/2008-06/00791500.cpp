// roc 2008-06 00791500  unit: CXTCaptionTheme  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00791500
//
// 00791500  83ec10               sub esp, 0x10
// 00791503  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00791507  8b5004               mov edx, dword ptr [eax + 4]
// 0079150a  53                   push ebx
// 0079150b  55                   push ebp
// 0079150c  56                   push esi
// 0079150d  8bf1                 mov esi, ecx
// 0079150f  8b08                 mov ecx, dword ptr [eax]
// 00791511  894c240c             mov dword ptr [esp + 0xc], ecx
// 00791515  8b4808               mov ecx, dword ptr [eax + 8]
// 00791518  57                   push edi
// 00791519  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0079151d  89542414             mov dword ptr [esp + 0x14], edx
// 00791521  8b500c               mov edx, dword ptr [eax + 0xc]
// 00791524  894c2418             mov dword ptr [esp + 0x18], ecx
// 00791528  6a01                 push 1
// 0079152a  8bcf                 mov ecx, edi
// 0079152c  89542420             mov dword ptr [esp + 0x20], edx
// 00791530  e8edaa0200           call 0x7bc022
// 00791535  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00791539  8b4370               mov eax, dword ptr [ebx + 0x70]
// 0079153c  50                   push eax
// 0079153d  8d4c2414             lea ecx, [esp + 0x14]
// 00791541  51                   push ecx
// 00791542  8bcf                 mov ecx, edi
// 00791544  e815fef0ff           call 0x6a135e
// 00791549  8b83c8000000         mov eax, dword ptr [ebx + 0xc8]
// 0079154f  8b2d282d8000         mov ebp, dword ptr [0x802d28]
// 00791555  a801                 test al, 1
// 00791557  746c                 je 0x7915c5
// 00791559  8b4628               mov eax, dword ptr [esi + 0x28]
// 0079155c  83f8ff               cmp eax, -1
// 0079155f  7505                 jne 0x791566
// 00791561  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00791564  eb02                 jmp 0x791568
// 00791566  8bc8                 mov ecx, eax
// 00791568  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0079156b  83f8ff               cmp eax, -1
// 0079156e  7503                 jne 0x791573
// 00791570  8b4618               mov eax, dword ptr [esi + 0x18]
// 00791573  51                   push ecx
// 00791574  50                   push eax
// 00791575  8d542418             lea edx, [esp + 0x18]
// 00791579  52                   push edx
// 0079157a  8bcf                 mov ecx, edi
// 0079157c  e8d7fdf0ff           call 0x6a1358
// 00791581  6aff                 push -1
// 00791583  6aff                 push -1
// 00791585  8d442418             lea eax, [esp + 0x18]
// 00791589  50                   push eax
// 0079158a  ffd5                 call ebp
// 0079158c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0079158f  83f8ff               cmp eax, -1
// 00791592  7503                 jne 0x791597
// 00791594  8b4618               mov eax, dword ptr [esi + 0x18]
// 00791597  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0079159a  83f9ff               cmp ecx, -1
// 0079159d  7505                 jne 0x7915a4
// 0079159f  8b7624               mov esi, dword ptr [esi + 0x24]
// 007915a2  eb02                 jmp 0x7915a6
// 007915a4  8bf1                 mov esi, ecx
// 007915a6  50                   push eax
// 007915a7  56                   push esi
// 007915a8  8d4c2418             lea ecx, [esp + 0x18]
// 007915ac  51                   push ecx
// 007915ad  8bcf                 mov ecx, edi
// 007915af  e8a4fdf0ff           call 0x6a1358
// 007915b4  837b6c00             cmp dword ptr [ebx + 0x6c], 0
// 007915b8  754c                 jne 0x791606
// 007915ba  6aff                 push -1
// 007915bc  6aff                 push -1
// 007915be  8d542418             lea edx, [esp + 0x18]
// 007915c2  52                   push edx
// 007915c3  eb3f                 jmp 0x791604
// 007915c5  a802                 test al, 2
// 007915c7  743d                 je 0x791606
// 007915c9  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007915cc  83f8ff               cmp eax, -1
// 007915cf  7505                 jne 0x7915d6
// 007915d1  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007915d4  eb02                 jmp 0x7915d8
// 007915d6  8bc8                 mov ecx, eax
// 007915d8  8b4628               mov eax, dword ptr [esi + 0x28]
// 007915db  83f8ff               cmp eax, -1
// 007915de  7505                 jne 0x7915e5
// 007915e0  8b7624               mov esi, dword ptr [esi + 0x24]
// 007915e3  eb02                 jmp 0x7915e7
// 007915e5  8bf0                 mov esi, eax
// 007915e7  51                   push ecx
// 007915e8  56                   push esi
// 007915e9  8d442418             lea eax, [esp + 0x18]
// 007915ed  50                   push eax
// 007915ee  8bcf                 mov ecx, edi
// 007915f0  e863fdf0ff           call 0x6a1358
// 007915f5  837b6c00             cmp dword ptr [ebx + 0x6c], 0
// 007915f9  750b                 jne 0x791606
// 007915fb  6aff                 push -1
// 007915fd  6aff                 push -1
// 007915ff  8d4c2418             lea ecx, [esp + 0x18]
// 00791603  51                   push ecx
// 00791604  ffd5                 call ebp
// 00791606  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 00791609  f7d8                 neg eax
// 0079160b  50                   push eax
// 0079160c  50                   push eax
// 0079160d  8d542418             lea edx, [esp + 0x18]
// 00791611  52                   push edx
// 00791612  ffd5                 call ebp
// 00791614  8b4374               mov eax, dword ptr [ebx + 0x74]
// 00791617  50                   push eax
// 00791618  8d4c2414             lea ecx, [esp + 0x14]
// 0079161c  51                   push ecx
// 0079161d  8bcf                 mov ecx, edi
// 0079161f  e83afdf0ff           call 0x6a135e
// 00791624  5f                   pop edi
// 00791625  5e                   pop esi
// 00791626  5d                   pop ebp
// 00791627  5b                   pop ebx
// 00791628  83c410               add esp, 0x10
// 0079162b  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ?DrawCaptionBack@CXTCaptionTheme@@UAEXPAVCDC@@PAVCXTCaption@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp

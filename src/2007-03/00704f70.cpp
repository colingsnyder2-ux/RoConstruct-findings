// roc 2007-03 00704f70  unit: seg_00700000  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00704f70
//
// 00704f70  83ec10               sub esp, 0x10
// 00704f73  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00704f77  8b5004               mov edx, dword ptr [eax + 4]
// 00704f7a  53                   push ebx
// 00704f7b  55                   push ebp
// 00704f7c  56                   push esi
// 00704f7d  8bf1                 mov esi, ecx
// 00704f7f  8b08                 mov ecx, dword ptr [eax]
// 00704f81  894c240c             mov dword ptr [esp + 0xc], ecx
// 00704f85  8b4808               mov ecx, dword ptr [eax + 8]
// 00704f88  57                   push edi
// 00704f89  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00704f8d  89542414             mov dword ptr [esp + 0x14], edx
// 00704f91  8b500c               mov edx, dword ptr [eax + 0xc]
// 00704f94  894c2418             mov dword ptr [esp + 0x18], ecx
// 00704f98  6a01                 push 1
// 00704f9a  8bcf                 mov ecx, edi
// 00704f9c  89542420             mov dword ptr [esp + 0x20], edx
// 00704fa0  e8fb5b0300           call 0x73aba0
// 00704fa5  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00704fa9  8b4370               mov eax, dword ptr [ebx + 0x70]
// 00704fac  50                   push eax
// 00704fad  8d4c2414             lea ecx, [esp + 0x14]
// 00704fb1  51                   push ecx
// 00704fb2  8bcf                 mov ecx, edi
// 00704fb4  e8619df1ff           call 0x61ed1a
// 00704fb9  8b83c8000000         mov eax, dword ptr [ebx + 0xc8]
// 00704fbf  a801                 test al, 1
// 00704fc1  8b2d9ced7700         mov ebp, dword ptr [0x77ed9c]
// 00704fc7  746c                 je 0x705035
// 00704fc9  8b4628               mov eax, dword ptr [esi + 0x28]
// 00704fcc  83f8ff               cmp eax, -1
// 00704fcf  7505                 jne 0x704fd6
// 00704fd1  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00704fd4  eb02                 jmp 0x704fd8
// 00704fd6  8bc8                 mov ecx, eax
// 00704fd8  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00704fdb  83f8ff               cmp eax, -1
// 00704fde  7503                 jne 0x704fe3
// 00704fe0  8b4618               mov eax, dword ptr [esi + 0x18]
// 00704fe3  51                   push ecx
// 00704fe4  50                   push eax
// 00704fe5  8d542418             lea edx, [esp + 0x18]
// 00704fe9  52                   push edx
// 00704fea  8bcf                 mov ecx, edi
// 00704fec  e8239df1ff           call 0x61ed14
// 00704ff1  6aff                 push -1
// 00704ff3  6aff                 push -1
// 00704ff5  8d442418             lea eax, [esp + 0x18]
// 00704ff9  50                   push eax
// 00704ffa  ffd5                 call ebp
// 00704ffc  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00704fff  83f8ff               cmp eax, -1
// 00705002  7503                 jne 0x705007
// 00705004  8b4618               mov eax, dword ptr [esi + 0x18]
// 00705007  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0070500a  83f9ff               cmp ecx, -1
// 0070500d  7505                 jne 0x705014
// 0070500f  8b7624               mov esi, dword ptr [esi + 0x24]
// 00705012  eb02                 jmp 0x705016
// 00705014  8bf1                 mov esi, ecx
// 00705016  50                   push eax
// 00705017  56                   push esi
// 00705018  8d4c2418             lea ecx, [esp + 0x18]
// 0070501c  51                   push ecx
// 0070501d  8bcf                 mov ecx, edi
// 0070501f  e8f09cf1ff           call 0x61ed14
// 00705024  837b6c00             cmp dword ptr [ebx + 0x6c], 0
// 00705028  754c                 jne 0x705076
// 0070502a  6aff                 push -1
// 0070502c  6aff                 push -1
// 0070502e  8d542418             lea edx, [esp + 0x18]
// 00705032  52                   push edx
// 00705033  eb3f                 jmp 0x705074
// 00705035  a802                 test al, 2
// 00705037  743d                 je 0x705076
// 00705039  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0070503c  83f8ff               cmp eax, -1
// 0070503f  7505                 jne 0x705046
// 00705041  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00705044  eb02                 jmp 0x705048
// 00705046  8bc8                 mov ecx, eax
// 00705048  8b4628               mov eax, dword ptr [esi + 0x28]
// 0070504b  83f8ff               cmp eax, -1
// 0070504e  7505                 jne 0x705055
// 00705050  8b7624               mov esi, dword ptr [esi + 0x24]
// 00705053  eb02                 jmp 0x705057
// 00705055  8bf0                 mov esi, eax
// 00705057  51                   push ecx
// 00705058  56                   push esi
// 00705059  8d442418             lea eax, [esp + 0x18]
// 0070505d  50                   push eax
// 0070505e  8bcf                 mov ecx, edi
// 00705060  e8af9cf1ff           call 0x61ed14
// 00705065  837b6c00             cmp dword ptr [ebx + 0x6c], 0
// 00705069  750b                 jne 0x705076
// 0070506b  6aff                 push -1
// 0070506d  6aff                 push -1
// 0070506f  8d4c2418             lea ecx, [esp + 0x18]
// 00705073  51                   push ecx
// 00705074  ffd5                 call ebp
// 00705076  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 00705079  f7d8                 neg eax
// 0070507b  50                   push eax
// 0070507c  50                   push eax
// 0070507d  8d542418             lea edx, [esp + 0x18]
// 00705081  52                   push edx
// 00705082  ffd5                 call ebp
// 00705084  8b4374               mov eax, dword ptr [ebx + 0x74]
// 00705087  50                   push eax
// 00705088  8d4c2414             lea ecx, [esp + 0x14]
// 0070508c  51                   push ecx
// 0070508d  8bcf                 mov ecx, edi
// 0070508f  e8869cf1ff           call 0x61ed1a
// 00705094  5f                   pop edi
// 00705095  5e                   pop esi
// 00705096  5d                   pop ebp
// 00705097  5b                   pop ebx
// 00705098  83c410               add esp, 0x10
// 0070509b  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTCaptionTheme.cpp (function ?DrawCaptionBack@CXTCaptionTheme@@UAEXPAVCDC@@PAVCXTCaption@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaptionTheme.cpp

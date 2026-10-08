// from server: 100% by auto
// roc 2008-06 0076cfc0  unit: CXTPShadowsManager::CShadowWnd  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076cfc0
//
// 0076cfc0  83ec20               sub esp, 0x20
// 0076cfc3  53                   push ebx
// 0076cfc4  56                   push esi
// 0076cfc5  8bf1                 mov esi, ecx
// 0076cfc7  56                   push esi
// 0076cfc8  8d4c240c             lea ecx, [esp + 0xc]
// 0076cfcc  e8ffaaf8ff           call 0x6f7ad0
// 0076cfd1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0076cfd5  8b5804               mov ebx, dword ptr [eax + 4]
// 0076cfd8  85db                 test ebx, ebx
// 0076cfda  0f84ba000000         je 0x76d09a
// 0076cfe0  55                   push ebp
// 0076cfe1  57                   push edi
// 0076cfe2  8bc3                 mov eax, ebx
// 0076cfe4  8b4008               mov eax, dword ptr [eax + 8]
// 0076cfe7  8b1b                 mov ebx, dword ptr [ebx]
// 0076cfe9  33c9                 xor ecx, ecx
// 0076cfeb  39485c               cmp dword ptr [eax + 0x5c], ecx
// 0076cfee  0f94c1               sete cl
// 0076cff1  394e5c               cmp dword ptr [esi + 0x5c], ecx
// 0076cff4  0f8596000000         jne 0x76d090
// 0076cffa  50                   push eax
// 0076cffb  8d4c2424             lea ecx, [esp + 0x24]
// 0076cfff  e8ccaaf8ff           call 0x6f7ad0
// 0076d004  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 0076d008  7540                 jne 0x76d04a
// 0076d00a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0076d00e  8b542414             mov edx, dword ptr [esp + 0x14]
// 0076d012  8d41ff               lea eax, [ecx - 1]
// 0076d015  3bd0                 cmp edx, eax
// 0076d017  7577                 jne 0x76d090
// 0076d019  8b442418             mov eax, dword ptr [esp + 0x18]
// 0076d01d  3b442428             cmp eax, dword ptr [esp + 0x28]
// 0076d021  7d6d                 jge 0x76d090
// 0076d023  3b442420             cmp eax, dword ptr [esp + 0x20]
// 0076d027  7e67                 jle 0x76d090
// 0076d029  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0076d02d  2bf9                 sub edi, ecx
// 0076d02f  8d0c7a               lea ecx, [edx + edi*2]
// 0076d032  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0076d036  6a00                 push 0
// 0076d038  2bd1                 sub edx, ecx
// 0076d03a  52                   push edx
// 0076d03b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0076d03f  2bc2                 sub eax, edx
// 0076d041  50                   push eax
// 0076d042  51                   push ecx
// 0076d043  894c2424             mov dword ptr [esp + 0x24], ecx
// 0076d047  52                   push edx
// 0076d048  eb3f                 jmp 0x76d089
// 0076d04a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0076d04e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0076d052  8d41ff               lea eax, [ecx - 1]
// 0076d055  3bf8                 cmp edi, eax
// 0076d057  7537                 jne 0x76d090
// 0076d059  8b542414             mov edx, dword ptr [esp + 0x14]
// 0076d05d  3b542424             cmp edx, dword ptr [esp + 0x24]
// 0076d061  7e2d                 jle 0x76d090
// 0076d063  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0076d067  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 0076d06b  7d23                 jge 0x76d090
// 0076d06d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0076d071  6a00                 push 0
// 0076d073  2bc2                 sub eax, edx
// 0076d075  50                   push eax
// 0076d076  8b442420             mov eax, dword ptr [esp + 0x20]
// 0076d07a  2be9                 sub ebp, ecx
// 0076d07c  8d4c6fff             lea ecx, [edi + ebp*2 - 1]
// 0076d080  2bc1                 sub eax, ecx
// 0076d082  50                   push eax
// 0076d083  52                   push edx
// 0076d084  894c2420             mov dword ptr [esp + 0x20], ecx
// 0076d088  51                   push ecx
// 0076d089  8bce                 mov ecx, esi
// 0076d08b  e8bc39f3ff           call 0x6a0a4c
// 0076d090  85db                 test ebx, ebx
// 0076d092  0f854affffff         jne 0x76cfe2
// 0076d098  5f                   pop edi
// 0076d099  5d                   pop ebp
// 0076d09a  5e                   pop esi
// 0076d09b  5b                   pop ebx
// 0076d09c  83c420               add esp, 0x20
// 0076d09f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?LongShadow@CShadowWnd@CXTPShadowsManager@@QAEXPAVCShadowList@2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp

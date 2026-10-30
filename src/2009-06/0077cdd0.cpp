// roc 2009-06 0077cdd0  unit: CXTPTabClientWnd  size: 1092 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077cdd0
//
// 0077cdd0  81ec88000000         sub esp, 0x88
// 0077cdd6  53                   push ebx
// 0077cdd7  55                   push ebp
// 0077cdd8  56                   push esi
// 0077cdd9  57                   push edi
// 0077cdda  8bbc249c000000       mov edi, dword ptr [esp + 0x9c]
// 0077cde1  33db                 xor ebx, ebx
// 0077cde3  3bfb                 cmp edi, ebx
// 0077cde5  8bf1                 mov esi, ecx
// 0077cde7  0f8ca5010000         jl 0x77cf92
// 0077cded  e8fee7ffff           call 0x77b5f0
// 0077cdf2  48                   dec eax
// 0077cdf3  3bf8                 cmp edi, eax
// 0077cdf5  0f8d97010000         jge 0x77cf92
// 0077cdfb  e860ffffff           call 0x77cd60
// 0077ce00  53                   push ebx
// 0077ce01  8d8c2484000000       lea ecx, [esp + 0x84]
// 0077ce08  e8f33dffff           call 0x770c00
// 0077ce0d  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 0077ce10  0f8df9030000         jge 0x77d20f
// 0077ce16  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0077ce19  8b2cb8               mov ebp, dword ptr [eax + edi*4]
// 0077ce1c  8d4701               lea eax, [edi + 1]
// 0077ce1f  3bc3                 cmp eax, ebx
// 0077ce21  0f8ce8030000         jl 0x77d20f
// 0077ce27  3b4670               cmp eax, dword ptr [esi + 0x70]
// 0077ce2a  0f8ddf030000         jge 0x77d20f
// 0077ce30  8b5534               mov edx, dword ptr [ebp + 0x34]
// 0077ce33  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0077ce36  8b3c81               mov edi, dword ptr [ecx + eax*4]
// 0077ce39  89542470             mov dword ptr [esp + 0x70], edx
// 0077ce3d  8b4538               mov eax, dword ptr [ebp + 0x38]
// 0077ce40  89442474             mov dword ptr [esp + 0x74], eax
// 0077ce44  8b4d3c               mov ecx, dword ptr [ebp + 0x3c]
// 0077ce47  894c2478             mov dword ptr [esp + 0x78], ecx
// 0077ce4b  8b5540               mov edx, dword ptr [ebp + 0x40]
// 0077ce4e  8954247c             mov dword ptr [esp + 0x7c], edx
// 0077ce52  8b4734               mov eax, dword ptr [edi + 0x34]
// 0077ce55  89442460             mov dword ptr [esp + 0x60], eax
// 0077ce59  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0077ce5c  894c2464             mov dword ptr [esp + 0x64], ecx
// 0077ce60  8b573c               mov edx, dword ptr [edi + 0x3c]
// 0077ce63  89542468             mov dword ptr [esp + 0x68], edx
// 0077ce67  8b4740               mov eax, dword ptr [edi + 0x40]
// 0077ce6a  8d4c2460             lea ecx, [esp + 0x60]
// 0077ce6e  51                   push ecx
// 0077ce6f  8d542474             lea edx, [esp + 0x74]
// 0077ce73  89442470             mov dword ptr [esp + 0x70], eax
// 0077ce77  52                   push edx
// 0077ce78  8d442428             lea eax, [esp + 0x28]
// 0077ce7c  50                   push eax
// 0077ce7d  897c244c             mov dword ptr [esp + 0x4c], edi
// 0077ce81  ff153cef8900         call dword ptr [0x89ef3c]
// 0077ce87  8b8da0000000         mov ecx, dword ptr [ebp + 0xa0]
// 0077ce8d  894c2410             mov dword ptr [esp + 0x10], ecx
// 0077ce91  8b95a4000000         mov edx, dword ptr [ebp + 0xa4]
// 0077ce97  89542414             mov dword ptr [esp + 0x14], edx
// 0077ce9b  8b85a8000000         mov eax, dword ptr [ebp + 0xa8]
// 0077cea1  89442418             mov dword ptr [esp + 0x18], eax
// 0077cea5  8b8dac000000         mov ecx, dword ptr [ebp + 0xac]
// 0077ceab  8d542410             lea edx, [esp + 0x10]
// 0077ceaf  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0077ceb3  52                   push edx
// 0077ceb4  8bce                 mov ecx, esi
// 0077ceb6  e817c1f9ff           call 0x718fd2
// 0077cebb  8d442420             lea eax, [esp + 0x20]
// 0077cebf  50                   push eax
// 0077cec0  8bce                 mov ecx, esi
// 0077cec2  e80bc1f9ff           call 0x718fd2
// 0077cec7  8b5620               mov edx, dword ptr [esi + 0x20]
// 0077ceca  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0077ced1  51                   push ecx
// 0077ced2  52                   push edx
// 0077ced3  ff1510ee8900         call dword ptr [0x89ee10]
// 0077ced9  399ecc000000         cmp dword ptr [esi + 0xcc], ebx
// 0077cedf  0f84ba000000         je 0x77cf9f
// 0077cee5  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0077ceec  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 0077cef3  33c0                 xor eax, eax
// 0077cef5  399e9c000000         cmp dword ptr [esi + 0x9c], ebx
// 0077cefb  0f94c0               sete al
// 0077cefe  50                   push eax
// 0077ceff  51                   push ecx
// 0077cf00  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0077cf04  52                   push edx
// 0077cf05  8b542430             mov edx, dword ptr [esp + 0x30]
// 0077cf09  8d44241c             lea eax, [esp + 0x1c]
// 0077cf0d  50                   push eax
// 0077cf0e  83ec10               sub esp, 0x10
// 0077cf11  8bc4                 mov eax, esp
// 0077cf13  8908                 mov dword ptr [eax], ecx
// 0077cf15  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0077cf19  895004               mov dword ptr [eax + 4], edx
// 0077cf1c  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0077cf20  894808               mov dword ptr [eax + 8], ecx
// 0077cf23  56                   push esi
// 0077cf24  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 0077cf2b  89500c               mov dword ptr [eax + 0xc], edx
// 0077cf2e  e85d3dffff           call 0x770c90
// 0077cf33  85c0                 test eax, eax
// 0077cf35  745b                 je 0x77cf92
// 0077cf37  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0077cf3b  8b542424             mov edx, dword ptr [esp + 0x24]
// 0077cf3f  57                   push edi
// 0077cf40  55                   push ebp
// 0077cf41  83ec10               sub esp, 0x10
// 0077cf44  8bc4                 mov eax, esp
// 0077cf46  8908                 mov dword ptr [eax], ecx
// 0077cf48  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0077cf4c  895004               mov dword ptr [eax + 4], edx
// 0077cf4f  8b542444             mov edx, dword ptr [esp + 0x44]
// 0077cf53  894808               mov dword ptr [eax + 8], ecx
// 0077cf56  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0077cf5a  89500c               mov dword ptr [eax + 0xc], edx
// 0077cf5d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0077cf61  83ec10               sub esp, 0x10
// 0077cf64  8bc4                 mov eax, esp
// 0077cf66  8908                 mov dword ptr [eax], ecx
// 0077cf68  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0077cf6c  895004               mov dword ptr [eax + 4], edx
// 0077cf6f  8b542444             mov edx, dword ptr [esp + 0x44]
// 0077cf73  894808               mov dword ptr [eax + 8], ecx
// 0077cf76  8bce                 mov ecx, esi
// 0077cf78  89500c               mov dword ptr [eax + 0xc], edx
// 0077cf7b  e8b0e8ffff           call 0x77b830
// 0077cf80  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0077cf86  8b01                 mov eax, dword ptr [ecx]
// 0077cf88  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 0077cf8e  6a01                 push 1
// 0077cf90  ffd2                 call edx
// 0077cf92  5f                   pop edi
// 0077cf93  5e                   pop esi
// 0077cf94  5d                   pop ebp
// 0077cf95  5b                   pop ebx
// 0077cf96  81c488000000         add esp, 0x88
// 0077cf9c  c20c00               ret 0xc
// 0077cf9f  399e9c000000         cmp dword ptr [esi + 0x9c], ebx
// 0077cfa5  7515                 jne 0x77cfbc
// 0077cfa7  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077cfab  2b8424a0000000       sub eax, dword ptr [esp + 0xa0]
// 0077cfb2  895c2434             mov dword ptr [esp + 0x34], ebx
// 0077cfb6  89442430             mov dword ptr [esp + 0x30], eax
// 0077cfba  eb13                 jmp 0x77cfcf
// 0077cfbc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0077cfc0  2b8c24a4000000       sub ecx, dword ptr [esp + 0xa4]
// 0077cfc7  895c2430             mov dword ptr [esp + 0x30], ebx
// 0077cfcb  894c2434             mov dword ptr [esp + 0x34], ecx
// 0077cfcf  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0077cfd2  8d442430             lea eax, [esp + 0x30]
// 0077cfd6  8b10                 mov edx, dword ptr [eax]
// 0077cfd8  8b4004               mov eax, dword ptr [eax + 4]
// 0077cfdb  51                   push ecx
// 0077cfdc  8954243c             mov dword ptr [esp + 0x3c], edx
// 0077cfe0  89442440             mov dword ptr [esp + 0x40], eax
// 0077cfe4  ff1538ee8900         call dword ptr [0x89ee38]
// 0077cfea  50                   push eax
// 0077cfeb  e812bdf9ff           call 0x718d02
// 0077cff0  8b1d3cee8900         mov ebx, dword ptr [0x89ee3c]
// 0077cff6  ffd3                 call ebx
// 0077cff8  50                   push eax
// 0077cff9  e804bdf9ff           call 0x718d02
// 0077cffe  3bc6                 cmp eax, esi
// 0077d000  0f85e6010000         jne 0x77d1ec
// 0077d006  8b3d40ee8900         mov edi, dword ptr [0x89ee40]
// 0077d00c  6a00                 push 0
// 0077d00e  6a0f                 push 0xf
// 0077d010  6a0f                 push 0xf
// 0077d012  6a00                 push 0
// 0077d014  8d542454             lea edx, [esp + 0x54]
// 0077d018  52                   push edx
// 0077d019  ffd7                 call edi
// 0077d01b  85c0                 test eax, eax
// 0077d01d  7438                 je 0x77d057
// 0077d01f  90                   nop 
// 0077d020  6a0f                 push 0xf
// 0077d022  6a0f                 push 0xf
// 0077d024  6a00                 push 0
// 0077d026  8d442450             lea eax, [esp + 0x50]
// 0077d02a  50                   push eax
// 0077d02b  ff15d8ee8900         call dword ptr [0x89eed8]
// 0077d031  85c0                 test eax, eax
// 0077d033  0f8459ffffff         je 0x77cf92
// 0077d039  8d4c2444             lea ecx, [esp + 0x44]
// 0077d03d  51                   push ecx
// 0077d03e  ff154ced8900         call dword ptr [0x89ed4c]
// 0077d044  6a00                 push 0
// 0077d046  6a0f                 push 0xf
// 0077d048  6a0f                 push 0xf
// 0077d04a  6a00                 push 0
// 0077d04c  8d542454             lea edx, [esp + 0x54]
// 0077d050  52                   push edx
// 0077d051  ffd7                 call edi
// 0077d053  85c0                 test eax, eax
// 0077d055  75c9                 jne 0x77d020
// 0077d057  6a00                 push 0
// 0077d059  6a00                 push 0
// 0077d05b  6a00                 push 0
// 0077d05d  8d442450             lea eax, [esp + 0x50]
// 0077d061  50                   push eax
// 0077d062  ff15d8ee8900         call dword ptr [0x89eed8]
// 0077d068  85c0                 test eax, eax
// 0077d06a  0f847c010000         je 0x77d1ec
// 0077d070  8b442448             mov eax, dword ptr [esp + 0x48]
// 0077d074  3d00020000           cmp eax, 0x200
// 0077d079  0f8537010000         jne 0x77d1b6
// 0077d07f  8b442450             mov eax, dword ptr [esp + 0x50]
// 0077d083  8b5620               mov edx, dword ptr [esi + 0x20]
// 0077d086  0fbfc8               movsx ecx, ax
// 0077d089  c1e810               shr eax, 0x10
// 0077d08c  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 0077d093  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0077d09a  98                   cwde 
// 0077d09b  51                   push ecx
// 0077d09c  52                   push edx
// 0077d09d  898424ac000000       mov dword ptr [esp + 0xac], eax
// 0077d0a4  ff1510ee8900         call dword ptr [0x89ee10]
// 0077d0aa  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0077d0b1  03442438             add eax, dword ptr [esp + 0x38]
// 0077d0b5  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0077d0bc  034c243c             add ecx, dword ptr [esp + 0x3c]
// 0077d0c0  8b542428             mov edx, dword ptr [esp + 0x28]
// 0077d0c4  3bc2                 cmp eax, edx
// 0077d0c6  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 0077d0cd  898c24a4000000       mov dword ptr [esp + 0xa4], ecx
// 0077d0d4  8bf8                 mov edi, eax
// 0077d0d6  7c02                 jl 0x77d0da
// 0077d0d8  8bfa                 mov edi, edx
// 0077d0da  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0077d0de  3bfb                 cmp edi, ebx
// 0077d0e0  7e08                 jle 0x77d0ea
// 0077d0e2  3bc2                 cmp eax, edx
// 0077d0e4  7c0d                 jl 0x77d0f3
// 0077d0e6  8bc2                 mov eax, edx
// 0077d0e8  eb02                 jmp 0x77d0ec
// 0077d0ea  8bc3                 mov eax, ebx
// 0077d0ec  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 0077d0f3  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0077d0f7  3bcf                 cmp ecx, edi
// 0077d0f9  8bd1                 mov edx, ecx
// 0077d0fb  7c02                 jl 0x77d0ff
// 0077d0fd  8bd7                 mov edx, edi
// 0077d0ff  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0077d103  3bd3                 cmp edx, ebx
// 0077d105  7e08                 jle 0x77d10f
// 0077d107  3bcf                 cmp ecx, edi
// 0077d109  7c0d                 jl 0x77d118
// 0077d10b  8bcf                 mov ecx, edi
// 0077d10d  eb02                 jmp 0x77d111
// 0077d10f  8bcb                 mov ecx, ebx
// 0077d111  898c24a4000000       mov dword ptr [esp + 0xa4], ecx
// 0077d118  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 0077d11f  7518                 jne 0x77d139
// 0077d121  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0077d125  3bc8                 cmp ecx, eax
// 0077d127  0f84a9000000         je 0x77d1d6
// 0077d12d  6a00                 push 0
// 0077d12f  2bc1                 sub eax, ecx
// 0077d131  50                   push eax
// 0077d132  8d442418             lea eax, [esp + 0x18]
// 0077d136  50                   push eax
// 0077d137  eb16                 jmp 0x77d14f
// 0077d139  8b442414             mov eax, dword ptr [esp + 0x14]
// 0077d13d  3bc1                 cmp eax, ecx
// 0077d13f  0f8491000000         je 0x77d1d6
// 0077d145  2bc8                 sub ecx, eax
// 0077d147  51                   push ecx
// 0077d148  6a00                 push 0
// 0077d14a  8d4c2418             lea ecx, [esp + 0x18]
// 0077d14e  51                   push ecx
// 0077d14f  ff15f8ed8900         call dword ptr [0x89edf8]
// 0077d155  8b542440             mov edx, dword ptr [esp + 0x40]
// 0077d159  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0077d15d  52                   push edx
// 0077d15e  8b542428             mov edx, dword ptr [esp + 0x28]
// 0077d162  55                   push ebp
// 0077d163  83ec10               sub esp, 0x10
// 0077d166  8bc4                 mov eax, esp
// 0077d168  8908                 mov dword ptr [eax], ecx
// 0077d16a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0077d16e  895004               mov dword ptr [eax + 4], edx
// 0077d171  8b542444             mov edx, dword ptr [esp + 0x44]
// 0077d175  894808               mov dword ptr [eax + 8], ecx
// 0077d178  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0077d17c  89500c               mov dword ptr [eax + 0xc], edx
// 0077d17f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0077d183  83ec10               sub esp, 0x10
// 0077d186  8bc4                 mov eax, esp
// 0077d188  8908                 mov dword ptr [eax], ecx
// 0077d18a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0077d18e  895004               mov dword ptr [eax + 4], edx
// 0077d191  8b542444             mov edx, dword ptr [esp + 0x44]
// 0077d195  894808               mov dword ptr [eax + 8], ecx
// 0077d198  8bce                 mov ecx, esi
// 0077d19a  89500c               mov dword ptr [eax + 0xc], edx
// 0077d19d  e88ee6ffff           call 0x77b830
// 0077d1a2  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0077d1a8  8b01                 mov eax, dword ptr [ecx]
// 0077d1aa  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 0077d1b0  6a01                 push 1
// 0077d1b2  ffd2                 call edx
// 0077d1b4  eb20                 jmp 0x77d1d6
// 0077d1b6  3d00010000           cmp eax, 0x100
// 0077d1bb  7507                 jne 0x77d1c4
// 0077d1bd  837c244c1b           cmp dword ptr [esp + 0x4c], 0x1b
// 0077d1c2  eb05                 jmp 0x77d1c9
// 0077d1c4  3d02020000           cmp eax, 0x202
// 0077d1c9  7421                 je 0x77d1ec
// 0077d1cb  8d442444             lea eax, [esp + 0x44]
// 0077d1cf  50                   push eax
// 0077d1d0  ff154ced8900         call dword ptr [0x89ed4c]
// 0077d1d6  8b1d3cee8900         mov ebx, dword ptr [0x89ee3c]
// 0077d1dc  ffd3                 call ebx
// 0077d1de  50                   push eax
// 0077d1df  e81ebbf9ff           call 0x718d02
// 0077d1e4  3bc6                 cmp eax, esi
// 0077d1e6  0f841afeffff         je 0x77d006
// 0077d1ec  ffd3                 call ebx
// 0077d1ee  50                   push eax
// 0077d1ef  e80ebbf9ff           call 0x718d02
// 0077d1f4  3bc6                 cmp eax, esi
// 0077d1f6  0f8596fdffff         jne 0x77cf92
// 0077d1fc  ff1544ee8900         call dword ptr [0x89ee44]
// 0077d202  5f                   pop edi
// 0077d203  5e                   pop esi
// 0077d204  5d                   pop ebp
// 0077d205  5b                   pop ebx
// 0077d206  81c488000000         add esp, 0x88
// 0077d20c  c20c00               ret 0xc
// 0077d20f  e8d0baf9ff           call 0x718ce4
// copied from an identical function in another client (function ?TrackSplitter@CXTPTabClientWnd@@IAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp
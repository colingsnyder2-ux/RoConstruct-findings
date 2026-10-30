// roc 2009-12 00821f50  unit: CXTPReportControl  size: 536 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00821f50
//
// 00821f50  6aff                 push -1
// 00821f52  68cbb19500           push 0x95b1cb
// 00821f57  64a100000000         mov eax, dword ptr fs:[0]
// 00821f5d  50                   push eax
// 00821f5e  83ec4c               sub esp, 0x4c
// 00821f61  53                   push ebx
// 00821f62  55                   push ebp
// 00821f63  56                   push esi
// 00821f64  57                   push edi
// 00821f65  a10052b600           mov eax, dword ptr [0xb65200]
// 00821f6a  33c4                 xor eax, esp
// 00821f6c  50                   push eax
// 00821f6d  8d442460             lea eax, [esp + 0x60]
// 00821f71  64a300000000         mov dword ptr fs:[0], eax
// 00821f77  8bf1                 mov esi, ecx
// 00821f79  8b5c2470             mov ebx, dword ptr [esp + 0x70]
// 00821f7d  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00821f83  33ed                 xor ebp, ebp
// 00821f85  3bdd                 cmp ebx, ebp
// 00821f87  0f84c3010000         je 0x822150
// 00821f8d  396c2474             cmp dword ptr [esp + 0x74], ebp
// 00821f91  0f84b9010000         je 0x822150
// 00821f97  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 00821f9b  3bfd                 cmp edi, ebp
// 00821f9d  0f84ad010000         je 0x822150
// 00821fa3  3bc5                 cmp eax, ebp
// 00821fa5  0f84a5010000         je 0x822150
// 00821fab  8d4c2434             lea ecx, [esp + 0x34]
// 00821faf  e8ac86ffff           call 0x81a660
// 00821fb4  c7442434dc429f00     mov dword ptr [esp + 0x34], 0x9f42dc
// 00821fbc  8d442424             lea eax, [esp + 0x24]
// 00821fc0  50                   push eax
// 00821fc1  8bcf                 mov ecx, edi
// 00821fc3  896c246c             mov dword ptr [esp + 0x6c], ebp
// 00821fc7  895c245c             mov dword ptr [esp + 0x5c], ebx
// 00821fcb  8974243c             mov dword ptr [esp + 0x3c], esi
// 00821fcf  897c2444             mov dword ptr [esp + 0x44], edi
// 00821fd3  e8f85a0000           call 0x827ad0
// 00821fd8  8b08                 mov ecx, dword ptr [eax]
// 00821fda  894c2448             mov dword ptr [esp + 0x48], ecx
// 00821fde  8b5004               mov edx, dword ptr [eax + 4]
// 00821fe1  8954244c             mov dword ptr [esp + 0x4c], edx
// 00821fe5  8b4808               mov ecx, dword ptr [eax + 8]
// 00821fe8  894c2450             mov dword ptr [esp + 0x50], ecx
// 00821fec  8b500c               mov edx, dword ptr [eax + 0xc]
// 00821fef  6a40                 push 0x40
// 00821ff1  89542458             mov dword ptr [esp + 0x58], edx
// 00821ff5  e86618fdff           call 0x7f3860
// 00821ffa  83c404               add esp, 4
// 00821ffd  89442470             mov dword ptr [esp + 0x70], eax
// 00822001  c644246801           mov byte ptr [esp + 0x68], 1
// 00822006  3bc5                 cmp eax, ebp
// 00822008  7409                 je 0x822013
// 0082200a  8bc8                 mov ecx, eax
// 0082200c  e8df85ffff           call 0x81a5f0
// 00822011  8be8                 mov ebp, eax
// 00822013  8bcf                 mov ecx, edi
// 00822015  c644246800           mov byte ptr [esp + 0x68], 0
// 0082201a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00822022  e84938cbff           call 0x4d5870
// 00822027  8b742474             mov esi, dword ptr [esp + 0x74]
// 0082202b  8bf8                 mov edi, eax
// 0082202d  8bce                 mov ecx, esi
// 0082202f  897c2418             mov dword ptr [esp + 0x18], edi
// 00822033  e8e8ab0000           call 0x82cc20
// 00822038  89442420             mov dword ptr [esp + 0x20], eax
// 0082203c  c744247000000000     mov dword ptr [esp + 0x70], 0
// 00822044  85c0                 test eax, eax
// 00822046  0f8ee2000000         jle 0x82212e
// 0082204c  eb06                 jmp 0x822054
// 0082204e  8bff                 mov edi, edi
// 00822050  8b742474             mov esi, dword ptr [esp + 0x74]
// 00822054  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00822058  8b06                 mov eax, dword ptr [esi]
// 0082205a  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0082205d  51                   push ecx
// 0082205e  8bce                 mov ecx, esi
// 00822060  ffd2                 call edx
// 00822062  8bf0                 mov esi, eax
// 00822064  85f6                 test esi, esi
// 00822066  7435                 je 0x82209d
// 00822068  8b06                 mov eax, dword ptr [esi]
// 0082206a  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 00822070  8bce                 mov ecx, esi
// 00822072  ffd2                 call edx
// 00822074  85c0                 test eax, eax
// 00822076  0f859f000000         jne 0x82211b
// 0082207c  8b06                 mov eax, dword ptr [esi]
// 0082207e  8b5060               mov edx, dword ptr [eax + 0x60]
// 00822081  8bce                 mov ecx, esi
// 00822083  ffd2                 call edx
// 00822085  85c0                 test eax, eax
// 00822087  7414                 je 0x82209d
// 00822089  85ff                 test edi, edi
// 0082208b  7c10                 jl 0x82209d
// 0082208d  3b7828               cmp edi, dword ptr [eax + 0x28]
// 00822090  7d0b                 jge 0x82209d
// 00822092  8b4024               mov eax, dword ptr [eax + 0x24]
// 00822095  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00822098  8d04b8               lea eax, [eax + edi*4]
// 0082209b  eb02                 jmp 0x82209f
// 0082209d  33c9                 xor ecx, ecx
// 0082209f  85c9                 test ecx, ecx
// 008220a1  7478                 je 0x82211b
// 008220a3  8b442478             mov eax, dword ptr [esp + 0x78]
// 008220a7  50                   push eax
// 008220a8  89742440             mov dword ptr [esp + 0x40], esi
// 008220ac  894c2448             mov dword ptr [esp + 0x48], ecx
// 008220b0  8b11                 mov edx, dword ptr [ecx]
// 008220b2  8b526c               mov edx, dword ptr [edx + 0x6c]
// 008220b5  8d442420             lea eax, [esp + 0x20]
// 008220b9  50                   push eax
// 008220ba  ffd2                 call edx
// 008220bc  8d7d2c               lea edi, [ebp + 0x2c]
// 008220bf  50                   push eax
// 008220c0  8bcf                 mov ecx, edi
// 008220c2  c644246c02           mov byte ptr [esp + 0x6c], 2
// 008220c7  ff1538d59800         call dword ptr [0x98d538]
// 008220cd  8d4c241c             lea ecx, [esp + 0x1c]
// 008220d1  c644246800           mov byte ptr [esp + 0x68], 0
// 008220d6  ff15c0de9800         call dword ptr [0x98dec0]
// 008220dc  8b06                 mov eax, dword ptr [esi]
// 008220de  8b90d8000000         mov edx, dword ptr [eax + 0xd8]
// 008220e4  55                   push ebp
// 008220e5  8d4c2438             lea ecx, [esp + 0x38]
// 008220e9  51                   push ecx
// 008220ea  8bce                 mov ecx, esi
// 008220ec  ffd2                 call edx
// 008220ee  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 008220f1  8b03                 mov eax, dword ptr [ebx]
// 008220f3  8b5030               mov edx, dword ptr [eax + 0x30]
// 008220f6  51                   push ecx
// 008220f7  8bcb                 mov ecx, ebx
// 008220f9  ffd2                 call edx
// 008220fb  57                   push edi
// 008220fc  8d442428             lea eax, [esp + 0x28]
// 00822100  50                   push eax
// 00822101  8bcb                 mov ecx, ebx
// 00822103  e8a892c4ff           call 0x46b3b0
// 00822108  8b00                 mov eax, dword ptr [eax]
// 0082210a  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0082210e  83c007               add eax, 7
// 00822111  39442414             cmp dword ptr [esp + 0x14], eax
// 00822115  7f04                 jg 0x82211b
// 00822117  89442414             mov dword ptr [esp + 0x14], eax
// 0082211b  8b442470             mov eax, dword ptr [esp + 0x70]
// 0082211f  40                   inc eax
// 00822120  3b442420             cmp eax, dword ptr [esp + 0x20]
// 00822124  89442470             mov dword ptr [esp + 0x70], eax
// 00822128  0f8c22ffffff         jl 0x822050
// 0082212e  85ed                 test ebp, ebp
// 00822130  7407                 je 0x822139
// 00822132  8bcd                 mov ecx, ebp
// 00822134  e8a31cfdff           call 0x7f3ddc
// 00822139  8d4c2434             lea ecx, [esp + 0x34]
// 0082213d  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00822145  e8567fffff           call 0x81a0a0
// 0082214a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0082214e  eb02                 jmp 0x822152
// 00822150  33c0                 xor eax, eax
// 00822152  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00822156  64890d00000000       mov dword ptr fs:[0], ecx
// 0082215d  59                   pop ecx
// 0082215e  5f                   pop edi
// 0082215f  5e                   pop esi
// 00822160  5d                   pop ebp
// 00822161  5b                   pop ebx
// 00822162  83c458               add esp, 0x58
// 00822165  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnGetItemsCaptionMaxWidth@CXTPReportControl@@MAEHPAVCDC@@PAVCXTPReportRows@@PAVCXTPReportColumn@@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp
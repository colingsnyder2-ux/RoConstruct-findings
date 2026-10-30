// roc 2009-12 00821320  unit: CXTPReportControl  size: 417 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00821320
//
// 00821320  83ec18               sub esp, 0x18
// 00821323  56                   push esi
// 00821324  8bf1                 mov esi, ecx
// 00821326  57                   push edi
// 00821327  8dbe34010000         lea edi, [esi + 0x134]
// 0082132d  85ff                 test edi, edi
// 0082132f  0f84ac000000         je 0x8213e1
// 00821335  837f2000             cmp dword ptr [edi + 0x20], 0
// 00821339  0f84a2000000         je 0x8213e1
// 0082133f  8b8654010000         mov eax, dword ptr [esi + 0x154]
// 00821345  50                   push eax
// 00821346  ff1564ca9800         call dword ptr [0x98ca64]
// 0082134c  85c0                 test eax, eax
// 0082134e  0f848d000000         je 0x8213e1
// 00821354  8d4c2408             lea ecx, [esp + 8]
// 00821358  51                   push ecx
// 00821359  ff1538cc9800         call dword ptr [0x98cc38]
// 0082135f  8b868c010000         mov eax, dword ptr [esi + 0x18c]
// 00821365  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 0082136b  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 00821371  89542410             mov dword ptr [esp + 0x10], edx
// 00821375  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 0082137b  89442414             mov dword ptr [esp + 0x14], eax
// 0082137f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00821383  894c2418             mov dword ptr [esp + 0x18], ecx
// 00821387  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0082138b  50                   push eax
// 0082138c  89542420             mov dword ptr [esp + 0x20], edx
// 00821390  51                   push ecx
// 00821391  8d542418             lea edx, [esp + 0x18]
// 00821395  52                   push edx
// 00821396  ff155cca9800         call dword ptr [0x98ca5c]
// 0082139c  85c0                 test eax, eax
// 0082139e  7516                 jne 0x8213b6
// 008213a0  50                   push eax
// 008213a1  8d8e9c010000         lea ecx, [esi + 0x19c]
// 008213a7  ff155cde9800         call dword ptr [0x98de5c]
// 008213ad  6a00                 push 0
// 008213af  8bcf                 mov ecx, edi
// 008213b1  e86a4c0800           call 0x8a6020
// 008213b6  8b442424             mov eax, dword ptr [esp + 0x24]
// 008213ba  3d05020000           cmp eax, 0x205
// 008213bf  773e                 ja 0x8213ff
// 008213c1  3d04020000           cmp eax, 0x204
// 008213c6  7310                 jae 0x8213d8
// 008213c8  3d04010000           cmp eax, 0x104
// 008213cd  771a                 ja 0x8213e9
// 008213cf  7407                 je 0x8213d8
// 008213d1  3d00010000           cmp eax, 0x100
// 008213d6  7509                 jne 0x8213e1
// 008213d8  6a00                 push 0
// 008213da  8bcf                 mov ecx, edi
// 008213dc  e83f4c0800           call 0x8a6020
// 008213e1  5f                   pop edi
// 008213e2  5e                   pop esi
// 008213e3  83c418               add esp, 0x18
// 008213e6  c20400               ret 4
// 008213e9  3d01020000           cmp eax, 0x201
// 008213ee  72f1                 jb 0x8213e1
// 008213f0  3d02020000           cmp eax, 0x202
// 008213f5  76e1                 jbe 0x8213d8
// 008213f7  5f                   pop edi
// 008213f8  5e                   pop esi
// 008213f9  83c418               add esp, 0x18
// 008213fc  c20400               ret 4
// 008213ff  05f9fdffff           add eax, 0xfffffdf9
// 00821404  3d9c000000           cmp eax, 0x9c
// 00821409  77d6                 ja 0x8213e1
// 0082140b  0fb68024148200       movzx eax, byte ptr [eax + 0x821424]
// 00821412  ff24851c148200       jmp dword ptr [eax*4 + 0x82141c]
// 00821419  8d4900               lea ecx, [ecx]
// 0082141c  d813                 fcom dword ptr [ebx]
// 0082141e  8200e1               add byte ptr [eax], 0xe1
// 00821421  138200000001         adc eax, dword ptr [edx + 0x1000000]
// 00821427  0001                 add byte ptr [ecx], al
// 00821429  0101                 add dword ptr [ecx], eax
// 0082142b  0101                 add dword ptr [ecx], eax
// 0082142d  0101                 add dword ptr [ecx], eax
// 0082142f  0101                 add dword ptr [ecx], eax
// 00821431  0101                 add dword ptr [ecx], eax
// 00821433  0101                 add dword ptr [ecx], eax
// 00821435  0101                 add dword ptr [ecx], eax
// 00821437  0101                 add dword ptr [ecx], eax
// 00821439  0101                 add dword ptr [ecx], eax
// 0082143b  0101                 add dword ptr [ecx], eax
// 0082143d  0101                 add dword ptr [ecx], eax
// 0082143f  0101                 add dword ptr [ecx], eax
// 00821441  0101                 add dword ptr [ecx], eax
// 00821443  0101                 add dword ptr [ecx], eax
// 00821445  0101                 add dword ptr [ecx], eax
// 00821447  0101                 add dword ptr [ecx], eax
// 00821449  0101                 add dword ptr [ecx], eax
// 0082144b  0101                 add dword ptr [ecx], eax
// 0082144d  0101                 add dword ptr [ecx], eax
// 0082144f  0101                 add dword ptr [ecx], eax
// 00821451  0101                 add dword ptr [ecx], eax
// 00821453  0101                 add dword ptr [ecx], eax
// 00821455  0101                 add dword ptr [ecx], eax
// 00821457  0101                 add dword ptr [ecx], eax
// 00821459  0101                 add dword ptr [ecx], eax
// 0082145b  0101                 add dword ptr [ecx], eax
// 0082145d  0101                 add dword ptr [ecx], eax
// 0082145f  0101                 add dword ptr [ecx], eax
// 00821461  0101                 add dword ptr [ecx], eax
// 00821463  0101                 add dword ptr [ecx], eax
// 00821465  0101                 add dword ptr [ecx], eax
// 00821467  0101                 add dword ptr [ecx], eax
// 00821469  0101                 add dword ptr [ecx], eax
// 0082146b  0101                 add dword ptr [ecx], eax
// 0082146d  0101                 add dword ptr [ecx], eax
// 0082146f  0101                 add dword ptr [ecx], eax
// 00821471  0101                 add dword ptr [ecx], eax
// 00821473  0101                 add dword ptr [ecx], eax
// 00821475  0101                 add dword ptr [ecx], eax
// 00821477  0101                 add dword ptr [ecx], eax
// 00821479  0101                 add dword ptr [ecx], eax
// 0082147b  0101                 add dword ptr [ecx], eax
// 0082147d  0101                 add dword ptr [ecx], eax
// 0082147f  0101                 add dword ptr [ecx], eax
// 00821481  0101                 add dword ptr [ecx], eax
// 00821483  0101                 add dword ptr [ecx], eax
// 00821485  0101                 add dword ptr [ecx], eax
// 00821487  0101                 add dword ptr [ecx], eax
// 00821489  0101                 add dword ptr [ecx], eax
// 0082148b  0101                 add dword ptr [ecx], eax
// 0082148d  0101                 add dword ptr [ecx], eax
// 0082148f  0101                 add dword ptr [ecx], eax
// 00821491  0101                 add dword ptr [ecx], eax
// 00821493  0101                 add dword ptr [ecx], eax
// 00821495  0101                 add dword ptr [ecx], eax
// 00821497  0101                 add dword ptr [ecx], eax
// 00821499  0101                 add dword ptr [ecx], eax
// 0082149b  0101                 add dword ptr [ecx], eax
// 0082149d  0101                 add dword ptr [ecx], eax
// 0082149f  0101                 add dword ptr [ecx], eax
// 008214a1  0101                 add dword ptr [ecx], eax
// 008214a3  0101                 add dword ptr [ecx], eax
// 008214a5  0101                 add dword ptr [ecx], eax
// 008214a7  0101                 add dword ptr [ecx], eax
// 008214a9  0101                 add dword ptr [ecx], eax
// 008214ab  0101                 add dword ptr [ecx], eax
// 008214ad  0101                 add dword ptr [ecx], eax
// 008214af  0101                 add dword ptr [ecx], eax
// 008214b1  0101                 add dword ptr [ecx], eax
// 008214b3  0101                 add dword ptr [ecx], eax
// 008214b5  0101                 add dword ptr [ecx], eax
// 008214b7  0101                 add dword ptr [ecx], eax
// 008214b9  0101                 add dword ptr [ecx], eax
// 008214bb  0101                 add dword ptr [ecx], eax
// 008214bd  0101                 add dword ptr [ecx], eax
// 008214bf  0100                 add dword ptr [eax], eax
// copied from an identical function in another client (function ?RelayToolTipEvent@CXTPReportControl@@MAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
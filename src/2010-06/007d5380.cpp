// roc 2010-06 007d5380  unit: CXTPReportControl  size: 417 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d5380
//
// 007d5380  83ec18               sub esp, 0x18
// 007d5383  56                   push esi
// 007d5384  8bf1                 mov esi, ecx
// 007d5386  57                   push edi
// 007d5387  8dbe34010000         lea edi, [esi + 0x134]
// 007d538d  85ff                 test edi, edi
// 007d538f  0f84ac000000         je 0x7d5441
// 007d5395  837f2000             cmp dword ptr [edi + 0x20], 0
// 007d5399  0f84a2000000         je 0x7d5441
// 007d539f  8b8654010000         mov eax, dword ptr [esi + 0x154]
// 007d53a5  50                   push eax
// 007d53a6  ff15e8bb9e00         call dword ptr [0x9ebbe8]
// 007d53ac  85c0                 test eax, eax
// 007d53ae  0f848d000000         je 0x7d5441
// 007d53b4  8d4c2408             lea ecx, [esp + 8]
// 007d53b8  51                   push ecx
// 007d53b9  ff1574bc9e00         call dword ptr [0x9ebc74]
// 007d53bf  8b868c010000         mov eax, dword ptr [esi + 0x18c]
// 007d53c5  8b9688010000         mov edx, dword ptr [esi + 0x188]
// 007d53cb  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 007d53d1  89542410             mov dword ptr [esp + 0x10], edx
// 007d53d5  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 007d53db  89442414             mov dword ptr [esp + 0x14], eax
// 007d53df  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007d53e3  894c2418             mov dword ptr [esp + 0x18], ecx
// 007d53e7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007d53eb  50                   push eax
// 007d53ec  89542420             mov dword ptr [esp + 0x20], edx
// 007d53f0  51                   push ecx
// 007d53f1  8d542418             lea edx, [esp + 0x18]
// 007d53f5  52                   push edx
// 007d53f6  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 007d53fc  85c0                 test eax, eax
// 007d53fe  7516                 jne 0x7d5416
// 007d5400  50                   push eax
// 007d5401  8d8e9c010000         lea ecx, [esi + 0x19c]
// 007d5407  ff158cce9e00         call dword ptr [0x9ece8c]
// 007d540d  6a00                 push 0
// 007d540f  8bcf                 mov ecx, edi
// 007d5411  e85a4d0800           call 0x85a170
// 007d5416  8b442424             mov eax, dword ptr [esp + 0x24]
// 007d541a  3d05020000           cmp eax, 0x205
// 007d541f  773e                 ja 0x7d545f
// 007d5421  3d04020000           cmp eax, 0x204
// 007d5426  7310                 jae 0x7d5438
// 007d5428  3d04010000           cmp eax, 0x104
// 007d542d  771a                 ja 0x7d5449
// 007d542f  7407                 je 0x7d5438
// 007d5431  3d00010000           cmp eax, 0x100
// 007d5436  7509                 jne 0x7d5441
// 007d5438  6a00                 push 0
// 007d543a  8bcf                 mov ecx, edi
// 007d543c  e82f4d0800           call 0x85a170
// 007d5441  5f                   pop edi
// 007d5442  5e                   pop esi
// 007d5443  83c418               add esp, 0x18
// 007d5446  c20400               ret 4
// 007d5449  3d01020000           cmp eax, 0x201
// 007d544e  72f1                 jb 0x7d5441
// 007d5450  3d02020000           cmp eax, 0x202
// 007d5455  76e1                 jbe 0x7d5438
// 007d5457  5f                   pop edi
// 007d5458  5e                   pop esi
// 007d5459  83c418               add esp, 0x18
// 007d545c  c20400               ret 4
// 007d545f  05f9fdffff           add eax, 0xfffffdf9
// 007d5464  3d9c000000           cmp eax, 0x9c
// 007d5469  77d6                 ja 0x7d5441
// 007d546b  0fb68084547d00       movzx eax, byte ptr [eax + 0x7d5484]
// 007d5472  ff24857c547d00       jmp dword ptr [eax*4 + 0x7d547c]
// 007d5479  8d4900               lea ecx, [ecx]
// 007d547c  38547d00             cmp byte ptr [ebp + edi*2], dl
// 007d5480  41                   inc ecx
// 007d5481  54                   push esp
// 007d5482  7d00                 jge 0x7d5484
// 007d5484  0000                 add byte ptr [eax], al
// 007d5486  0100                 add dword ptr [eax], eax
// 007d5488  0101                 add dword ptr [ecx], eax
// 007d548a  0101                 add dword ptr [ecx], eax
// 007d548c  0101                 add dword ptr [ecx], eax
// 007d548e  0101                 add dword ptr [ecx], eax
// 007d5490  0101                 add dword ptr [ecx], eax
// 007d5492  0101                 add dword ptr [ecx], eax
// 007d5494  0101                 add dword ptr [ecx], eax
// 007d5496  0101                 add dword ptr [ecx], eax
// 007d5498  0101                 add dword ptr [ecx], eax
// 007d549a  0101                 add dword ptr [ecx], eax
// 007d549c  0101                 add dword ptr [ecx], eax
// 007d549e  0101                 add dword ptr [ecx], eax
// 007d54a0  0101                 add dword ptr [ecx], eax
// 007d54a2  0101                 add dword ptr [ecx], eax
// 007d54a4  0101                 add dword ptr [ecx], eax
// 007d54a6  0101                 add dword ptr [ecx], eax
// 007d54a8  0101                 add dword ptr [ecx], eax
// 007d54aa  0101                 add dword ptr [ecx], eax
// 007d54ac  0101                 add dword ptr [ecx], eax
// 007d54ae  0101                 add dword ptr [ecx], eax
// 007d54b0  0101                 add dword ptr [ecx], eax
// 007d54b2  0101                 add dword ptr [ecx], eax
// 007d54b4  0101                 add dword ptr [ecx], eax
// 007d54b6  0101                 add dword ptr [ecx], eax
// 007d54b8  0101                 add dword ptr [ecx], eax
// 007d54ba  0101                 add dword ptr [ecx], eax
// 007d54bc  0101                 add dword ptr [ecx], eax
// 007d54be  0101                 add dword ptr [ecx], eax
// 007d54c0  0101                 add dword ptr [ecx], eax
// 007d54c2  0101                 add dword ptr [ecx], eax
// 007d54c4  0101                 add dword ptr [ecx], eax
// 007d54c6  0101                 add dword ptr [ecx], eax
// 007d54c8  0101                 add dword ptr [ecx], eax
// 007d54ca  0101                 add dword ptr [ecx], eax
// 007d54cc  0101                 add dword ptr [ecx], eax
// 007d54ce  0101                 add dword ptr [ecx], eax
// 007d54d0  0101                 add dword ptr [ecx], eax
// 007d54d2  0101                 add dword ptr [ecx], eax
// 007d54d4  0101                 add dword ptr [ecx], eax
// 007d54d6  0101                 add dword ptr [ecx], eax
// 007d54d8  0101                 add dword ptr [ecx], eax
// 007d54da  0101                 add dword ptr [ecx], eax
// 007d54dc  0101                 add dword ptr [ecx], eax
// 007d54de  0101                 add dword ptr [ecx], eax
// 007d54e0  0101                 add dword ptr [ecx], eax
// 007d54e2  0101                 add dword ptr [ecx], eax
// 007d54e4  0101                 add dword ptr [ecx], eax
// 007d54e6  0101                 add dword ptr [ecx], eax
// 007d54e8  0101                 add dword ptr [ecx], eax
// 007d54ea  0101                 add dword ptr [ecx], eax
// 007d54ec  0101                 add dword ptr [ecx], eax
// 007d54ee  0101                 add dword ptr [ecx], eax
// 007d54f0  0101                 add dword ptr [ecx], eax
// 007d54f2  0101                 add dword ptr [ecx], eax
// 007d54f4  0101                 add dword ptr [ecx], eax
// 007d54f6  0101                 add dword ptr [ecx], eax
// 007d54f8  0101                 add dword ptr [ecx], eax
// 007d54fa  0101                 add dword ptr [ecx], eax
// 007d54fc  0101                 add dword ptr [ecx], eax
// 007d54fe  0101                 add dword ptr [ecx], eax
// 007d5500  0101                 add dword ptr [ecx], eax
// 007d5502  0101                 add dword ptr [ecx], eax
// 007d5504  0101                 add dword ptr [ecx], eax
// 007d5506  0101                 add dword ptr [ecx], eax
// 007d5508  0101                 add dword ptr [ecx], eax
// 007d550a  0101                 add dword ptr [ecx], eax
// 007d550c  0101                 add dword ptr [ecx], eax
// 007d550e  0101                 add dword ptr [ecx], eax
// 007d5510  0101                 add dword ptr [ecx], eax
// 007d5512  0101                 add dword ptr [ecx], eax
// 007d5514  0101                 add dword ptr [ecx], eax
// 007d5516  0101                 add dword ptr [ecx], eax
// 007d5518  0101                 add dword ptr [ecx], eax
// 007d551a  0101                 add dword ptr [ecx], eax
// 007d551c  0101                 add dword ptr [ecx], eax
// 007d551e  0101                 add dword ptr [ecx], eax
// copied from an identical function in another client (function ?RelayToolTipEvent@CXTPReportControl@@MAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
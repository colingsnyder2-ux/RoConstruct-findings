// roc 2009-12 0089bc50  unit: CXTPReportPaintManager  size: 609 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089bc50
//
// 0089bc50  6aff                 push -1
// 0089bc52  68001c9600           push 0x961c00
// 0089bc57  64a100000000         mov eax, dword ptr fs:[0]
// 0089bc5d  50                   push eax
// 0089bc5e  83ec28               sub esp, 0x28
// 0089bc61  53                   push ebx
// 0089bc62  55                   push ebp
// 0089bc63  56                   push esi
// 0089bc64  57                   push edi
// 0089bc65  a10052b600           mov eax, dword ptr [0xb65200]
// 0089bc6a  33c4                 xor eax, esp
// 0089bc6c  50                   push eax
// 0089bc6d  8d44243c             lea eax, [esp + 0x3c]
// 0089bc71  64a300000000         mov dword ptr fs:[0], eax
// 0089bc77  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0089bc7b  8b4004               mov eax, dword ptr [eax + 4]
// 0089bc7e  85c0                 test eax, eax
// 0089bc80  0f8415020000         je 0x89be9b
// 0089bc86  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0089bc8a  8b80d0010000         mov eax, dword ptr [eax + 0x1d0]
// 0089bc90  6a00                 push 0
// 0089bc92  51                   push ecx
// 0089bc93  8bc8                 mov ecx, eax
// 0089bc95  e8e63ef7ff           call 0x80fb80
// 0089bc9a  8bf8                 mov edi, eax
// 0089bc9c  85ff                 test edi, edi
// 0089bc9e  0f84f7010000         je 0x89be9b
// 0089bca4  8bcf                 mov ecx, edi
// 0089bca6  e8c59bc3ff           call 0x4d5870
// 0089bcab  8bcf                 mov ecx, edi
// 0089bcad  8be8                 mov ebp, eax
// 0089bcaf  e8cc1ffbff           call 0x84dc80
// 0089bcb4  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0089bcb8  8b5104               mov edx, dword ptr [ecx + 4]
// 0089bcbb  8b19                 mov ebx, dword ptr [ecx]
// 0089bcbd  8bf0                 mov esi, eax
// 0089bcbf  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0089bcc2  89442420             mov dword ptr [esp + 0x20], eax
// 0089bcc6  2bc2                 sub eax, edx
// 0089bcc8  89542414             mov dword ptr [esp + 0x14], edx
// 0089bccc  8b5108               mov edx, dword ptr [ecx + 8]
// 0089bccf  89442450             mov dword ptr [esp + 0x50], eax
// 0089bcd3  895c2454             mov dword ptr [esp + 0x54], ebx
// 0089bcd7  8bc2                 mov eax, edx
// 0089bcd9  2bc3                 sub eax, ebx
// 0089bcdb  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 0089bcdf  8b5b28               mov ebx, dword ptr [ebx + 0x28]
// 0089bce2  81e30000f00f         and ebx, 0xff00000
// 0089bce8  3bf0                 cmp esi, eax
// 0089bcea  895c2418             mov dword ptr [esp + 0x18], ebx
// 0089bcee  0f8da7010000         jge 0x89be9b
// 0089bcf4  3b6c2450             cmp ebp, dword ptr [esp + 0x50]
// 0089bcf8  0f8d9d010000         jge 0x89be9b
// 0089bcfe  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 0089bd02  837b2400             cmp dword ptr [ebx + 0x24], 0
// 0089bd06  0f848f010000         je 0x89be9b
// 0089bd0c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0089bd10  f7c300004000         test ebx, 0x400000
// 0089bd16  7408                 je 0x89bd20
// 0089bd18  2bd6                 sub edx, esi
// 0089bd1a  4a                   dec edx
// 0089bd1b  895108               mov dword ptr [ecx + 8], edx
// 0089bd1e  eb33                 jmp 0x89bd53
// 0089bd20  f7c300002000         test ebx, 0x200000
// 0089bd26  741e                 je 0x89bd46
// 0089bd28  99                   cdq 
// 0089bd29  2bc2                 sub eax, edx
// 0089bd2b  8bc8                 mov ecx, eax
// 0089bd2d  8bc6                 mov eax, esi
// 0089bd2f  99                   cdq 
// 0089bd30  2bc2                 sub eax, edx
// 0089bd32  8b542454             mov edx, dword ptr [esp + 0x54]
// 0089bd36  d1f8                 sar eax, 1
// 0089bd38  d1f9                 sar ecx, 1
// 0089bd3a  2bc8                 sub ecx, eax
// 0089bd3c  8d4411ff             lea eax, [ecx + edx - 1]
// 0089bd40  89442418             mov dword ptr [esp + 0x18], eax
// 0089bd44  eb11                 jmp 0x89bd57
// 0089bd46  8b442454             mov eax, dword ptr [esp + 0x54]
// 0089bd4a  8d5001               lea edx, [eax + 1]
// 0089bd4d  8d443001             lea eax, [eax + esi + 1]
// 0089bd51  8901                 mov dword ptr [ecx], eax
// 0089bd53  89542418             mov dword ptr [esp + 0x18], edx
// 0089bd57  f7c300000001         test ebx, 0x1000000
// 0089bd5d  7406                 je 0x89bd65
// 0089bd5f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0089bd63  eb22                 jmp 0x89bd87
// 0089bd65  f7c300000004         test ebx, 0x4000000
// 0089bd6b  7409                 je 0x89bd76
// 0089bd6d  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0089bd71  2bdd                 sub ebx, ebp
// 0089bd73  4b                   dec ebx
// 0089bd74  eb11                 jmp 0x89bd87
// 0089bd76  8b442450             mov eax, dword ptr [esp + 0x50]
// 0089bd7a  2bc5                 sub eax, ebp
// 0089bd7c  99                   cdq 
// 0089bd7d  2bc2                 sub eax, edx
// 0089bd7f  8bd8                 mov ebx, eax
// 0089bd81  d1fb                 sar ebx, 1
// 0089bd83  035c2414             add ebx, dword ptr [esp + 0x14]
// 0089bd87  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0089bd8b  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0089bd8e  33c9                 xor ecx, ecx
// 0089bd90  39480c               cmp dword ptr [eax + 0xc], ecx
// 0089bd93  0f84cb000000         je 0x89be64
// 0089bd99  894c2424             mov dword ptr [esp + 0x24], ecx
// 0089bd9d  c744242018229a00     mov dword ptr [esp + 0x20], 0x9a2218
// 0089bda5  55                   push ebp
// 0089bda6  56                   push esi
// 0089bda7  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0089bdab  50                   push eax
// 0089bdac  8d4c242c             lea ecx, [esp + 0x2c]
// 0089bdb0  e89bdef6ff           call 0x809c50
// 0089bdb5  8d542420             lea edx, [esp + 0x20]
// 0089bdb9  52                   push edx
// 0089bdba  6a00                 push 0
// 0089bdbc  8d4c2430             lea ecx, [esp + 0x30]
// 0089bdc0  e8bbfafaff           call 0x84b880
// 0089bdc5  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0089bdc9  8b4024               mov eax, dword ptr [eax + 0x24]
// 0089bdcc  8b4808               mov ecx, dword ptr [eax + 8]
// 0089bdcf  51                   push ecx
// 0089bdd0  c644244801           mov byte ptr [esp + 0x48], 1
// 0089bdd5  ff15e0b09800         call dword ptr [0x98b0e0]
// 0089bddb  50                   push eax
// 0089bddc  55                   push ebp
// 0089bddd  56                   push esi
// 0089bdde  6a00                 push 0
// 0089bde0  6a00                 push 0
// 0089bde2  8d4c243c             lea ecx, [esp + 0x3c]
// 0089bde6  e8aba60800           call 0x926496
// 0089bdeb  83ec08               sub esp, 8
// 0089bdee  8bc4                 mov eax, esp
// 0089bdf0  8bcf                 mov ecx, edi
// 0089bdf2  8964245c             mov dword ptr [esp + 0x5c], esp
// 0089bdf6  c70000000000         mov dword ptr [eax], 0
// 0089bdfc  c7400400000000       mov dword ptr [eax + 4], 0
// 0089be03  e838d3f6ff           call 0x809140
// 0089be08  50                   push eax
// 0089be09  33c0                 xor eax, eax
// 0089be0b  50                   push eax
// 0089be0c  50                   push eax
// 0089be0d  8d54243c             lea edx, [esp + 0x3c]
// 0089be11  52                   push edx
// 0089be12  8bcf                 mov ecx, edi
// 0089be14  e89750f7ff           call 0x810eb0
// 0089be19  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089be1d  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0089be21  682000cc00           push 0xcc0020
// 0089be26  6a00                 push 0
// 0089be28  6a00                 push 0
// 0089be2a  8d442434             lea eax, [esp + 0x34]
// 0089be2e  50                   push eax
// 0089be2f  55                   push ebp
// 0089be30  56                   push esi
// 0089be31  53                   push ebx
// 0089be32  51                   push ecx
// 0089be33  8b4a24               mov ecx, dword ptr [edx + 0x24]
// 0089be36  e82523f6ff           call 0x7fe160
// 0089be3b  8d4c2428             lea ecx, [esp + 0x28]
// 0089be3f  c644244400           mov byte ptr [esp + 0x44], 0
// 0089be44  e847fbfaff           call 0x84b990
// 0089be49  8d4c2420             lea ecx, [esp + 0x20]
// 0089be4d  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0089be55  c744242018229a00     mov dword ptr [esp + 0x20], 0x9a2218
// 0089be5d  e8ce33b7ff           call 0x40f230
// 0089be62  eb37                 jmp 0x89be9b
// 0089be64  83ec08               sub esp, 8
// 0089be67  8bc4                 mov eax, esp
// 0089be69  8908                 mov dword ptr [eax], ecx
// 0089be6b  894804               mov dword ptr [eax + 4], ecx
// 0089be6e  8bcf                 mov ecx, edi
// 0089be70  8964245c             mov dword ptr [esp + 0x5c], esp
// 0089be74  e8c7d2f6ff           call 0x809140
// 0089be79  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089be7d  8b542454             mov edx, dword ptr [esp + 0x54]
// 0089be81  50                   push eax
// 0089be82  83ec08               sub esp, 8
// 0089be85  8bc4                 mov eax, esp
// 0089be87  8908                 mov dword ptr [eax], ecx
// 0089be89  895804               mov dword ptr [eax + 4], ebx
// 0089be8c  8b4224               mov eax, dword ptr [edx + 0x24]
// 0089be8f  89642468             mov dword ptr [esp + 0x68], esp
// 0089be93  50                   push eax
// 0089be94  8bcf                 mov ecx, edi
// 0089be96  e81550f7ff           call 0x810eb0
// 0089be9b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0089be9f  64890d00000000       mov dword ptr fs:[0], ecx
// 0089bea6  59                   pop ecx
// 0089bea7  5f                   pop edi
// 0089bea8  5e                   pop esi
// 0089bea9  5d                   pop ebp
// 0089beaa  5b                   pop ebx
// 0089beab  83c434               add esp, 0x34
// 0089beae  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawItemBitmap@CXTPReportPaintManager@@UAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@AAVCRect@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp
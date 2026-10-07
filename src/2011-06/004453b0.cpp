// roc 2011-06 004453b0  unit: IIHAAH::?$CMap  size: 884 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004453b0
//
// 004453b0  83ec14               sub esp, 0x14
// 004453b3  53                   push ebx
// 004453b4  55                   push ebp
// 004453b5  56                   push esi
// 004453b6  8bf1                 mov esi, ecx
// 004453b8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004453bc  8b4118               mov eax, dword ptr [ecx + 0x18]
// 004453bf  f7d0                 not eax
// 004453c1  57                   push edi
// 004453c2  89742414             mov dword ptr [esp + 0x14], esi
// 004453c6  a801                 test al, 1
// 004453c8  0f847d010000         je 0x44554b
// 004453ce  8b560c               mov edx, dword ptr [esi + 0xc]
// 004453d1  52                   push edx
// 004453d2  e821583c00           call 0x80abf8
// 004453d7  837e0c00             cmp dword ptr [esi + 0xc], 0
// 004453db  0f8439030000         je 0x44571a
// 004453e1  33c0                 xor eax, eax
// 004453e3  8944241c             mov dword ptr [esp + 0x1c], eax
// 004453e7  394608               cmp dword ptr [esi + 8], eax
// 004453ea  0f862a030000         jbe 0x44571a
// 004453f0  8b4e04               mov ecx, dword ptr [esi + 4]
// 004453f3  8b2c81               mov ebp, dword ptr [ecx + eax*4]
// 004453f6  896c2410             mov dword ptr [esp + 0x10], ebp
// 004453fa  85ed                 test ebp, ebp
// 004453fc  0f8422010000         je 0x445524
// 00445402  eb04                 jmp 0x445408
// 00445404  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00445408  8d5504               lea edx, [ebp + 4]
// 0044540b  89542418             mov dword ptr [esp + 0x18], edx
// 0044540f  85ed                 test ebp, ebp
// 00445411  0f8426010000         je 0x44553d
// 00445417  8b442428             mov eax, dword ptr [esp + 0x28]
// 0044541b  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0044541e  f7d1                 not ecx
// 00445420  bf01000000           mov edi, 1
// 00445425  f6c101               test cl, 1
// 00445428  7436                 je 0x445460
// 0044542a  8d9b00000000         lea ebx, [ebx]
// 00445430  8bdf                 mov ebx, edi
// 00445432  81ffffffff1f         cmp edi, 0x1fffffff
// 00445438  7205                 jb 0x44543f
// 0044543a  bbffffff1f           mov ebx, 0x1fffffff
// 0044543f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00445443  8d349d00000000       lea esi, [ebx*4]
// 0044544a  56                   push esi
// 0044544b  55                   push ebp
// 0044544c  e88f573c00           call 0x80abe0
// 00445451  2bfb                 sub edi, ebx
// 00445453  03ee                 add ebp, esi
// 00445455  85ff                 test edi, edi
// 00445457  77d7                 ja 0x445430
// 00445459  eb36                 jmp 0x445491
// 0044545b  eb03                 jmp 0x445460
// 0044545d  8d4900               lea ecx, [ecx]
// 00445460  8bdf                 mov ebx, edi
// 00445462  81ffffffff1f         cmp edi, 0x1fffffff
// 00445468  7205                 jb 0x44546f
// 0044546a  bbffffff1f           mov ebx, 0x1fffffff
// 0044546f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00445473  8d349d00000000       lea esi, [ebx*4]
// 0044547a  56                   push esi
// 0044547b  55                   push ebp
// 0044547c  e859573c00           call 0x80abda
// 00445481  3bc6                 cmp eax, esi
// 00445483  0f85b9000000         jne 0x445542
// 00445489  2bfb                 sub edi, ebx
// 0044548b  03ee                 add ebp, esi
// 0044548d  85ff                 test edi, edi
// 0044548f  77cf                 ja 0x445460
// 00445491  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00445495  85ed                 test ebp, ebp
// 00445497  0f84a0000000         je 0x44553d
// 0044549d  8b542428             mov edx, dword ptr [esp + 0x28]
// 004454a1  8b4218               mov eax, dword ptr [edx + 0x18]
// 004454a4  f7d0                 not eax
// 004454a6  bf01000000           mov edi, 1
// 004454ab  a801                 test al, 1
// 004454ad  7431                 je 0x4454e0
// 004454af  90                   nop 
// 004454b0  8bdf                 mov ebx, edi
// 004454b2  81ffffffff1f         cmp edi, 0x1fffffff
// 004454b8  7205                 jb 0x4454bf
// 004454ba  bbffffff1f           mov ebx, 0x1fffffff
// 004454bf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004454c3  8d349d00000000       lea esi, [ebx*4]
// 004454ca  56                   push esi
// 004454cb  55                   push ebp
// 004454cc  e80f573c00           call 0x80abe0
// 004454d1  2bfb                 sub edi, ebx
// 004454d3  03ee                 add ebp, esi
// 004454d5  85ff                 test edi, edi
// 004454d7  77d7                 ja 0x4454b0
// 004454d9  eb32                 jmp 0x44550d
// 004454db  eb03                 jmp 0x4454e0
// 004454dd  8d4900               lea ecx, [ecx]
// 004454e0  8bdf                 mov ebx, edi
// 004454e2  81ffffffff1f         cmp edi, 0x1fffffff
// 004454e8  7205                 jb 0x4454ef
// 004454ea  bbffffff1f           mov ebx, 0x1fffffff
// 004454ef  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004454f3  8d349d00000000       lea esi, [ebx*4]
// 004454fa  56                   push esi
// 004454fb  55                   push ebp
// 004454fc  e8d9563c00           call 0x80abda
// 00445501  3bc6                 cmp eax, esi
// 00445503  753d                 jne 0x445542
// 00445505  2bfb                 sub edi, ebx
// 00445507  03ee                 add ebp, esi
// 00445509  85ff                 test edi, edi
// 0044550b  77d3                 ja 0x4454e0
// 0044550d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00445511  8b4108               mov eax, dword ptr [ecx + 8]
// 00445514  89442410             mov dword ptr [esp + 0x10], eax
// 00445518  85c0                 test eax, eax
// 0044551a  0f85e4feffff         jne 0x445404
// 00445520  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00445524  8b542414             mov edx, dword ptr [esp + 0x14]
// 00445528  40                   inc eax
// 00445529  8944241c             mov dword ptr [esp + 0x1c], eax
// 0044552d  3b4208               cmp eax, dword ptr [edx + 8]
// 00445530  0f83e4010000         jae 0x44571a
// 00445536  8bf2                 mov esi, edx
// 00445538  e9b3feffff           jmp 0x4453f0
// 0044553d  e8c84d3c00           call 0x80a30a
// 00445542  6a00                 push 0
// 00445544  6a03                 push 3
// 00445546  e889563c00           call 0x80abd4
// 0044554b  e8a2563c00           call 0x80abf2
// 00445550  89442410             mov dword ptr [esp + 0x10], eax
// 00445554  85c0                 test eax, eax
// 00445556  0f84be010000         je 0x44571a
// 0044555c  8d642400             lea esp, [esp]
// 00445560  8b442428             mov eax, dword ptr [esp + 0x28]
// 00445564  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00445567  bd01000000           mov ebp, 1
// 0044556c  296c2410             sub dword ptr [esp + 0x10], ebp
// 00445570  f7d1                 not ecx
// 00445572  8d5c241c             lea ebx, [esp + 0x1c]
// 00445576  f6c101               test cl, 1
// 00445579  7435                 je 0x4455b0
// 0044557b  8bfd                 mov edi, ebp
// 0044557d  8d4900               lea ecx, [ecx]
// 00445580  8bef                 mov ebp, edi
// 00445582  81ffffffff1f         cmp edi, 0x1fffffff
// 00445588  7205                 jb 0x44558f
// 0044558a  bdffffff1f           mov ebp, 0x1fffffff
// 0044558f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00445593  8d34ad00000000       lea esi, [ebp*4]
// 0044559a  56                   push esi
// 0044559b  53                   push ebx
// 0044559c  e83f563c00           call 0x80abe0
// 004455a1  2bfd                 sub edi, ebp
// 004455a3  03de                 add ebx, esi
// 004455a5  85ff                 test edi, edi
// 004455a7  77d7                 ja 0x445580
// 004455a9  eb36                 jmp 0x4455e1
// 004455ab  eb03                 jmp 0x4455b0
// 004455ad  8d4900               lea ecx, [ecx]
// 004455b0  8bfd                 mov edi, ebp
// 004455b2  81fdffffff1f         cmp ebp, 0x1fffffff
// 004455b8  7205                 jb 0x4455bf
// 004455ba  bfffffff1f           mov edi, 0x1fffffff
// 004455bf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004455c3  8d34bd00000000       lea esi, [edi*4]
// 004455ca  56                   push esi
// 004455cb  53                   push ebx
// 004455cc  e809563c00           call 0x80abda
// 004455d1  3bc6                 cmp eax, esi
// 004455d3  0f8569ffffff         jne 0x445542
// 004455d9  2bef                 sub ebp, edi
// 004455db  03de                 add ebx, esi
// 004455dd  85ed                 test ebp, ebp
// 004455df  77cf                 ja 0x4455b0
// 004455e1  8b542428             mov edx, dword ptr [esp + 0x28]
// 004455e5  8b4218               mov eax, dword ptr [edx + 0x18]
// 004455e8  f7d0                 not eax
// 004455ea  8d5c2418             lea ebx, [esp + 0x18]
// 004455ee  a801                 test al, 1
// 004455f0  7439                 je 0x44562b
// 004455f2  bf01000000           mov edi, 1
// 004455f7  eb07                 jmp 0x445600
// 004455f9  8da42400000000       lea esp, [esp]
// 00445600  8bef                 mov ebp, edi
// 00445602  81ffffffff1f         cmp edi, 0x1fffffff
// 00445608  7205                 jb 0x44560f
// 0044560a  bdffffff1f           mov ebp, 0x1fffffff
// 0044560f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00445613  8d34ad00000000       lea esi, [ebp*4]
// 0044561a  56                   push esi
// 0044561b  53                   push ebx
// 0044561c  e8bf553c00           call 0x80abe0
// 00445621  2bfd                 sub edi, ebp
// 00445623  03de                 add ebx, esi
// 00445625  85ff                 test edi, edi
// 00445627  77d7                 ja 0x445600
// 00445629  eb36                 jmp 0x445661
// 0044562b  bd01000000           mov ebp, 1
// 00445630  8bfd                 mov edi, ebp
// 00445632  81fdffffff1f         cmp ebp, 0x1fffffff
// 00445638  7205                 jb 0x44563f
// 0044563a  bfffffff1f           mov edi, 0x1fffffff
// 0044563f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00445643  8d34bd00000000       lea esi, [edi*4]
// 0044564a  56                   push esi
// 0044564b  53                   push ebx
// 0044564c  e889553c00           call 0x80abda
// 00445651  3bc6                 cmp eax, esi
// 00445653  0f85e9feffff         jne 0x445542
// 00445659  2bef                 sub ebp, edi
// 0044565b  03de                 add ebx, esi
// 0044565d  85ed                 test ebp, ebp
// 0044565f  77cf                 ja 0x445630
// 00445661  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00445665  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00445669  8b6f08               mov ebp, dword ptr [edi + 8]
// 0044566c  8bf3                 mov esi, ebx
// 0044566e  c1ee04               shr esi, 4
// 00445671  33d2                 xor edx, edx
// 00445673  8bc6                 mov eax, esi
// 00445675  f7f5                 div ebp
// 00445677  8b4f04               mov ecx, dword ptr [edi + 4]
// 0044567a  89542420             mov dword ptr [esp + 0x20], edx
// 0044567e  85c9                 test ecx, ecx
// 00445680  7422                 je 0x4456a4
// 00445682  8b0491               mov eax, dword ptr [ecx + edx*4]
// 00445685  85c0                 test eax, eax
// 00445687  7417                 je 0x4456a0
// 00445689  8da42400000000       lea esp, [esp]
// 00445690  39700c               cmp dword ptr [eax + 0xc], esi
// 00445693  7504                 jne 0x445699
// 00445695  3918                 cmp dword ptr [eax], ebx
// 00445697  746f                 je 0x445708
// 00445699  8b4008               mov eax, dword ptr [eax + 8]
// 0044569c  85c0                 test eax, eax
// 0044569e  75f0                 jne 0x445690
// 004456a0  85c9                 test ecx, ecx
// 004456a2  753c                 jne 0x4456e0
// 004456a4  33c9                 xor ecx, ecx
// 004456a6  8bc5                 mov eax, ebp
// 004456a8  ba04000000           mov edx, 4
// 004456ad  f7e2                 mul edx
// 004456af  0f90c1               seto cl
// 004456b2  f7d9                 neg ecx
// 004456b4  0bc8                 or ecx, eax
// 004456b6  51                   push ecx
// 004456b7  e8844c3c00           call 0x80a340
// 004456bc  83c404               add esp, 4
// 004456bf  894704               mov dword ptr [edi + 4], eax
// 004456c2  85c0                 test eax, eax
// 004456c4  0f8473feffff         je 0x44553d
// 004456ca  8d0cad00000000       lea ecx, [ebp*4]
// 004456d1  51                   push ecx
// 004456d2  6a00                 push 0
// 004456d4  50                   push eax
// 004456d5  e80a5c3c00           call 0x80b2e4
// 004456da  83c40c               add esp, 0xc
// 004456dd  896f08               mov dword ptr [edi + 8], ebp
// 004456e0  837f0400             cmp dword ptr [edi + 4], 0
// 004456e4  0f8453feffff         je 0x44553d
// 004456ea  53                   push ebx
// 004456eb  8bcf                 mov ecx, edi
// 004456ed  e81e9c4700           call 0x8bf310
// 004456f2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004456f6  89700c               mov dword ptr [eax + 0xc], esi
// 004456f9  8b5704               mov edx, dword ptr [edi + 4]
// 004456fc  8b148a               mov edx, dword ptr [edx + ecx*4]
// 004456ff  895008               mov dword ptr [eax + 8], edx
// 00445702  8b5704               mov edx, dword ptr [edi + 4]
// 00445705  89048a               mov dword ptr [edx + ecx*4], eax
// 00445708  837c241000           cmp dword ptr [esp + 0x10], 0
// 0044570d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00445711  894804               mov dword ptr [eax + 4], ecx
// 00445714  0f8546feffff         jne 0x445560
// 0044571a  5f                   pop edi
// 0044571b  5e                   pop esi
// 0044571c  5d                   pop ebp
// 0044571d  5b                   pop ebx
// 0044571e  83c414               add esp, 0x14
// 00445721  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarTheme.cpp (function ?Serialize@?$CMap@IIIAAI@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarTheme.cpp

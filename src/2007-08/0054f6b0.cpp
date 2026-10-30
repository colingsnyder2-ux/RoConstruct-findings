// roc 2007-08 0054f6b0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f6b0
//
// 0054f6b0  83ec08               sub esp, 8
// 0054f6b3  53                   push ebx
// 0054f6b4  8bd9                 mov ebx, ecx
// 0054f6b6  8b03                 mov eax, dword ptr [ebx]
// 0054f6b8  b902000000           mov ecx, 2
// 0054f6bd  844824               test byte ptr [eax + 0x24], cl
// 0054f6c0  55                   push ebp
// 0054f6c1  7513                 jne 0x54f6d6
// 0054f6c3  094824               or dword ptr [eax + 0x24], ecx
// 0054f6c6  8b03                 mov eax, dword ptr [ebx]
// 0054f6c8  8b5018               mov edx, dword ptr [eax + 0x18]
// 0054f6cb  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054f6ce  89481c               mov dword ptr [eax + 0x1c], ecx
// 0054f6d1  03ca                 add ecx, edx
// 0054f6d3  894820               mov dword ptr [eax + 0x20], ecx
// 0054f6d6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0054f6da  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054f6de  8b2b                 mov ebp, dword ptr [ebx]
// 0054f6e0  03c1                 add eax, ecx
// 0054f6e2  83c514               add ebp, 0x14
// 0054f6e5  3bc8                 cmp ecx, eax
// 0054f6e7  896c240c             mov dword ptr [esp + 0xc], ebp
// 0054f6eb  894c2408             mov dword ptr [esp + 8], ecx
// 0054f6ef  8944241c             mov dword ptr [esp + 0x1c], eax
// 0054f6f3  0f84bf000000         je 0x54f7b8
// 0054f6f9  56                   push esi
// 0054f6fa  57                   push edi
// 0054f6fb  eb03                 jmp 0x54f700
// 0054f6fd  8d4900               lea ecx, [ecx]
// 0054f700  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054f703  3b4d0c               cmp ecx, dword ptr [ebp + 0xc]
// 0054f706  7557                 jne 0x54f75f
// 0054f708  8b03                 mov eax, dword ptr [ebx]
// 0054f70a  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054f70d  8b701c               mov esi, dword ptr [eax + 0x1c]
// 0054f710  2bf1                 sub esi, ecx
// 0054f712  56                   push esi
// 0054f713  51                   push ecx
// 0054f714  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054f718  ff1500e67700         call dword ptr [0x77e600]
// 0054f71e  8bf8                 mov edi, eax
// 0054f720  3bfe                 cmp edi, esi
// 0054f722  7d1d                 jge 0x54f741
// 0054f724  85ff                 test edi, edi
// 0054f726  7e19                 jle 0x54f741
// 0054f728  8b13                 mov edx, dword ptr [ebx]
// 0054f72a  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 0054f72d  8bc6                 mov eax, esi
// 0054f72f  2bc7                 sub eax, edi
// 0054f731  50                   push eax
// 0054f732  8d1439               lea edx, [ecx + edi]
// 0054f735  52                   push edx
// 0054f736  50                   push eax
// 0054f737  51                   push ecx
// 0054f738  ff1548e77700         call dword ptr [0x77e748]
// 0054f73e  83c410               add esp, 0x10
// 0054f741  8b03                 mov eax, dword ptr [ebx]
// 0054f743  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054f746  8b5018               mov edx, dword ptr [eax + 0x18]
// 0054f749  8be9                 mov ebp, ecx
// 0054f74b  2bef                 sub ebp, edi
// 0054f74d  03ee                 add ebp, esi
// 0054f74f  03ca                 add ecx, edx
// 0054f751  85ff                 test edi, edi
// 0054f753  89681c               mov dword ptr [eax + 0x1c], ebp
// 0054f756  894820               mov dword ptr [eax + 0x20], ecx
// 0054f759  7457                 je 0x54f7b2
// 0054f75b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0054f75f  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0054f762  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054f766  8b33                 mov esi, dword ptr [ebx]
// 0054f768  50                   push eax
// 0054f769  8d4508               lea eax, [ebp + 8]
// 0054f76c  50                   push eax
// 0054f76d  51                   push ecx
// 0054f76e  8d54241c             lea edx, [esp + 0x1c]
// 0054f772  52                   push edx
// 0054f773  8bce                 mov ecx, esi
// 0054f775  e816d20700           call 0x5cc990
// 0054f77a  a1a0a57b00           mov eax, dword ptr [0x7ba5a0]
// 0054f77f  50                   push eax
// 0054f780  8bce                 mov ecx, esi
// 0054f782  e899d20700           call 0x5cca20
// 0054f787  8bf8                 mov edi, eax
// 0054f789  6a01                 push 1
// 0054f78b  8d4508               lea eax, [ebp + 8]
// 0054f78e  50                   push eax
// 0054f78f  8d4c2418             lea ecx, [esp + 0x18]
// 0054f793  51                   push ecx
// 0054f794  8bce                 mov ecx, esi
// 0054f796  e825d20700           call 0x5cc9c0
// 0054f79b  57                   push edi
// 0054f79c  e83fd10700           call 0x5cc8e0
// 0054f7a1  8b542414             mov edx, dword ptr [esp + 0x14]
// 0054f7a5  83c404               add esp, 4
// 0054f7a8  3b542424             cmp edx, dword ptr [esp + 0x24]
// 0054f7ac  0f854effffff         jne 0x54f700
// 0054f7b2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0054f7b6  5f                   pop edi
// 0054f7b7  5e                   pop esi
// 0054f7b8  8b442408             mov eax, dword ptr [esp + 8]
// 0054f7bc  5d                   pop ebp
// 0054f7bd  2bc1                 sub eax, ecx
// 0054f7bf  5b                   pop ebx
// 0054f7c0  83c408               add esp, 8
// 0054f7c3  c20c00               ret 0xc
// copied from an identical function in another client (function ??$write@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$symmetric_filter@V?$zlib_compressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PBDH@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_916365a4f87a380b.cpp
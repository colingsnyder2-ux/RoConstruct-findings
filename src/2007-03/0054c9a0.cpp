// roc 2007-03 0054c9a0  unit: seg_00540000  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054c9a0
//
// 0054c9a0  83ec08               sub esp, 8
// 0054c9a3  53                   push ebx
// 0054c9a4  8bd9                 mov ebx, ecx
// 0054c9a6  8b03                 mov eax, dword ptr [ebx]
// 0054c9a8  b902000000           mov ecx, 2
// 0054c9ad  844824               test byte ptr [eax + 0x24], cl
// 0054c9b0  55                   push ebp
// 0054c9b1  7513                 jne 0x54c9c6
// 0054c9b3  094824               or dword ptr [eax + 0x24], ecx
// 0054c9b6  8b03                 mov eax, dword ptr [ebx]
// 0054c9b8  8b5018               mov edx, dword ptr [eax + 0x18]
// 0054c9bb  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054c9be  89481c               mov dword ptr [eax + 0x1c], ecx
// 0054c9c1  03ca                 add ecx, edx
// 0054c9c3  894820               mov dword ptr [eax + 0x20], ecx
// 0054c9c6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0054c9ca  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054c9ce  8b2b                 mov ebp, dword ptr [ebx]
// 0054c9d0  03c1                 add eax, ecx
// 0054c9d2  83c514               add ebp, 0x14
// 0054c9d5  3bc8                 cmp ecx, eax
// 0054c9d7  896c240c             mov dword ptr [esp + 0xc], ebp
// 0054c9db  894c2408             mov dword ptr [esp + 8], ecx
// 0054c9df  8944241c             mov dword ptr [esp + 0x1c], eax
// 0054c9e3  0f84bf000000         je 0x54caa8
// 0054c9e9  56                   push esi
// 0054c9ea  57                   push edi
// 0054c9eb  eb03                 jmp 0x54c9f0
// 0054c9ed  8d4900               lea ecx, [ecx]
// 0054c9f0  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054c9f3  3b4d0c               cmp ecx, dword ptr [ebp + 0xc]
// 0054c9f6  7557                 jne 0x54ca4f
// 0054c9f8  8b03                 mov eax, dword ptr [ebx]
// 0054c9fa  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054c9fd  8b701c               mov esi, dword ptr [eax + 0x1c]
// 0054ca00  2bf1                 sub esi, ecx
// 0054ca02  56                   push esi
// 0054ca03  51                   push ecx
// 0054ca04  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054ca08  ff1550e77700         call dword ptr [0x77e750]
// 0054ca0e  8bf8                 mov edi, eax
// 0054ca10  3bfe                 cmp edi, esi
// 0054ca12  7d1d                 jge 0x54ca31
// 0054ca14  85ff                 test edi, edi
// 0054ca16  7e19                 jle 0x54ca31
// 0054ca18  8b13                 mov edx, dword ptr [ebx]
// 0054ca1a  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 0054ca1d  8bc6                 mov eax, esi
// 0054ca1f  2bc7                 sub eax, edi
// 0054ca21  50                   push eax
// 0054ca22  8d1439               lea edx, [ecx + edi]
// 0054ca25  52                   push edx
// 0054ca26  50                   push eax
// 0054ca27  51                   push ecx
// 0054ca28  ff1578e97700         call dword ptr [0x77e978]
// 0054ca2e  83c410               add esp, 0x10
// 0054ca31  8b03                 mov eax, dword ptr [ebx]
// 0054ca33  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054ca36  8b5018               mov edx, dword ptr [eax + 0x18]
// 0054ca39  8be9                 mov ebp, ecx
// 0054ca3b  2bef                 sub ebp, edi
// 0054ca3d  03ee                 add ebp, esi
// 0054ca3f  03ca                 add ecx, edx
// 0054ca41  85ff                 test edi, edi
// 0054ca43  89681c               mov dword ptr [eax + 0x1c], ebp
// 0054ca46  894820               mov dword ptr [eax + 0x20], ecx
// 0054ca49  7457                 je 0x54caa2
// 0054ca4b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0054ca4f  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0054ca52  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054ca56  8b33                 mov esi, dword ptr [ebx]
// 0054ca58  50                   push eax
// 0054ca59  8d4508               lea eax, [ebp + 8]
// 0054ca5c  50                   push eax
// 0054ca5d  51                   push ecx
// 0054ca5e  8d54241c             lea edx, [esp + 0x1c]
// 0054ca62  52                   push edx
// 0054ca63  8bce                 mov ecx, esi
// 0054ca65  e816ad0700           call 0x5c7780
// 0054ca6a  a140a67b00           mov eax, dword ptr [0x7ba640]
// 0054ca6f  50                   push eax
// 0054ca70  8bce                 mov ecx, esi
// 0054ca72  e899ad0700           call 0x5c7810
// 0054ca77  8bf8                 mov edi, eax
// 0054ca79  6a01                 push 1
// 0054ca7b  8d4508               lea eax, [ebp + 8]
// 0054ca7e  50                   push eax
// 0054ca7f  8d4c2418             lea ecx, [esp + 0x18]
// 0054ca83  51                   push ecx
// 0054ca84  8bce                 mov ecx, esi
// 0054ca86  e825ad0700           call 0x5c77b0
// 0054ca8b  57                   push edi
// 0054ca8c  e83fac0700           call 0x5c76d0
// 0054ca91  8b542414             mov edx, dword ptr [esp + 0x14]
// 0054ca95  83c404               add esp, 4
// 0054ca98  3b542424             cmp edx, dword ptr [esp + 0x24]
// 0054ca9c  0f854effffff         jne 0x54c9f0
// 0054caa2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0054caa6  5f                   pop edi
// 0054caa7  5e                   pop esi
// 0054caa8  8b442408             mov eax, dword ptr [esp + 8]
// 0054caac  5d                   pop ebp
// 0054caad  2bc1                 sub eax, ecx
// 0054caaf  5b                   pop ebx
// 0054cab0  83c408               add esp, 8
// 0054cab3  c20c00               ret 0xc
// copied from an identical function in another client (function ??$write@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$symmetric_filter@V?$zlib_compressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PBDH@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_916365a4f87a380b.cpp
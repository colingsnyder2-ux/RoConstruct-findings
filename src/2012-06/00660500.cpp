// roc 2012-06 00660500  unit: seg_00660000  size: 312 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00660500
//
// 00660500  56                   push esi
// 00660501  57                   push edi
// 00660502  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00660506  8bb784010000         mov esi, dword ptr [edi + 0x184]
// 0066050c  807e3000             cmp byte ptr [esi + 0x30], 0
// 00660510  7526                 jne 0x660538
// 00660512  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00660515  8b548e38             mov edx, dword ptr [esi + ecx*4 + 0x38]
// 00660519  8b8788010000         mov eax, dword ptr [edi + 0x188]
// 0066051f  8b400c               mov eax, dword ptr [eax + 0xc]
// 00660522  52                   push edx
// 00660523  57                   push edi
// 00660524  ffd0                 call eax
// 00660526  83c408               add esp, 8
// 00660529  85c0                 test eax, eax
// 0066052b  0f8404010000         je 0x660635
// 00660531  ff464c               inc dword ptr [esi + 0x4c]
// 00660534  c6463001             mov byte ptr [esi + 0x30], 1
// 00660538  8b4644               mov eax, dword ptr [esi + 0x44]
// 0066053b  83e800               sub eax, 0
// 0066053e  53                   push ebx
// 0066053f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00660543  55                   push ebp
// 00660544  7457                 je 0x66059d
// 00660546  83e801               sub eax, 1
// 00660549  747e                 je 0x6605c9
// 0066054b  83e801               sub eax, 1
// 0066054e  0f85df000000         jne 0x660633
// 00660554  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00660558  8b442418             mov eax, dword ptr [esp + 0x18]
// 0066055c  8b8f8c010000         mov ecx, dword ptr [edi + 0x18c]
// 00660562  53                   push ebx
// 00660563  52                   push edx
// 00660564  8b5648               mov edx, dword ptr [esi + 0x48]
// 00660567  50                   push eax
// 00660568  8b4640               mov eax, dword ptr [esi + 0x40]
// 0066056b  52                   push edx
// 0066056c  8b548638             mov edx, dword ptr [esi + eax*4 + 0x38]
// 00660570  8b4104               mov eax, dword ptr [ecx + 4]
// 00660573  8d6e34               lea ebp, [esi + 0x34]
// 00660576  55                   push ebp
// 00660577  52                   push edx
// 00660578  57                   push edi
// 00660579  ffd0                 call eax
// 0066057b  8b4d00               mov ecx, dword ptr [ebp]
// 0066057e  83c41c               add esp, 0x1c
// 00660581  3b4e48               cmp ecx, dword ptr [esi + 0x48]
// 00660584  0f82a9000000         jb 0x660633
// 0066058a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0066058e  c7464400000000       mov dword ptr [esi + 0x44], 0
// 00660595  391a                 cmp dword ptr [edx], ebx
// 00660597  0f8396000000         jae 0x660633
// 0066059d  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 006605a0  c7463400000000       mov dword ptr [esi + 0x34], 0
// 006605a7  8b8718010000         mov eax, dword ptr [edi + 0x118]
// 006605ad  48                   dec eax
// 006605ae  894648               mov dword ptr [esi + 0x48], eax
// 006605b1  3b8f1c010000         cmp ecx, dword ptr [edi + 0x11c]
// 006605b7  7509                 jne 0x6605c2
// 006605b9  57                   push edi
// 006605ba  e831feffff           call 0x6603f0
// 006605bf  83c404               add esp, 4
// 006605c2  c7464401000000       mov dword ptr [esi + 0x44], 1
// 006605c9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006605cd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006605d1  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 006605d7  53                   push ebx
// 006605d8  50                   push eax
// 006605d9  8b4648               mov eax, dword ptr [esi + 0x48]
// 006605dc  51                   push ecx
// 006605dd  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 006605e0  50                   push eax
// 006605e1  8b448e38             mov eax, dword ptr [esi + ecx*4 + 0x38]
// 006605e5  8b4a04               mov ecx, dword ptr [edx + 4]
// 006605e8  8d6e34               lea ebp, [esi + 0x34]
// 006605eb  55                   push ebp
// 006605ec  50                   push eax
// 006605ed  57                   push edi
// 006605ee  ffd1                 call ecx
// 006605f0  8b5500               mov edx, dword ptr [ebp]
// 006605f3  83c41c               add esp, 0x1c
// 006605f6  3b5648               cmp edx, dword ptr [esi + 0x48]
// 006605f9  7238                 jb 0x660633
// 006605fb  bb01000000           mov ebx, 1
// 00660600  395e4c               cmp dword ptr [esi + 0x4c], ebx
// 00660603  7509                 jne 0x66060e
// 00660605  57                   push edi
// 00660606  e805fdffff           call 0x660310
// 0066060b  83c404               add esp, 4
// 0066060e  315e40               xor dword ptr [esi + 0x40], ebx
// 00660611  c6463000             mov byte ptr [esi + 0x30], 0
// 00660615  8b8718010000         mov eax, dword ptr [edi + 0x118]
// 0066061b  03c3                 add eax, ebx
// 0066061d  894500               mov dword ptr [ebp], eax
// 00660620  8b8f18010000         mov ecx, dword ptr [edi + 0x118]
// 00660626  83c102               add ecx, 2
// 00660629  894e48               mov dword ptr [esi + 0x48], ecx
// 0066062c  c7464402000000       mov dword ptr [esi + 0x44], 2
// 00660633  5d                   pop ebp
// 00660634  5b                   pop ebx
// 00660635  5f                   pop edi
// 00660636  5e                   pop esi
// 00660637  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_context_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c

// roc 2008-06 0075bcc0  unit: CXTPDockingPaneMiniWnd  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075bcc0
//
// 0075bcc0  83ec48               sub esp, 0x48
// 0075bcc3  53                   push ebx
// 0075bcc4  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 0075bcc8  56                   push esi
// 0075bcc9  53                   push ebx
// 0075bcca  8bf1                 mov esi, ecx
// 0075bccc  e81b0c0600           call 0x7bc8ec
// 0075bcd1  83be3001000000       cmp dword ptr [esi + 0x130], 0
// 0075bcd8  0f84c4000000         je 0x75bda2
// 0075bcde  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 0075bce5  740d                 je 0x75bcf4
// 0075bce7  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 0075bcee  0f84ae000000         je 0x75bda2
// 0075bcf4  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 0075bcfb  0f85a1000000         jne 0x75bda2
// 0075bd01  55                   push ebp
// 0075bd02  57                   push edi
// 0075bd03  56                   push esi
// 0075bd04  8d4c2424             lea ecx, [esp + 0x24]
// 0075bd08  e8c3bdf9ff           call 0x6f7ad0
// 0075bd0d  56                   push esi
// 0075bd0e  8d4c2414             lea ecx, [esp + 0x14]
// 0075bd12  e819bef9ff           call 0x6f7b30
// 0075bd17  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0075bd1b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0075bd1f  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 0075bd23  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 0075bd27  8b542418             mov edx, dword ptr [esp + 0x18]
// 0075bd2b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0075bd2f  2b442420             sub eax, dword ptr [esp + 0x20]
// 0075bd33  2b542410             sub edx, dword ptr [esp + 0x10]
// 0075bd37  8bb630010000         mov esi, dword ptr [esi + 0x130]
// 0075bd3d  2bc2                 sub eax, edx
// 0075bd3f  2bcf                 sub ecx, edi
// 0075bd41  8bf9                 mov edi, ecx
// 0075bd43  8be8                 mov ebp, eax
// 0075bd45  8b4620               mov eax, dword ptr [esi + 0x20]
// 0075bd48  8b4010               mov eax, dword ptr [eax + 0x10]
// 0075bd4b  8d4e20               lea ecx, [esi + 0x20]
// 0075bd4e  8d542430             lea edx, [esp + 0x30]
// 0075bd52  52                   push edx
// 0075bd53  ffd0                 call eax
// 0075bd55  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0075bd59  8d0429               lea eax, [ecx + ebp]
// 0075bd5c  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 0075bd5f  3bc8                 cmp ecx, eax
// 0075bd61  7e02                 jle 0x75bd65
// 0075bd63  8bc1                 mov eax, ecx
// 0075bd65  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0075bd69  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 0075bd6c  894318               mov dword ptr [ebx + 0x18], eax
// 0075bd6f  8d0417               lea eax, [edi + edx]
// 0075bd72  3bc8                 cmp ecx, eax
// 0075bd74  7e02                 jle 0x75bd78
// 0075bd76  8bc1                 mov eax, ecx
// 0075bd78  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0075bd7b  89431c               mov dword ptr [ebx + 0x1c], eax
// 0075bd7e  8b442450             mov eax, dword ptr [esp + 0x50]
// 0075bd82  03c5                 add eax, ebp
// 0075bd84  3bc8                 cmp ecx, eax
// 0075bd86  7d02                 jge 0x75bd8a
// 0075bd88  8bc1                 mov eax, ecx
// 0075bd8a  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0075bd8e  894320               mov dword ptr [ebx + 0x20], eax
// 0075bd91  8d0439               lea eax, [ecx + edi]
// 0075bd94  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 0075bd97  3bc8                 cmp ecx, eax
// 0075bd99  5f                   pop edi
// 0075bd9a  5d                   pop ebp
// 0075bd9b  7d02                 jge 0x75bd9f
// 0075bd9d  8bc1                 mov eax, ecx
// 0075bd9f  894324               mov dword ptr [ebx + 0x24], eax
// 0075bda2  5e                   pop esi
// 0075bda3  5b                   pop ebx
// 0075bda4  83c448               add esp, 0x48
// 0075bda7  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnGetMinMaxInfo@CXTPDockingPaneMiniWnd@@IAEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp

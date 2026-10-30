// roc 2010-06 00831b30  unit: CXTPRibbonTheme  size: 634 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00831b30
//
// 00831b30  6aff                 push -1
// 00831b32  68aa609b00           push 0x9b60aa
// 00831b37  64a100000000         mov eax, dword ptr fs:[0]
// 00831b3d  50                   push eax
// 00831b3e  83ec44               sub esp, 0x44
// 00831b41  53                   push ebx
// 00831b42  55                   push ebp
// 00831b43  56                   push esi
// 00831b44  57                   push edi
// 00831b45  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00831b4a  33c4                 xor eax, esp
// 00831b4c  50                   push eax
// 00831b4d  8d442458             lea eax, [esp + 0x58]
// 00831b51  64a300000000         mov dword ptr fs:[0], eax
// 00831b57  8bf9                 mov edi, ecx
// 00831b59  897c2414             mov dword ptr [esp + 0x14], edi
// 00831b5d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00831b61  e8fad80600           call 0x89f460
// 00831b66  8bf0                 mov esi, eax
// 00831b68  33db                 xor ebx, ebx
// 00831b6a  89742420             mov dword ptr [esp + 0x20], esi
// 00831b6e  3bf3                 cmp esi, ebx
// 00831b70  0f841e020000         je 0x831d94
// 00831b76  8b8768060000         mov eax, dword ptr [edi + 0x668]
// 00831b7c  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 00831b80  050c010000           add eax, 0x10c
// 00831b85  50                   push eax
// 00831b86  55                   push ebp
// 00831b87  8d4c2440             lea ecx, [esp + 0x40]
// 00831b8b  e810dbfcff           call 0x7ff6a0
// 00831b90  6a01                 push 1
// 00831b92  8bcd                 mov ecx, ebp
// 00831b94  895c2464             mov dword ptr [esp + 0x64], ebx
// 00831b98  e817b21400           call 0x97cdb4
// 00831b9d  8b8768060000         mov eax, dword ptr [edi + 0x668]
// 00831ba3  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00831ba9  8b88ac000000         mov ecx, dword ptr [eax + 0xac]
// 00831baf  83f9ff               cmp ecx, -1
// 00831bb2  7508                 jne 0x831bbc
// 00831bb4  8b80a8000000         mov eax, dword ptr [eax + 0xa8]
// 00831bba  eb02                 jmp 0x831bbe
// 00831bbc  8bc1                 mov eax, ecx
// 00831bbe  8b5500               mov edx, dword ptr [ebp]
// 00831bc1  50                   push eax
// 00831bc2  8b4238               mov eax, dword ptr [edx + 0x38]
// 00831bc5  8bcd                 mov ecx, ebp
// 00831bc7  ffd0                 call eax
// 00831bc9  3bf3                 cmp esi, ebx
// 00831bcb  895c2468             mov dword ptr [esp + 0x68], ebx
// 00831bcf  0f8eae010000         jle 0x831d83
// 00831bd5  eb04                 jmp 0x831bdb
// 00831bd7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00831bdb  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00831bdf  51                   push ecx
// 00831be0  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00831be4  e807a00400           call 0x87bbf0
// 00831be9  8bf0                 mov esi, eax
// 00831beb  8b560c               mov edx, dword ptr [esi + 0xc]
// 00831bee  52                   push edx
// 00831bef  8d442420             lea eax, [esp + 0x20]
// 00831bf3  50                   push eax
// 00831bf4  e8c7a3ffff           call 0x82bfc0
// 00831bf9  83c408               add esp, 8
// 00831bfc  8bc8                 mov ecx, eax
// 00831bfe  c644246001           mov byte ptr [esp + 0x60], 1
// 00831c03  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00831c09  50                   push eax
// 00831c0a  8d4c241c             lea ecx, [esp + 0x1c]
// 00831c0e  68b061a600           push 0xa661b0
// 00831c13  51                   push ecx
// 00831c14  e837a3ffff           call 0x82bf50
// 00831c19  83c40c               add esp, 0xc
// 00831c1c  8bc8                 mov ecx, eax
// 00831c1e  c644246002           mov byte ptr [esp + 0x60], 2
// 00831c23  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00831c29  50                   push eax
// 00831c2a  8bcf                 mov ecx, edi
// 00831c2c  e8cf050000           call 0x832200
// 00831c31  8d4c2418             lea ecx, [esp + 0x18]
// 00831c35  8bf8                 mov edi, eax
// 00831c37  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00831c3d  8d4c241c             lea ecx, [esp + 0x1c]
// 00831c41  c644246000           mov byte ptr [esp + 0x60], 0
// 00831c46  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00831c4c  85ff                 test edi, edi
// 00831c4e  0f842f010000         je 0x831d83
// 00831c54  8b5610               mov edx, dword ptr [esi + 0x10]
// 00831c57  89542428             mov dword ptr [esp + 0x28], edx
// 00831c5b  8b4614               mov eax, dword ptr [esi + 0x14]
// 00831c5e  8944242c             mov dword ptr [esp + 0x2c], eax
// 00831c62  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00831c65  bb01000000           mov ebx, 1
// 00831c6a  53                   push ebx
// 00831c6b  894c2434             mov dword ptr [esp + 0x34], ecx
// 00831c6f  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00831c72  6a00                 push 0
// 00831c74  8d442450             lea eax, [esp + 0x50]
// 00831c78  50                   push eax
// 00831c79  8bcf                 mov ecx, edi
// 00831c7b  89542440             mov dword ptr [esp + 0x40], edx
// 00831c7f  e8ac2e0600           call 0x894b30
// 00831c84  83ec10               sub esp, 0x10
// 00831c87  8bcc                 mov ecx, esp
// 00831c89  8919                 mov dword ptr [ecx], ebx
// 00831c8b  8bd3                 mov edx, ebx
// 00831c8d  895104               mov dword ptr [ecx + 4], edx
// 00831c90  895108               mov dword ptr [ecx + 8], edx
// 00831c93  89510c               mov dword ptr [ecx + 0xc], edx
// 00831c96  8b10                 mov edx, dword ptr [eax]
// 00831c98  83ec10               sub esp, 0x10
// 00831c9b  8bcc                 mov ecx, esp
// 00831c9d  8911                 mov dword ptr [ecx], edx
// 00831c9f  8b5004               mov edx, dword ptr [eax + 4]
// 00831ca2  895104               mov dword ptr [ecx + 4], edx
// 00831ca5  8b5008               mov edx, dword ptr [eax + 8]
// 00831ca8  8b400c               mov eax, dword ptr [eax + 0xc]
// 00831cab  895108               mov dword ptr [ecx + 8], edx
// 00831cae  89410c               mov dword ptr [ecx + 0xc], eax
// 00831cb1  8d4c2448             lea ecx, [esp + 0x48]
// 00831cb5  51                   push ecx
// 00831cb6  55                   push ebp
// 00831cb7  8bcf                 mov ecx, edi
// 00831cb9  e842270600           call 0x894400
// 00831cbe  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 00831cc2  8344242806           add dword ptr [esp + 0x28], 6
// 00831cc7  8bcf                 mov ecx, edi
// 00831cc9  e892710100           call 0x848e60
// 00831cce  85c0                 test eax, eax
// 00831cd0  740b                 je 0x831cdd
// 00831cd2  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 00831cd8  8b4040               mov eax, dword ptr [eax + 0x40]
// 00831cdb  eb02                 jmp 0x831cdf
// 00831cdd  33c0                 xor eax, eax
// 00831cdf  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00831ce3  8d4402fe             lea eax, [edx + eax - 2]
// 00831ce7  8bcf                 mov ecx, edi
// 00831ce9  8944242c             mov dword ptr [esp + 0x2c], eax
// 00831ced  e85e780100           call 0x849550
// 00831cf2  85c0                 test eax, eax
// 00831cf4  744f                 je 0x831d45
// 00831cf6  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 00831cfc  8b4018               mov eax, dword ptr [eax + 0x18]
// 00831cff  50                   push eax
// 00831d00  8bcf                 mov ecx, edi
// 00831d02  e8f994f8ff           call 0x7bb200
// 00831d07  50                   push eax
// 00831d08  51                   push ecx
// 00831d09  83c608               add esi, 8
// 00831d0c  8bcc                 mov ecx, esp
// 00831d0e  89642430             mov dword ptr [esp + 0x30], esp
// 00831d12  56                   push esi
// 00831d13  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 00831d19  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00831d1d  8b542438             mov edx, dword ptr [esp + 0x38]
// 00831d21  83ec10               sub esp, 0x10
// 00831d24  8bc4                 mov eax, esp
// 00831d26  8908                 mov dword ptr [eax], ecx
// 00831d28  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00831d2c  895004               mov dword ptr [eax + 4], edx
// 00831d2f  8b542450             mov edx, dword ptr [esp + 0x50]
// 00831d33  894808               mov dword ptr [eax + 8], ecx
// 00831d36  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00831d3a  55                   push ebp
// 00831d3b  89500c               mov dword ptr [eax + 0xc], edx
// 00831d3e  e8eddcffff           call 0x82fa30
// 00831d43  eb2b                 jmp 0x831d70
// 00831d45  8d7e08               lea edi, [esi + 8]
// 00831d48  8b7500               mov esi, dword ptr [ebp]
// 00831d4b  6824880000           push 0x8824
// 00831d50  8d44242c             lea eax, [esp + 0x2c]
// 00831d54  50                   push eax
// 00831d55  8bcf                 mov ecx, edi
// 00831d57  83c670               add esi, 0x70
// 00831d5a  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00831d60  50                   push eax
// 00831d61  8bcf                 mov ecx, edi
// 00831d63  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00831d69  8b16                 mov edx, dword ptr [esi]
// 00831d6b  50                   push eax
// 00831d6c  8bcd                 mov ecx, ebp
// 00831d6e  ffd2                 call edx
// 00831d70  8b442468             mov eax, dword ptr [esp + 0x68]
// 00831d74  40                   inc eax
// 00831d75  3b442420             cmp eax, dword ptr [esp + 0x20]
// 00831d79  89442468             mov dword ptr [esp + 0x68], eax
// 00831d7d  0f8c54feffff         jl 0x831bd7
// 00831d83  8d4c2438             lea ecx, [esp + 0x38]
// 00831d87  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 00831d8f  e88cd9fcff           call 0x7ff720
// 00831d94  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00831d98  64890d00000000       mov dword ptr fs:[0], ecx
// 00831d9f  59                   pop ecx
// 00831da0  5f                   pop edi
// 00831da1  5e                   pop esi
// 00831da2  5d                   pop ebp
// 00831da3  5b                   pop ebx
// 00831da4  83c450               add esp, 0x50
// 00831da7  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawRibbonFrameContextHeaders@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonBar@@PAVCXTPRibbonTabContextHeaders@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp
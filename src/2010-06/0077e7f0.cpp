// from server: 100% by auto
// roc 2010-06 0077e7f0  unit: seg_00770000  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077e7f0
//
// 0077e7f0  53                   push ebx
// 0077e7f1  55                   push ebp
// 0077e7f2  56                   push esi
// 0077e7f3  8b742418             mov esi, dword ptr [esp + 0x18]
// 0077e7f7  57                   push edi
// 0077e7f8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0077e7fc  8b4720               mov eax, dword ptr [edi + 0x20]
// 0077e7ff  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0077e803  7406                 je 0x77e80b
// 0077e805  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0077e809  7402                 je 0x77e80d
// 0077e80b  33c0                 xor eax, eax
// 0077e80d  e8cefcffff           call 0x77e4e0
// 0077e812  837e1000             cmp dword ptr [esi + 0x10], 0
// 0077e816  8b473c               mov eax, dword ptr [edi + 0x3c]
// 0077e819  89442414             mov dword ptr [esp + 0x14], eax
// 0077e81d  7519                 jne 0x77e838
// 0077e81f  8b4e08               mov ecx, dword ptr [esi + 8]
// 0077e822  8b06                 mov eax, dword ptr [esi]
// 0077e824  51                   push ecx
// 0077e825  8b4e04               mov ecx, dword ptr [esi + 4]
// 0077e828  6a04                 push 4
// 0077e82a  8d54241c             lea edx, [esp + 0x1c]
// 0077e82e  52                   push edx
// 0077e82f  50                   push eax
// 0077e830  ffd1                 call ecx
// 0077e832  83c410               add esp, 0x10
// 0077e835  894610               mov dword ptr [esi + 0x10], eax
// 0077e838  837e1000             cmp dword ptr [esi + 0x10], 0
// 0077e83c  8b5740               mov edx, dword ptr [edi + 0x40]
// 0077e83f  89542414             mov dword ptr [esp + 0x14], edx
// 0077e843  7519                 jne 0x77e85e
// 0077e845  8b4608               mov eax, dword ptr [esi + 8]
// 0077e848  8b16                 mov edx, dword ptr [esi]
// 0077e84a  50                   push eax
// 0077e84b  8b4604               mov eax, dword ptr [esi + 4]
// 0077e84e  6a04                 push 4
// 0077e850  8d4c241c             lea ecx, [esp + 0x1c]
// 0077e854  51                   push ecx
// 0077e855  52                   push edx
// 0077e856  ffd0                 call eax
// 0077e858  83c410               add esp, 0x10
// 0077e85b  894610               mov dword ptr [esi + 0x10], eax
// 0077e85e  837e1000             cmp dword ptr [esi + 0x10], 0
// 0077e862  8a4f48               mov cl, byte ptr [edi + 0x48]
// 0077e865  884c2414             mov byte ptr [esp + 0x14], cl
// 0077e869  7519                 jne 0x77e884
// 0077e86b  8b5608               mov edx, dword ptr [esi + 8]
// 0077e86e  8b0e                 mov ecx, dword ptr [esi]
// 0077e870  52                   push edx
// 0077e871  8b5604               mov edx, dword ptr [esi + 4]
// 0077e874  6a01                 push 1
// 0077e876  8d44241c             lea eax, [esp + 0x1c]
// 0077e87a  50                   push eax
// 0077e87b  51                   push ecx
// 0077e87c  ffd2                 call edx
// 0077e87e  83c410               add esp, 0x10
// 0077e881  894610               mov dword ptr [esi + 0x10], eax
// 0077e884  837e1000             cmp dword ptr [esi + 0x10], 0
// 0077e888  8a4749               mov al, byte ptr [edi + 0x49]
// 0077e88b  88442414             mov byte ptr [esp + 0x14], al
// 0077e88f  7519                 jne 0x77e8aa
// 0077e891  8b4e08               mov ecx, dword ptr [esi + 8]
// 0077e894  8b06                 mov eax, dword ptr [esi]
// 0077e896  51                   push ecx
// 0077e897  8b4e04               mov ecx, dword ptr [esi + 4]
// 0077e89a  6a01                 push 1
// 0077e89c  8d54241c             lea edx, [esp + 0x1c]
// 0077e8a0  52                   push edx
// 0077e8a1  50                   push eax
// 0077e8a2  ffd1                 call ecx
// 0077e8a4  83c410               add esp, 0x10
// 0077e8a7  894610               mov dword ptr [esi + 0x10], eax
// 0077e8aa  837e1000             cmp dword ptr [esi + 0x10], 0
// 0077e8ae  8a574a               mov dl, byte ptr [edi + 0x4a]
// 0077e8b1  88542414             mov byte ptr [esp + 0x14], dl
// 0077e8b5  7519                 jne 0x77e8d0
// 0077e8b7  8b4608               mov eax, dword ptr [esi + 8]
// 0077e8ba  8b16                 mov edx, dword ptr [esi]
// 0077e8bc  50                   push eax
// 0077e8bd  8b4604               mov eax, dword ptr [esi + 4]
// 0077e8c0  6a01                 push 1
// 0077e8c2  8d4c241c             lea ecx, [esp + 0x1c]
// 0077e8c6  51                   push ecx
// 0077e8c7  52                   push edx
// 0077e8c8  ffd0                 call eax
// 0077e8ca  83c410               add esp, 0x10
// 0077e8cd  894610               mov dword ptr [esi + 0x10], eax
// 0077e8d0  837e1000             cmp dword ptr [esi + 0x10], 0
// 0077e8d4  8a4f4b               mov cl, byte ptr [edi + 0x4b]
// 0077e8d7  884c2414             mov byte ptr [esp + 0x14], cl
// 0077e8db  7519                 jne 0x77e8f6
// 0077e8dd  8b5608               mov edx, dword ptr [esi + 8]
// 0077e8e0  8b0e                 mov ecx, dword ptr [esi]
// 0077e8e2  52                   push edx
// 0077e8e3  8b5604               mov edx, dword ptr [esi + 4]
// 0077e8e6  6a01                 push 1
// 0077e8e8  8d44241c             lea eax, [esp + 0x1c]
// 0077e8ec  50                   push eax
// 0077e8ed  51                   push ecx
// 0077e8ee  ffd2                 call edx
// 0077e8f0  83c410               add esp, 0x10
// 0077e8f3  894610               mov dword ptr [esi + 0x10], eax
// 0077e8f6  837e1000             cmp dword ptr [esi + 0x10], 0
// 0077e8fa  8b5f2c               mov ebx, dword ptr [edi + 0x2c]
// 0077e8fd  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 0077e900  895c2414             mov dword ptr [esp + 0x14], ebx
// 0077e904  7538                 jne 0x77e93e
// 0077e906  8b4608               mov eax, dword ptr [esi + 8]
// 0077e909  8b16                 mov edx, dword ptr [esi]
// 0077e90b  50                   push eax
// 0077e90c  8b4604               mov eax, dword ptr [esi + 4]
// 0077e90f  6a04                 push 4
// 0077e911  8d4c241c             lea ecx, [esp + 0x1c]
// 0077e915  51                   push ecx
// 0077e916  52                   push edx
// 0077e917  ffd0                 call eax
// 0077e919  83c410               add esp, 0x10
// 0077e91c  894610               mov dword ptr [esi + 0x10], eax
// 0077e91f  85c0                 test eax, eax
// 0077e921  751b                 jne 0x77e93e
// 0077e923  8b4e08               mov ecx, dword ptr [esi + 8]
// 0077e926  8b06                 mov eax, dword ptr [esi]
// 0077e928  51                   push ecx
// 0077e929  8b4e04               mov ecx, dword ptr [esi + 4]
// 0077e92c  8d149d00000000       lea edx, [ebx*4]
// 0077e933  52                   push edx
// 0077e934  55                   push ebp
// 0077e935  50                   push eax
// 0077e936  ffd1                 call ecx
// 0077e938  83c410               add esp, 0x10
// 0077e93b  894610               mov dword ptr [esi + 0x10], eax
// 0077e93e  57                   push edi
// 0077e93f  8bc6                 mov eax, esi
// 0077e941  e81afcffff           call 0x77e560
// 0077e946  57                   push edi
// 0077e947  8bc6                 mov eax, esi
// 0077e949  e852fdffff           call 0x77e6a0
// 0077e94e  83c408               add esp, 8
// 0077e951  5f                   pop edi
// 0077e952  5e                   pop esi
// 0077e953  5d                   pop ebp
// 0077e954  5b                   pop ebx
// 0077e955  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpFunction)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c

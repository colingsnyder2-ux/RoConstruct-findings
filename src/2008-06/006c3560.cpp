// roc 2008-06 006c3560  unit: CXTPToolBar  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c3560
//
// 006c3560  83ec20               sub esp, 0x20
// 006c3563  56                   push esi
// 006c3564  8bf1                 mov esi, ecx
// 006c3566  85f6                 test esi, esi
// 006c3568  0f8403010000         je 0x6c3671
// 006c356e  837e2000             cmp dword ptr [esi + 0x20], 0
// 006c3572  0f84f9000000         je 0x6c3671
// 006c3578  8b06                 mov eax, dword ptr [esi]
// 006c357a  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 006c3580  ffd2                 call edx
// 006c3582  85c0                 test eax, eax
// 006c3584  0f84e7000000         je 0x6c3671
// 006c358a  83bea401000000       cmp dword ptr [esi + 0x1a4], 0
// 006c3591  0f85da000000         jne 0x6c3671
// 006c3597  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 006c359e  57                   push edi
// 006c359f  c786a401000001000000 mov dword ptr [esi + 0x1a4], 1
// 006c35a9  8bce                 mov ecx, esi
// 006c35ab  745a                 je 0x6c3607
// 006c35ad  e85e18ffff           call 0x6b4e10
// 006c35b2  85c0                 test eax, eax
// 006c35b4  740e                 je 0x6c35c4
// 006c35b6  6a00                 push 0
// 006c35b8  8bc8                 mov ecx, eax
// 006c35ba  e831fefdff           call 0x6a33f0
// 006c35bf  e992000000           jmp 0x6c3656
// 006c35c4  8bce                 mov ecx, esi
// 006c35c6  e8f543ffff           call 0x6b79c0
// 006c35cb  8bf8                 mov edi, eax
// 006c35cd  57                   push edi
// 006c35ce  8d4c240c             lea ecx, [esp + 0xc]
// 006c35d2  e859450300           call 0x6f7b30
// 006c35d7  85ff                 test edi, edi
// 006c35d9  747b                 je 0x6c3656
// 006c35db  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c35df  2b44240c             sub eax, dword ptr [esp + 0xc]
// 006c35e3  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c35e7  2b542408             sub edx, dword ptr [esp + 8]
// 006c35eb  0fb7c8               movzx ecx, ax
// 006c35ee  0fb7c2               movzx eax, dx
// 006c35f1  c1e110               shl ecx, 0x10
// 006c35f4  0bc8                 or ecx, eax
// 006c35f6  51                   push ecx
// 006c35f7  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 006c35fa  6a00                 push 0
// 006c35fc  6a05                 push 5
// 006c35fe  51                   push ecx
// 006c35ff  ff15142e8000         call dword ptr [0x802e14]
// 006c3605  eb4f                 jmp 0x6c3656
// 006c3607  8b16                 mov edx, dword ptr [esi]
// 006c3609  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 006c360f  ffd0                 call eax
// 006c3611  85c0                 test eax, eax
// 006c3613  7441                 je 0x6c3656
// 006c3615  8b16                 mov edx, dword ptr [esi]
// 006c3617  8b92d0010000         mov edx, dword ptr [edx + 0x1d0]
// 006c361d  6a46                 push 0x46
// 006c361f  6aff                 push -1
// 006c3621  8d442410             lea eax, [esp + 0x10]
// 006c3625  50                   push eax
// 006c3626  8bce                 mov ecx, esi
// 006c3628  ffd2                 call edx
// 006c362a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006c362d  8d442418             lea eax, [esp + 0x18]
// 006c3631  50                   push eax
// 006c3632  51                   push ecx
// 006c3633  ff15342e8000         call dword ptr [0x802e34]
// 006c3639  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006c363d  8b442408             mov eax, dword ptr [esp + 8]
// 006c3641  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006c3645  6a01                 push 1
// 006c3647  52                   push edx
// 006c3648  8b542420             mov edx, dword ptr [esp + 0x20]
// 006c364c  50                   push eax
// 006c364d  51                   push ecx
// 006c364e  52                   push edx
// 006c364f  8bce                 mov ecx, esi
// 006c3651  e8f6d3fdff           call 0x6a0a4c
// 006c3656  8b06                 mov eax, dword ptr [esi]
// 006c3658  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 006c365e  6a01                 push 1
// 006c3660  6a00                 push 0
// 006c3662  8bce                 mov ecx, esi
// 006c3664  ffd2                 call edx
// 006c3666  c786a401000000000000 mov dword ptr [esi + 0x1a4], 0
// 006c3670  5f                   pop edi
// 006c3671  5e                   pop esi
// 006c3672  83c420               add esp, 0x20
// 006c3675  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?OnRecalcLayout@CXTPToolBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp

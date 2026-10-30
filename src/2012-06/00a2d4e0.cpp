// roc 2012-06 00a2d4e0  unit: CXTPReportTip  size: 455 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2d4e0
//
// 00a2d4e0  6aff                 push -1
// 00a2d4e2  684950ae00           push 0xae5049
// 00a2d4e7  64a100000000         mov eax, dword ptr fs:[0]
// 00a2d4ed  50                   push eax
// 00a2d4ee  83ec4c               sub esp, 0x4c
// 00a2d4f1  55                   push ebp
// 00a2d4f2  56                   push esi
// 00a2d4f3  57                   push edi
// 00a2d4f4  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a2d4f9  33c4                 xor eax, esp
// 00a2d4fb  50                   push eax
// 00a2d4fc  8d44245c             lea eax, [esp + 0x5c]
// 00a2d500  64a300000000         mov dword ptr fs:[0], eax
// 00a2d506  8bf1                 mov esi, ecx
// 00a2d508  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 00a2d50c  85ed                 test ebp, ebp
// 00a2d50e  0f8454010000         je 0xa2d668
// 00a2d514  8d4668               lea eax, [esi + 0x68]
// 00a2d517  50                   push eax
// 00a2d518  8d4c2470             lea ecx, [esp + 0x70]
// 00a2d51c  ff158047b200         call dword ptr [0xb24780]
// 00a2d522  56                   push esi
// 00a2d523  8d4c244c             lea ecx, [esp + 0x4c]
// 00a2d527  c744246800000000     mov dword ptr [esp + 0x68], 0
// 00a2d52f  e868c00600           call 0xa9959c
// 00a2d534  8d4e74               lea ecx, [esi + 0x74]
// 00a2d537  51                   push ecx
// 00a2d538  8d54244c             lea edx, [esp + 0x4c]
// 00a2d53c  52                   push edx
// 00a2d53d  8d4c2440             lea ecx, [esp + 0x40]
// 00a2d541  c644246c01           mov byte ptr [esp + 0x6c], 1
// 00a2d546  e8e57ffaff           call 0x9d5530
// 00a2d54b  56                   push esi
// 00a2d54c  8d4c241c             lea ecx, [esp + 0x1c]
// 00a2d550  c644246802           mov byte ptr [esp + 0x68], 2
// 00a2d555  e8e67bfaff           call 0x9d5140
// 00a2d55a  8d442410             lea eax, [esp + 0x10]
// 00a2d55e  50                   push eax
// 00a2d55f  8d4c2470             lea ecx, [esp + 0x70]
// 00a2d563  ff155846b200         call dword ptr [0xb24658]
// 00a2d569  50                   push eax
// 00a2d56a  8d4c2474             lea ecx, [esp + 0x74]
// 00a2d56e  ff159847b200         call dword ptr [0xb24798]
// 00a2d574  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a2d578  50                   push eax
// 00a2d579  51                   push ecx
// 00a2d57a  ff154021b200         call dword ptr [0xb22140]
// 00a2d580  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a2d584  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a2d588  8d4c1006             lea ecx, [eax + edx + 6]
// 00a2d58c  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a2d590  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 00a2d593  e840c00600           call 0xa995d8
// 00a2d598  8b3df43ab200         mov edi, dword ptr [0xb23af4]
// 00a2d59e  a900200000           test eax, 0x2000
// 00a2d5a3  750f                 jne 0xa2d5b4
// 00a2d5a5  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 00a2d5a8  e82bc00600           call 0xa995d8
// 00a2d5ad  a900004000           test eax, 0x400000
// 00a2d5b2  7412                 je 0xa2d5c6
// 00a2d5b4  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00a2d5b7  2b442420             sub eax, dword ptr [esp + 0x20]
// 00a2d5bb  6a00                 push 0
// 00a2d5bd  40                   inc eax
// 00a2d5be  50                   push eax
// 00a2d5bf  8d542420             lea edx, [esp + 0x20]
// 00a2d5c3  52                   push edx
// 00a2d5c4  ffd7                 call edi
// 00a2d5c6  8d442428             lea eax, [esp + 0x28]
// 00a2d5ca  50                   push eax
// 00a2d5cb  e800d0f9ff           call 0x9ca5d0
// 00a2d5d0  8bc8                 mov ecx, eax
// 00a2d5d2  e8c9cbf9ff           call 0x9ca1a0
// 00a2d5d7  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a2d5db  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a2d5df  3bc1                 cmp eax, ecx
// 00a2d5e1  7e10                 jle 0xa2d5f3
// 00a2d5e3  2bc8                 sub ecx, eax
// 00a2d5e5  6a00                 push 0
// 00a2d5e7  51                   push ecx
// 00a2d5e8  8d4c2420             lea ecx, [esp + 0x20]
// 00a2d5ec  51                   push ecx
// 00a2d5ed  ffd7                 call edi
// 00a2d5ef  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a2d5f3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a2d5f7  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a2d5fb  3bca                 cmp ecx, edx
// 00a2d5fd  7d14                 jge 0xa2d613
// 00a2d5ff  2bd1                 sub edx, ecx
// 00a2d601  6a00                 push 0
// 00a2d603  52                   push edx
// 00a2d604  8d542420             lea edx, [esp + 0x20]
// 00a2d608  52                   push edx
// 00a2d609  ffd7                 call edi
// 00a2d60b  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a2d60f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a2d613  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a2d617  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00a2d61b  6a01                 push 1
// 00a2d61d  2bfa                 sub edi, edx
// 00a2d61f  57                   push edi
// 00a2d620  2bc1                 sub eax, ecx
// 00a2d622  50                   push eax
// 00a2d623  52                   push edx
// 00a2d624  51                   push ecx
// 00a2d625  8bce                 mov ecx, esi
// 00a2d627  e8ae4ef5ff           call 0x9824da
// 00a2d62c  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a2d62f  6a00                 push 0
// 00a2d631  6a00                 push 0
// 00a2d633  50                   push eax
// 00a2d634  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a2d63a  8d4c2438             lea ecx, [esp + 0x38]
// 00a2d63e  c644246401           mov byte ptr [esp + 0x64], 1
// 00a2d643  e8687ffaff           call 0x9d55b0
// 00a2d648  8d4c2448             lea ecx, [esp + 0x48]
// 00a2d64c  c644246400           mov byte ptr [esp + 0x64], 0
// 00a2d651  e840bf0600           call 0xa99596
// 00a2d656  8d4c246c             lea ecx, [esp + 0x6c]
// 00a2d65a  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 00a2d662  ff15d047b200         call dword ptr [0xb247d0]
// 00a2d668  8b0db841b200         mov ecx, dword ptr [0xb241b8]
// 00a2d66e  f7dd                 neg ebp
// 00a2d670  1bed                 sbb ebp, ebp
// 00a2d672  83e5bc               and ebp, 0xffffffbc
// 00a2d675  81c584000000         add ebp, 0x84
// 00a2d67b  81cd13020000         or ebp, 0x213
// 00a2d681  55                   push ebp
// 00a2d682  6a00                 push 0
// 00a2d684  6a00                 push 0
// 00a2d686  6a00                 push 0
// 00a2d688  6a00                 push 0
// 00a2d68a  51                   push ecx
// 00a2d68b  8bce                 mov ecx, esi
// 00a2d68d  e8424ef5ff           call 0x9824d4
// 00a2d692  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a2d696  64890d00000000       mov dword ptr fs:[0], ecx
// 00a2d69d  59                   pop ecx
// 00a2d69e  5f                   pop edi
// 00a2d69f  5e                   pop esi
// 00a2d6a0  5d                   pop ebp
// 00a2d6a1  83c458               add esp, 0x58
// 00a2d6a4  c20400               ret 4
// copied from an identical function in another client (function ?Activate@CXTPReportTip@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportTip.cpp
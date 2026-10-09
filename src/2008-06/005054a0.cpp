// roc 2008-06 005054a0  unit: RBX::Render::RenderScene  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005054a0
//
// 005054a0  8b442408             mov eax, dword ptr [esp + 8]
// 005054a4  83ec0c               sub esp, 0xc
// 005054a7  56                   push esi
// 005054a8  8b742414             mov esi, dword ptr [esp + 0x14]
// 005054ac  3bf0                 cmp esi, eax
// 005054ae  0f84b6000000         je 0x50556a
// 005054b4  53                   push ebx
// 005054b5  8d5e04               lea ebx, [esi + 4]
// 005054b8  3bd8                 cmp ebx, eax
// 005054ba  0f84a9000000         je 0x505569
// 005054c0  8d43fc               lea eax, [ebx - 4]
// 005054c3  8944240c             mov dword ptr [esp + 0xc], eax
// 005054c7  b804000000           mov eax, 4
// 005054cc  55                   push ebp
// 005054cd  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005054d1  2bc6                 sub eax, esi
// 005054d3  57                   push edi
// 005054d4  89442418             mov dword ptr [esp + 0x18], eax
// 005054d8  8b0b                 mov ecx, dword ptr [ebx]
// 005054da  8d542410             lea edx, [esp + 0x10]
// 005054de  56                   push esi
// 005054df  52                   push edx
// 005054e0  8bfb                 mov edi, ebx
// 005054e2  894c2418             mov dword ptr [esp + 0x18], ecx
// 005054e6  ffd5                 call ebp
// 005054e8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005054ec  83c408               add esp, 8
// 005054ef  84c0                 test al, al
// 005054f1  742d                 je 0x505520
// 005054f3  8b442418             mov eax, dword ptr [esp + 0x18]
// 005054f7  03c1                 add eax, ecx
// 005054f9  c1f802               sar eax, 2
// 005054fc  85c0                 test eax, eax
// 005054fe  7e18                 jle 0x505518
// 00505500  03c0                 add eax, eax
// 00505502  03c0                 add eax, eax
// 00505504  50                   push eax
// 00505505  8bd3                 mov edx, ebx
// 00505507  56                   push esi
// 00505508  2bd0                 sub edx, eax
// 0050550a  50                   push eax
// 0050550b  83c204               add edx, 4
// 0050550e  52                   push edx
// 0050550f  ff1550288000         call dword ptr [0x802850]
// 00505515  83c410               add esp, 0x10
// 00505518  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050551c  8906                 mov dword ptr [esi], eax
// 0050551e  eb35                 jmp 0x505555
// 00505520  8b742414             mov esi, dword ptr [esp + 0x14]
// 00505524  51                   push ecx
// 00505525  8d542414             lea edx, [esp + 0x14]
// 00505529  52                   push edx
// 0050552a  ffd5                 call ebp
// 0050552c  83c408               add esp, 8
// 0050552f  84c0                 test al, al
// 00505531  7418                 je 0x50554b
// 00505533  8b06                 mov eax, dword ptr [esi]
// 00505535  8907                 mov dword ptr [edi], eax
// 00505537  8bfe                 mov edi, esi
// 00505539  83ee04               sub esi, 4
// 0050553c  8d4c2410             lea ecx, [esp + 0x10]
// 00505540  56                   push esi
// 00505541  51                   push ecx
// 00505542  ffd5                 call ebp
// 00505544  83c408               add esp, 8
// 00505547  84c0                 test al, al
// 00505549  75e8                 jne 0x505533
// 0050554b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050554f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00505553  8917                 mov dword ptr [edi], edx
// 00505555  8344241404           add dword ptr [esp + 0x14], 4
// 0050555a  83c304               add ebx, 4
// 0050555d  3b5c2424             cmp ebx, dword ptr [esp + 0x24]
// 00505561  0f8571ffffff         jne 0x5054d8
// 00505567  5f                   pop edi
// 00505568  5d                   pop ebp
// 00505569  5b                   pop ebx
// 0050556a  5e                   pop esi
// 0050556b  83c40c               add esp, 0xc
// 0050556e  c3                   ret 
// library openrbx-client/Rendering\RenderLib\RenderSurface.cpp (function ??$_Insertion_sort1@PAPAVRenderSurface@Render@RBX@@P6A_NABQAV123@0@ZPAV123@@std@@YAXPAPAVRenderSurface@Render@RBX@@0P6A_NABQAV123@1@Z0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderSurface.cpp

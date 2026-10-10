// roc 2008-06 00733300  unit: XTPPaintThemes::CXTPDefaultTheme  size: 342 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00733300
//
// 00733300  83ec20               sub esp, 0x20
// 00733303  53                   push ebx
// 00733304  55                   push ebp
// 00733305  56                   push esi
// 00733306  57                   push edi
// 00733307  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0073330b  8bd9                 mov ebx, ecx
// 0073330d  85ff                 test edi, edi
// 0073330f  7523                 jne 0x733334
// 00733311  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00733315  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00733319  8b742434             mov esi, dword ptr [esp + 0x34]
// 0073331d  57                   push edi
// 0073331e  50                   push eax
// 0073331f  51                   push ecx
// 00733320  56                   push esi
// 00733321  8bcb                 mov ecx, ebx
// 00733323  e848d5f7ff           call 0x6b0870
// 00733328  8bc6                 mov eax, esi
// 0073332a  5f                   pop edi
// 0073332b  5e                   pop esi
// 0073332c  5d                   pop ebp
// 0073332d  5b                   pop ebx
// 0073332e  83c420               add esp, 0x20
// 00733331  c21000               ret 0x10
// 00733334  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00733338  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0073333e  83f8ff               cmp eax, -1
// 00733341  750f                 jne 0x733352
// 00733343  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00733349  85c9                 test ecx, ecx
// 0073334b  7405                 je 0x733352
// 0073334d  e86e84f7ff           call 0x6ab7c0
// 00733352  8b16                 mov edx, dword ptr [esi]
// 00733354  8944243c             mov dword ptr [esp + 0x3c], eax
// 00733358  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0073335b  8bce                 mov ecx, esi
// 0073335d  ffd0                 call eax
// 0073335f  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00733363  57                   push edi
// 00733364  56                   push esi
// 00733365  55                   push ebp
// 00733366  8d4c241c             lea ecx, [esp + 0x1c]
// 0073336a  51                   push ecx
// 0073336b  8bcb                 mov ecx, ebx
// 0073336d  89442450             mov dword ptr [esp + 0x50], eax
// 00733371  e8fad4f7ff           call 0x6b0870
// 00733376  8bbec0000000         mov edi, dword ptr [esi + 0xc0]
// 0073337c  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00733382  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00733388  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 0073338e  03be80010000         add edi, dword ptr [esi + 0x180]
// 00733394  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 00733399  894c2424             mov dword ptr [esp + 0x24], ecx
// 0073339d  89442428             mov dword ptr [esp + 0x28], eax
// 007333a1  8954242c             mov dword ptr [esp + 0x2c], edx
// 007333a5  744f                 je 0x7333f6
// 007333a7  6aff                 push -1
// 007333a9  89542420             mov dword ptr [esp + 0x20], edx
// 007333ad  6aff                 push -1
// 007333af  8d542418             lea edx, [esp + 0x18]
// 007333b3  52                   push edx
// 007333b4  897c241c             mov dword ptr [esp + 0x1c], edi
// 007333b8  894c2420             mov dword ptr [esp + 0x20], ecx
// 007333bc  89442424             mov dword ptr [esp + 0x24], eax
// 007333c0  ff15282d8000         call dword ptr [0x802d28]
// 007333c6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007333ca  8b542414             mov edx, dword ptr [esp + 0x14]
// 007333ce  6a05                 push 5
// 007333d0  6a05                 push 5
// 007333d2  83ec10               sub esp, 0x10
// 007333d5  8bc4                 mov eax, esp
// 007333d7  8908                 mov dword ptr [eax], ecx
// 007333d9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007333dd  895004               mov dword ptr [eax + 4], edx
// 007333e0  8b542434             mov edx, dword ptr [esp + 0x34]
// 007333e4  894808               mov dword ptr [eax + 8], ecx
// 007333e7  55                   push ebp
// 007333e8  8bcb                 mov ecx, ebx
// 007333ea  89500c               mov dword ptr [eax + 0xc], edx
// 007333ed  e8debcf7ff           call 0x6af0d0
// 007333f2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007333f6  8b442440             mov eax, dword ptr [esp + 0x40]
// 007333fa  8b13                 mov edx, dword ptr [ebx]
// 007333fc  8b9218010000         mov edx, dword ptr [edx + 0x118]
// 00733402  50                   push eax
// 00733403  ff742440             push dword ptr [esp + 0x40]
// 00733407  83ec10               sub esp, 0x10
// 0073340a  8bc4                 mov eax, esp
// 0073340c  8938                 mov dword ptr [eax], edi
// 0073340e  894804               mov dword ptr [eax + 4], ecx
// 00733411  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00733415  894808               mov dword ptr [eax + 8], ecx
// 00733418  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0073341c  89480c               mov dword ptr [eax + 0xc], ecx
// 0073341f  55                   push ebp
// 00733420  8bcb                 mov ecx, ebx
// 00733422  ffd2                 call edx
// 00733424  83beac01000000       cmp dword ptr [esi + 0x1ac], 0
// 0073342b  740e                 je 0x73343b
// 0073342d  8b03                 mov eax, dword ptr [ebx]
// 0073342f  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 00733435  56                   push esi
// 00733436  55                   push ebp
// 00733437  8bcb                 mov ecx, ebx
// 00733439  ffd2                 call edx
// 0073343b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0073343f  5f                   pop edi
// 00733440  5e                   pop esi
// 00733441  5d                   pop ebp
// 00733442  c70000000000         mov dword ptr [eax], 0
// 00733448  c7400400000000       mov dword ptr [eax + 4], 0
// 0073344f  5b                   pop ebx
// 00733450  83c420               add esp, 0x20
// 00733453  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawControlEdit@CXTPDefaultTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPControlEdit@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDefaultTheme.cpp

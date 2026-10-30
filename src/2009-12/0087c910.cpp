// roc 2009-12 0087c910  unit: XTPPaintThemes::CXTPDefaultTheme  size: 342 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087c910
//
// 0087c910  83ec20               sub esp, 0x20
// 0087c913  53                   push ebx
// 0087c914  55                   push ebp
// 0087c915  56                   push esi
// 0087c916  57                   push edi
// 0087c917  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0087c91b  8bd9                 mov ebx, ecx
// 0087c91d  85ff                 test edi, edi
// 0087c91f  7523                 jne 0x87c944
// 0087c921  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0087c925  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0087c929  8b742434             mov esi, dword ptr [esp + 0x34]
// 0087c92d  57                   push edi
// 0087c92e  50                   push eax
// 0087c92f  51                   push ecx
// 0087c930  56                   push esi
// 0087c931  8bcb                 mov ecx, ebx
// 0087c933  e8c835f8ff           call 0x7fff00
// 0087c938  8bc6                 mov eax, esi
// 0087c93a  5f                   pop edi
// 0087c93b  5e                   pop esi
// 0087c93c  5d                   pop ebp
// 0087c93d  5b                   pop ebx
// 0087c93e  83c420               add esp, 0x20
// 0087c941  c21000               ret 0x10
// 0087c944  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0087c948  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0087c94e  83f8ff               cmp eax, -1
// 0087c951  750f                 jne 0x87c962
// 0087c953  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0087c959  85c9                 test ecx, ecx
// 0087c95b  7405                 je 0x87c962
// 0087c95d  e84e9cf7ff           call 0x7f65b0
// 0087c962  8b16                 mov edx, dword ptr [esi]
// 0087c964  8944243c             mov dword ptr [esp + 0x3c], eax
// 0087c968  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0087c96b  8bce                 mov ecx, esi
// 0087c96d  ffd0                 call eax
// 0087c96f  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0087c973  57                   push edi
// 0087c974  56                   push esi
// 0087c975  55                   push ebp
// 0087c976  8d4c241c             lea ecx, [esp + 0x1c]
// 0087c97a  51                   push ecx
// 0087c97b  8bcb                 mov ecx, ebx
// 0087c97d  89442450             mov dword ptr [esp + 0x50], eax
// 0087c981  e87a35f8ff           call 0x7fff00
// 0087c986  8bbec0000000         mov edi, dword ptr [esi + 0xc0]
// 0087c98c  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0087c992  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0087c998  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 0087c99e  03be80010000         add edi, dword ptr [esi + 0x180]
// 0087c9a4  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 0087c9a9  894c2424             mov dword ptr [esp + 0x24], ecx
// 0087c9ad  89442428             mov dword ptr [esp + 0x28], eax
// 0087c9b1  8954242c             mov dword ptr [esp + 0x2c], edx
// 0087c9b5  744f                 je 0x87ca06
// 0087c9b7  6aff                 push -1
// 0087c9b9  89542420             mov dword ptr [esp + 0x20], edx
// 0087c9bd  6aff                 push -1
// 0087c9bf  8d542418             lea edx, [esp + 0x18]
// 0087c9c3  52                   push edx
// 0087c9c4  897c241c             mov dword ptr [esp + 0x1c], edi
// 0087c9c8  894c2420             mov dword ptr [esp + 0x20], ecx
// 0087c9cc  89442424             mov dword ptr [esp + 0x24], eax
// 0087c9d0  ff1558ca9800         call dword ptr [0x98ca58]
// 0087c9d6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0087c9da  8b542414             mov edx, dword ptr [esp + 0x14]
// 0087c9de  6a05                 push 5
// 0087c9e0  6a05                 push 5
// 0087c9e2  83ec10               sub esp, 0x10
// 0087c9e5  8bc4                 mov eax, esp
// 0087c9e7  8908                 mov dword ptr [eax], ecx
// 0087c9e9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0087c9ed  895004               mov dword ptr [eax + 4], edx
// 0087c9f0  8b542434             mov edx, dword ptr [esp + 0x34]
// 0087c9f4  894808               mov dword ptr [eax + 8], ecx
// 0087c9f7  55                   push ebp
// 0087c9f8  8bcb                 mov ecx, ebx
// 0087c9fa  89500c               mov dword ptr [eax + 0xc], edx
// 0087c9fd  e85e1df8ff           call 0x7fe760
// 0087ca02  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0087ca06  8b442440             mov eax, dword ptr [esp + 0x40]
// 0087ca0a  8b13                 mov edx, dword ptr [ebx]
// 0087ca0c  8b9218010000         mov edx, dword ptr [edx + 0x118]
// 0087ca12  50                   push eax
// 0087ca13  ff742440             push dword ptr [esp + 0x40]
// 0087ca17  83ec10               sub esp, 0x10
// 0087ca1a  8bc4                 mov eax, esp
// 0087ca1c  8938                 mov dword ptr [eax], edi
// 0087ca1e  894804               mov dword ptr [eax + 4], ecx
// 0087ca21  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0087ca25  894808               mov dword ptr [eax + 8], ecx
// 0087ca28  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0087ca2c  89480c               mov dword ptr [eax + 0xc], ecx
// 0087ca2f  55                   push ebp
// 0087ca30  8bcb                 mov ecx, ebx
// 0087ca32  ffd2                 call edx
// 0087ca34  83beac01000000       cmp dword ptr [esi + 0x1ac], 0
// 0087ca3b  740e                 je 0x87ca4b
// 0087ca3d  8b03                 mov eax, dword ptr [ebx]
// 0087ca3f  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 0087ca45  56                   push esi
// 0087ca46  55                   push ebp
// 0087ca47  8bcb                 mov ecx, ebx
// 0087ca49  ffd2                 call edx
// 0087ca4b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0087ca4f  5f                   pop edi
// 0087ca50  5e                   pop esi
// 0087ca51  5d                   pop ebp
// 0087ca52  c70000000000         mov dword ptr [eax], 0
// 0087ca58  c7400400000000       mov dword ptr [eax + 4], 0
// 0087ca5f  5b                   pop ebx
// 0087ca60  83c420               add esp, 0x20
// 0087ca63  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlEdit@CXTPDefaultTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPControlEdit@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDefaultTheme.cpp
// roc 2009-12 008f4820  unit: CXTCaptionButtonTheme  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f4820
//
// 008f4820  83ec20               sub esp, 0x20
// 008f4823  53                   push ebx
// 008f4824  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 008f4828  8b03                 mov eax, dword ptr [ebx]
// 008f482a  8b5308               mov edx, dword ptr [ebx + 8]
// 008f482d  55                   push ebp
// 008f482e  56                   push esi
// 008f482f  57                   push edi
// 008f4830  8be9                 mov ebp, ecx
// 008f4832  8b4b04               mov ecx, dword ptr [ebx + 4]
// 008f4835  6a00                 push 0
// 008f4837  894c2428             mov dword ptr [esp + 0x28], ecx
// 008f483b  89442424             mov dword ptr [esp + 0x24], eax
// 008f483f  8b430c               mov eax, dword ptr [ebx + 0xc]
// 008f4842  6afe                 push -2
// 008f4844  8d4c2428             lea ecx, [esp + 0x28]
// 008f4848  51                   push ecx
// 008f4849  89542434             mov dword ptr [esp + 0x34], edx
// 008f484d  89442438             mov dword ptr [esp + 0x38], eax
// 008f4851  ff1558ca9800         call dword ptr [0x98ca58]
// 008f4857  8b742434             mov esi, dword ptr [esp + 0x34]
// 008f485b  8b542420             mov edx, dword ptr [esp + 0x20]
// 008f485f  8b442424             mov eax, dword ptr [esp + 0x24]
// 008f4863  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008f4867  8916                 mov dword ptr [esi], edx
// 008f4869  894604               mov dword ptr [esi + 4], eax
// 008f486c  837f7800             cmp dword ptr [edi + 0x78], 0
// 008f4870  7422                 je 0x8f4894
// 008f4872  8d4c2410             lea ecx, [esp + 0x10]
// 008f4876  51                   push ecx
// 008f4877  8bcf                 mov ecx, edi
// 008f4879  e8e215ffff           call 0x8e5e60
// 008f487e  8b10                 mov edx, dword ptr [eax]
// 008f4880  8916                 mov dword ptr [esi], edx
// 008f4882  8b4004               mov eax, dword ptr [eax + 4]
// 008f4885  5f                   pop edi
// 008f4886  894604               mov dword ptr [esi + 4], eax
// 008f4889  8bc6                 mov eax, esi
// 008f488b  5e                   pop esi
// 008f488c  5d                   pop ebp
// 008f488d  5b                   pop ebx
// 008f488e  83c420               add esp, 0x20
// 008f4891  c21400               ret 0x14
// 008f4894  8b442440             mov eax, dword ptr [esp + 0x40]
// 008f4898  8b4804               mov ecx, dword ptr [eax + 4]
// 008f489b  8b00                 mov eax, dword ptr [eax]
// 008f489d  8b5500               mov edx, dword ptr [ebp]
// 008f48a0  8b5240               mov edx, dword ptr [edx + 0x40]
// 008f48a3  57                   push edi
// 008f48a4  51                   push ecx
// 008f48a5  50                   push eax
// 008f48a6  56                   push esi
// 008f48a7  8bcd                 mov ecx, ebp
// 008f48a9  ffd2                 call edx
// 008f48ab  8b476c               mov eax, dword ptr [edi + 0x6c]
// 008f48ae  8906                 mov dword ptr [esi], eax
// 008f48b0  8b17                 mov edx, dword ptr [edi]
// 008f48b2  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 008f48b8  8bcf                 mov ecx, edi
// 008f48ba  ffd0                 call eax
// 008f48bc  a804                 test al, 4
// 008f48be  7425                 je 0x8f48e5
// 008f48c0  8b6f70               mov ebp, dword ptr [edi + 0x70]
// 008f48c3  8d4c2410             lea ecx, [esp + 0x10]
// 008f48c7  51                   push ecx
// 008f48c8  8bcf                 mov ecx, edi
// 008f48ca  e81115ffff           call 0x8e5de0
// 008f48cf  8b4004               mov eax, dword ptr [eax + 4]
// 008f48d2  99                   cdq 
// 008f48d3  2bc2                 sub eax, edx
// 008f48d5  8bc8                 mov ecx, eax
// 008f48d7  8bc5                 mov eax, ebp
// 008f48d9  99                   cdq 
// 008f48da  2bc2                 sub eax, edx
// 008f48dc  d1f9                 sar ecx, 1
// 008f48de  d1f8                 sar eax, 1
// 008f48e0  03c8                 add ecx, eax
// 008f48e2  014e04               add dword ptr [esi + 4], ecx
// 008f48e5  8bcf                 mov ecx, edi
// 008f48e7  e8861b0300           call 0x926472
// 008f48ec  2500030000           and eax, 0x300
// 008f48f1  3d00010000           cmp eax, 0x100
// 008f48f6  7466                 je 0x8f495e
// 008f48f8  3d00020000           cmp eax, 0x200
// 008f48fd  7445                 je 0x8f4944
// 008f48ff  8b17                 mov edx, dword ptr [edi]
// 008f4901  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 008f4907  8bcf                 mov ecx, edi
// 008f4909  ffd0                 call eax
// 008f490b  a804                 test al, 4
// 008f490d  7510                 jne 0x8f491f
// 008f490f  8d4c2410             lea ecx, [esp + 0x10]
// 008f4913  51                   push ecx
// 008f4914  8bcf                 mov ecx, edi
// 008f4916  e8c514ffff           call 0x8e5de0
// 008f491b  8b10                 mov edx, dword ptr [eax]
// 008f491d  0116                 add dword ptr [esi], edx
// 008f491f  8b4308               mov eax, dword ptr [ebx + 8]
// 008f4922  2b476c               sub eax, dword ptr [edi + 0x6c]
// 008f4925  8b542440             mov edx, dword ptr [esp + 0x40]
// 008f4929  2b02                 sub eax, dword ptr [edx]
// 008f492b  8b0e                 mov ecx, dword ptr [esi]
// 008f492d  2bc1                 sub eax, ecx
// 008f492f  99                   cdq 
// 008f4930  2bc2                 sub eax, edx
// 008f4932  d1f8                 sar eax, 1
// 008f4934  03c1                 add eax, ecx
// 008f4936  5f                   pop edi
// 008f4937  8906                 mov dword ptr [esi], eax
// 008f4939  8bc6                 mov eax, esi
// 008f493b  5e                   pop esi
// 008f493c  5d                   pop ebp
// 008f493d  5b                   pop ebx
// 008f493e  83c420               add esp, 0x20
// 008f4941  c21400               ret 0x14
// 008f4944  8b4308               mov eax, dword ptr [ebx + 8]
// 008f4947  2b476c               sub eax, dword ptr [edi + 0x6c]
// 008f494a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008f494e  2b01                 sub eax, dword ptr [ecx]
// 008f4950  5f                   pop edi
// 008f4951  8906                 mov dword ptr [esi], eax
// 008f4953  8bc6                 mov eax, esi
// 008f4955  5e                   pop esi
// 008f4956  5d                   pop ebp
// 008f4957  5b                   pop ebx
// 008f4958  83c420               add esp, 0x20
// 008f495b  c21400               ret 0x14
// 008f495e  8b17                 mov edx, dword ptr [edi]
// 008f4960  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 008f4966  8bcf                 mov ecx, edi
// 008f4968  ffd0                 call eax
// 008f496a  a804                 test al, 4
// 008f496c  7515                 jne 0x8f4983
// 008f496e  8b5f70               mov ebx, dword ptr [edi + 0x70]
// 008f4971  8d4c2418             lea ecx, [esp + 0x18]
// 008f4975  51                   push ecx
// 008f4976  8bcf                 mov ecx, edi
// 008f4978  e86314ffff           call 0x8e5de0
// 008f497d  8b10                 mov edx, dword ptr [eax]
// 008f497f  03d3                 add edx, ebx
// 008f4981  0116                 add dword ptr [esi], edx
// 008f4983  5f                   pop edi
// 008f4984  8bc6                 mov eax, esi
// 008f4986  5e                   pop esi
// 008f4987  5d                   pop ebp
// 008f4988  5b                   pop ebx
// 008f4989  83c420               add esp, 0x20
// 008f498c  c21400               ret 0x14
// copied from an identical function in another client (function ?GetTextPosition@CXTButtonTheme@@MAE?AVCPoint@@IAAVCRect@@AAVCSize@@PAVCXTButton@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButtonTheme.cpp
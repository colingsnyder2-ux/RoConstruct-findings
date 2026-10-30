// roc 2009-12 0081d8b0  unit: CXTPReportControl  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081d8b0
//
// 0081d8b0  83ec20               sub esp, 0x20
// 0081d8b3  53                   push ebx
// 0081d8b4  55                   push ebp
// 0081d8b5  56                   push esi
// 0081d8b6  57                   push edi
// 0081d8b7  8bf1                 mov esi, ecx
// 0081d8b9  e8ba8b1000           call 0x926478
// 0081d8be  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0081d8c2  a900200000           test eax, 0x2000
// 0081d8c7  740c                 je 0x81d8d5
// 0081d8c9  6800010000           push 0x100
// 0081d8ce  8bcb                 mov ecx, ebx
// 0081d8d0  e8736efdff           call 0x7f4748
// 0081d8d5  8bbe00010000         mov edi, dword ptr [esi + 0x100]
// 0081d8db  56                   push esi
// 0081d8dc  8d4c2424             lea ecx, [esp + 0x24]
// 0081d8e0  e8ebd90200           call 0x84b2d0
// 0081d8e5  8be8                 mov ebp, eax
// 0081d8e7  8b07                 mov eax, dword ptr [edi]
// 0081d8e9  8b5070               mov edx, dword ptr [eax + 0x70]
// 0081d8ec  56                   push esi
// 0081d8ed  8bcf                 mov ecx, edi
// 0081d8ef  ffd2                 call edx
// 0081d8f1  50                   push eax
// 0081d8f2  55                   push ebp
// 0081d8f3  8bcb                 mov ecx, ebx
// 0081d8f5  e8046dfdff           call 0x7f45fe
// 0081d8fa  8b4678               mov eax, dword ptr [esi + 0x78]
// 0081d8fd  8bbe88020000         mov edi, dword ptr [esi + 0x288]
// 0081d903  8b5670               mov edx, dword ptr [esi + 0x70]
// 0081d906  8b8f9c000000         mov ecx, dword ptr [edi + 0x9c]
// 0081d90c  8b2f                 mov ebp, dword ptr [edi]
// 0081d90e  89442428             mov dword ptr [esp + 0x28], eax
// 0081d912  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 0081d918  50                   push eax
// 0081d919  83ec10               sub esp, 0x10
// 0081d91c  8bc4                 mov eax, esp
// 0081d91e  03ca                 add ecx, edx
// 0081d920  8910                 mov dword ptr [eax], edx
// 0081d922  8b5674               mov edx, dword ptr [esi + 0x74]
// 0081d925  895004               mov dword ptr [eax + 4], edx
// 0081d928  8b5558               mov edx, dword ptr [ebp + 0x58]
// 0081d92b  894808               mov dword ptr [eax + 8], ecx
// 0081d92e  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 0081d931  89480c               mov dword ptr [eax + 0xc], ecx
// 0081d934  53                   push ebx
// 0081d935  8bcf                 mov ecx, edi
// 0081d937  ffd2                 call edx
// 0081d939  8b07                 mov eax, dword ptr [edi]
// 0081d93b  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0081d93e  8d4e60               lea ecx, [esi + 0x60]
// 0081d941  51                   push ecx
// 0081d942  53                   push ebx
// 0081d943  8bcf                 mov ecx, edi
// 0081d945  ffd2                 call edx
// 0081d947  8b06                 mov eax, dword ptr [esi]
// 0081d949  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 0081d94f  8d8e90000000         lea ecx, [esi + 0x90]
// 0081d955  51                   push ecx
// 0081d956  53                   push ebx
// 0081d957  8bce                 mov ecx, esi
// 0081d959  ffd2                 call edx
// 0081d95b  33ed                 xor ebp, ebp
// 0081d95d  39aef4010000         cmp dword ptr [esi + 0x1f4], ebp
// 0081d963  743b                 je 0x81d9a0
// 0081d965  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0081d96b  e8b0f20000           call 0x82cc20
// 0081d970  85c0                 test eax, eax
// 0081d972  7e2c                 jle 0x81d9a0
// 0081d974  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0081d97a  8b06                 mov eax, dword ptr [esi]
// 0081d97c  8b801c020000         mov eax, dword ptr [eax + 0x21c]
// 0081d982  51                   push ecx
// 0081d983  8d96a0000000         lea edx, [esi + 0xa0]
// 0081d989  52                   push edx
// 0081d98a  53                   push ebx
// 0081d98b  8bce                 mov ecx, esi
// 0081d98d  ffd0                 call eax
// 0081d98f  6a01                 push 1
// 0081d991  8d8ec0000000         lea ecx, [esi + 0xc0]
// 0081d997  51                   push ecx
// 0081d998  53                   push ebx
// 0081d999  8bce                 mov ecx, esi
// 0081d99b  e890fbffff           call 0x81d530
// 0081d9a0  39aef8010000         cmp dword ptr [esi + 0x1f8], ebp
// 0081d9a6  743a                 je 0x81d9e2
// 0081d9a8  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0081d9ae  e86df20000           call 0x82cc20
// 0081d9b3  85c0                 test eax, eax
// 0081d9b5  7e2b                 jle 0x81d9e2
// 0081d9b7  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0081d9bd  8b16                 mov edx, dword ptr [esi]
// 0081d9bf  8b921c020000         mov edx, dword ptr [edx + 0x21c]
// 0081d9c5  50                   push eax
// 0081d9c6  8d8eb0000000         lea ecx, [esi + 0xb0]
// 0081d9cc  51                   push ecx
// 0081d9cd  53                   push ebx
// 0081d9ce  8bce                 mov ecx, esi
// 0081d9d0  ffd2                 call edx
// 0081d9d2  55                   push ebp
// 0081d9d3  8d86d0000000         lea eax, [esi + 0xd0]
// 0081d9d9  50                   push eax
// 0081d9da  53                   push ebx
// 0081d9db  8bce                 mov ecx, esi
// 0081d9dd  e84efbffff           call 0x81d530
// 0081d9e2  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 0081d9e8  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0081d9ee  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 0081d9f4  894c2410             mov dword ptr [esp + 0x10], ecx
// 0081d9f8  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0081d9fe  8944241c             mov dword ptr [esp + 0x1c], eax
// 0081da02  2bc1                 sub eax, ecx
// 0081da04  894c2414             mov dword ptr [esp + 0x14], ecx
// 0081da08  89542418             mov dword ptr [esp + 0x18], edx
// 0081da0c  85c0                 test eax, eax
// 0081da0e  7e16                 jle 0x81da26
// 0081da10  8b8e0c010000         mov ecx, dword ptr [esi + 0x10c]
// 0081da16  8b07                 mov eax, dword ptr [edi]
// 0081da18  8b4060               mov eax, dword ptr [eax + 0x60]
// 0081da1b  51                   push ecx
// 0081da1c  8d542414             lea edx, [esp + 0x14]
// 0081da20  52                   push edx
// 0081da21  53                   push ebx
// 0081da22  8bcf                 mov ecx, edi
// 0081da24  ffd0                 call eax
// 0081da26  83bea0020000ff       cmp dword ptr [esi + 0x2a0], -1
// 0081da2d  740d                 je 0x81da3c
// 0081da2f  8b16                 mov edx, dword ptr [esi]
// 0081da31  8b8250020000         mov eax, dword ptr [edx + 0x250]
// 0081da37  53                   push ebx
// 0081da38  8bce                 mov ecx, esi
// 0081da3a  ffd0                 call eax
// 0081da3c  5f                   pop edi
// 0081da3d  896e54               mov dword ptr [esi + 0x54], ebp
// 0081da40  5e                   pop esi
// 0081da41  5d                   pop ebp
// 0081da42  5b                   pop ebx
// 0081da43  83c420               add esp, 0x20
// 0081da46  c20400               ret 4
// copied from an identical function in another client (function ?OnDraw@CXTPReportControl@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp
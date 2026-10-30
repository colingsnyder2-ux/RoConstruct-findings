// roc 2009-12 0087d840  unit: XTPPaintThemes::CXTPDefaultTheme  size: 436 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087d840
//
// 0087d840  6aff                 push -1
// 0087d842  6800049600           push 0x960400
// 0087d847  64a100000000         mov eax, dword ptr fs:[0]
// 0087d84d  50                   push eax
// 0087d84e  83ec2c               sub esp, 0x2c
// 0087d851  a10052b600           mov eax, dword ptr [0xb65200]
// 0087d856  33c4                 xor eax, esp
// 0087d858  89442428             mov dword ptr [esp + 0x28], eax
// 0087d85c  53                   push ebx
// 0087d85d  55                   push ebp
// 0087d85e  56                   push esi
// 0087d85f  57                   push edi
// 0087d860  a10052b600           mov eax, dword ptr [0xb65200]
// 0087d865  33c4                 xor eax, esp
// 0087d867  50                   push eax
// 0087d868  8d442440             lea eax, [esp + 0x40]
// 0087d86c  64a300000000         mov dword ptr fs:[0], eax
// 0087d872  8b742450             mov esi, dword ptr [esp + 0x50]
// 0087d876  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0087d87a  8be9                 mov ebp, ecx
// 0087d87c  b855000000           mov eax, 0x55
// 0087d881  8bd0                 mov edx, eax
// 0087d883  b9aa000000           mov ecx, 0xaa
// 0087d888  668944242c           mov word ptr [esp + 0x2c], ax
// 0087d88d  8bc1                 mov eax, ecx
// 0087d88f  66894c242e           mov word ptr [esp + 0x2e], cx
// 0087d894  8bca                 mov ecx, edx
// 0087d896  6689542430           mov word ptr [esp + 0x30], dx
// 0087d89b  8bd0                 mov edx, eax
// 0087d89d  6689442432           mov word ptr [esp + 0x32], ax
// 0087d8a2  8bc1                 mov eax, ecx
// 0087d8a4  66894c2434           mov word ptr [esp + 0x34], cx
// 0087d8a9  8bca                 mov ecx, edx
// 0087d8ab  33db                 xor ebx, ebx
// 0087d8ad  6689542436           mov word ptr [esp + 0x36], dx
// 0087d8b2  6689442438           mov word ptr [esp + 0x38], ax
// 0087d8b7  66894c243a           mov word ptr [esp + 0x3a], cx
// 0087d8bc  895c2424             mov dword ptr [esp + 0x24], ebx
// 0087d8c0  c744242018229a00     mov dword ptr [esp + 0x20], 0x9a2218
// 0087d8c8  8d54242c             lea edx, [esp + 0x2c]
// 0087d8cc  52                   push edx
// 0087d8cd  6a01                 push 1
// 0087d8cf  6a01                 push 1
// 0087d8d1  6a08                 push 8
// 0087d8d3  6a08                 push 8
// 0087d8d5  895c245c             mov dword ptr [esp + 0x5c], ebx
// 0087d8d9  ff1578b19800         call dword ptr [0x98b178]
// 0087d8df  50                   push eax
// 0087d8e0  8d4c2424             lea ecx, [esp + 0x24]
// 0087d8e4  e84165f7ff           call 0x7f3e2a
// 0087d8e9  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0087d8ed  c744241848189a00     mov dword ptr [esp + 0x18], 0x9a1848
// 0087d8f5  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087d8f9  50                   push eax
// 0087d8fa  c644244c01           mov byte ptr [esp + 0x4c], 1
// 0087d8ff  ff15e4b09800         call dword ptr [0x98b0e4]
// 0087d905  50                   push eax
// 0087d906  8d4c241c             lea ecx, [esp + 0x1c]
// 0087d90a  e81b65f7ff           call 0x7f3e2a
// 0087d90f  8d4c2418             lea ecx, [esp + 0x18]
// 0087d913  51                   push ecx
// 0087d914  8bce                 mov ecx, esi
// 0087d916  e8b18b0a00           call 0x9264cc
// 0087d91b  8b16                 mov edx, dword ptr [esi]
// 0087d91d  6a0f                 push 0xf
// 0087d91f  8bcd                 mov ecx, ebp
// 0087d921  8bd8                 mov ebx, eax
// 0087d923  89542418             mov dword ptr [esp + 0x18], edx
// 0087d927  e814fdf7ff           call 0x7fd640
// 0087d92c  50                   push eax
// 0087d92d  8b442418             mov eax, dword ptr [esp + 0x18]
// 0087d931  8b5034               mov edx, dword ptr [eax + 0x34]
// 0087d934  8bce                 mov ecx, esi
// 0087d936  ffd2                 call edx
// 0087d938  89442428             mov dword ptr [esp + 0x28], eax
// 0087d93c  8b06                 mov eax, dword ptr [esi]
// 0087d93e  6a14                 push 0x14
// 0087d940  8bcd                 mov ecx, ebp
// 0087d942  89442418             mov dword ptr [esp + 0x18], eax
// 0087d946  e8f5fcf7ff           call 0x7fd640
// 0087d94b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0087d94f  50                   push eax
// 0087d950  8b4238               mov eax, dword ptr [edx + 0x38]
// 0087d953  8bce                 mov ecx, esi
// 0087d955  ffd0                 call eax
// 0087d957  8b4f04               mov ecx, dword ptr [edi + 4]
// 0087d95a  8b17                 mov edx, dword ptr [edi]
// 0087d95c  8be8                 mov ebp, eax
// 0087d95e  8b470c               mov eax, dword ptr [edi + 0xc]
// 0087d961  8b7f08               mov edi, dword ptr [edi + 8]
// 0087d964  682100f000           push 0xf00021
// 0087d969  2bc1                 sub eax, ecx
// 0087d96b  50                   push eax
// 0087d96c  2bfa                 sub edi, edx
// 0087d96e  57                   push edi
// 0087d96f  51                   push ecx
// 0087d970  8b4e04               mov ecx, dword ptr [esi + 4]
// 0087d973  52                   push edx
// 0087d974  51                   push ecx
// 0087d975  ff1508b19800         call dword ptr [0x98b108]
// 0087d97b  53                   push ebx
// 0087d97c  8bce                 mov ecx, esi
// 0087d97e  e8498b0a00           call 0x9264cc
// 0087d983  8b16                 mov edx, dword ptr [esi]
// 0087d985  8b442428             mov eax, dword ptr [esp + 0x28]
// 0087d989  8b5234               mov edx, dword ptr [edx + 0x34]
// 0087d98c  50                   push eax
// 0087d98d  8bce                 mov ecx, esi
// 0087d98f  ffd2                 call edx
// 0087d991  8b06                 mov eax, dword ptr [esi]
// 0087d993  8b5038               mov edx, dword ptr [eax + 0x38]
// 0087d996  55                   push ebp
// 0087d997  8bce                 mov ecx, esi
// 0087d999  ffd2                 call edx
// 0087d99b  8d4c2418             lea ecx, [esp + 0x18]
// 0087d99f  e87a64f7ff           call 0x7f3e1e
// 0087d9a4  8d4c2418             lea ecx, [esp + 0x18]
// 0087d9a8  c644244800           mov byte ptr [esp + 0x48], 0
// 0087d9ad  c744241848189a00     mov dword ptr [esp + 0x18], 0x9a1848
// 0087d9b5  e87618b9ff           call 0x40f230
// 0087d9ba  8d4c2420             lea ecx, [esp + 0x20]
// 0087d9be  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 0087d9c6  c744242018229a00     mov dword ptr [esp + 0x20], 0x9a2218
// 0087d9ce  e85d18b9ff           call 0x40f230
// 0087d9d3  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0087d9d7  64890d00000000       mov dword ptr fs:[0], ecx
// 0087d9de  59                   pop ecx
// 0087d9df  5f                   pop edi
// 0087d9e0  5e                   pop esi
// 0087d9e1  5d                   pop ebp
// 0087d9e2  5b                   pop ebx
// 0087d9e3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0087d9e7  33cc                 xor ecx, esp
// 0087d9e9  e8ac79f7ff           call 0x7f539a
// 0087d9ee  83c438               add esp, 0x38
// 0087d9f1  c20800               ret 8
// copied from an identical function in another client (function ?DrawShadedRect@CXTPDefaultTheme@XTPPaintThemes@@IAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPDefaultTheme.cpp
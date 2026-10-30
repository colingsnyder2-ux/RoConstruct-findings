// roc 2012-06 00a54910  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 429 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a54910
//
// 00a54910  83ec10               sub esp, 0x10
// 00a54913  53                   push ebx
// 00a54914  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00a54918  55                   push ebp
// 00a54919  56                   push esi
// 00a5491a  57                   push edi
// 00a5491b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00a5491f  8bf1                 mov esi, ecx
// 00a54921  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a54925  8b16                 mov edx, dword ptr [esi]
// 00a54927  8b5208               mov edx, dword ptr [edx + 8]
// 00a5492a  57                   push edi
// 00a5492b  83ec10               sub esp, 0x10
// 00a5492e  8bc4                 mov eax, esp
// 00a54930  8908                 mov dword ptr [eax], ecx
// 00a54932  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a54936  894804               mov dword ptr [eax + 4], ecx
// 00a54939  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a5493d  894808               mov dword ptr [eax + 8], ecx
// 00a54940  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a54944  89480c               mov dword ptr [eax + 0xc], ecx
// 00a54947  53                   push ebx
// 00a54948  8bce                 mov ecx, esi
// 00a5494a  ffd2                 call edx
// 00a5494c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a5494f  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00a54955  8b2b                 mov ebp, dword ptr [ebx]
// 00a54957  8b11                 mov edx, dword ptr [ecx]
// 00a54959  8b520c               mov edx, dword ptr [edx + 0xc]
// 00a5495c  57                   push edi
// 00a5495d  83ec10               sub esp, 0x10
// 00a54960  8bc4                 mov eax, esp
// 00a54962  8928                 mov dword ptr [eax], ebp
// 00a54964  8b6b04               mov ebp, dword ptr [ebx + 4]
// 00a54967  896804               mov dword ptr [eax + 4], ebp
// 00a5496a  8b6b08               mov ebp, dword ptr [ebx + 8]
// 00a5496d  896808               mov dword ptr [eax + 8], ebp
// 00a54970  8b6b0c               mov ebp, dword ptr [ebx + 0xc]
// 00a54973  89680c               mov dword ptr [eax + 0xc], ebp
// 00a54976  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a5497a  50                   push eax
// 00a5497b  ffd2                 call edx
// 00a5497d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a54981  8b16                 mov edx, dword ptr [esi]
// 00a54983  8b520c               mov edx, dword ptr [edx + 0xc]
// 00a54986  57                   push edi
// 00a54987  83ec10               sub esp, 0x10
// 00a5498a  8bc4                 mov eax, esp
// 00a5498c  8908                 mov dword ptr [eax], ecx
// 00a5498e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a54992  894804               mov dword ptr [eax + 4], ecx
// 00a54995  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a54999  894808               mov dword ptr [eax + 8], ecx
// 00a5499c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a549a0  89480c               mov dword ptr [eax + 0xc], ecx
// 00a549a3  8d442424             lea eax, [esp + 0x24]
// 00a549a7  50                   push eax
// 00a549a8  8bce                 mov ecx, esi
// 00a549aa  ffd2                 call edx
// 00a549ac  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a549af  83783800             cmp dword ptr [eax + 0x38], 0
// 00a549b3  7564                 jne 0xa54a19
// 00a549b5  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00a549bb  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00a549bf  8b11                 mov edx, dword ptr [ecx]
// 00a549c1  57                   push edi
// 00a549c2  83ec10               sub esp, 0x10
// 00a549c5  8bc4                 mov eax, esp
// 00a549c7  8928                 mov dword ptr [eax], ebp
// 00a549c9  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00a549cd  896804               mov dword ptr [eax + 4], ebp
// 00a549d0  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00a549d4  896808               mov dword ptr [eax + 8], ebp
// 00a549d7  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00a549db  89680c               mov dword ptr [eax + 0xc], ebp
// 00a549de  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00a549e2  8b4210               mov eax, dword ptr [edx + 0x10]
// 00a549e5  55                   push ebp
// 00a549e6  ffd0                 call eax
// 00a549e8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00a549eb  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00a549f1  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00a549f4  83f9ff               cmp ecx, -1
// 00a549f7  7503                 jne 0xa549fc
// 00a549f9  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00a549fc  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00a549ff  83faff               cmp edx, -1
// 00a54a02  7505                 jne 0xa54a09
// 00a54a04  8b4048               mov eax, dword ptr [eax + 0x48]
// 00a54a07  eb02                 jmp 0xa54a0b
// 00a54a09  8bc2                 mov eax, edx
// 00a54a0b  51                   push ecx
// 00a54a0c  50                   push eax
// 00a54a0d  8d542418             lea edx, [esp + 0x18]
// 00a54a11  52                   push edx
// 00a54a12  8bcd                 mov ecx, ebp
// 00a54a14  e88de4f2ff           call 0x982ea6
// 00a54a19  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a54a1c  83783801             cmp dword ptr [eax + 0x38], 1
// 00a54a20  0f858b000000         jne 0xa54ab1
// 00a54a26  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00a54a2c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00a54a30  8b11                 mov edx, dword ptr [ecx]
// 00a54a32  57                   push edi
// 00a54a33  83ec10               sub esp, 0x10
// 00a54a36  8bc4                 mov eax, esp
// 00a54a38  8928                 mov dword ptr [eax], ebp
// 00a54a3a  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00a54a3e  896804               mov dword ptr [eax + 4], ebp
// 00a54a41  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00a54a45  896808               mov dword ptr [eax + 8], ebp
// 00a54a48  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00a54a4c  89680c               mov dword ptr [eax + 0xc], ebp
// 00a54a4f  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00a54a53  8b4210               mov eax, dword ptr [edx + 0x10]
// 00a54a56  55                   push ebp
// 00a54a57  ffd0                 call eax
// 00a54a59  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00a54a5c  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00a54a62  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00a54a65  83f9ff               cmp ecx, -1
// 00a54a68  7503                 jne 0xa54a6d
// 00a54a6a  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00a54a6d  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00a54a70  83faff               cmp edx, -1
// 00a54a73  7505                 jne 0xa54a7a
// 00a54a75  8b4048               mov eax, dword ptr [eax + 0x48]
// 00a54a78  eb02                 jmp 0xa54a7c
// 00a54a7a  8bc2                 mov eax, edx
// 00a54a7c  8b17                 mov edx, dword ptr [edi]
// 00a54a7e  51                   push ecx
// 00a54a7f  50                   push eax
// 00a54a80  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a54a83  8bcf                 mov ecx, edi
// 00a54a85  ffd0                 call eax
// 00a54a87  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a54a8b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a54a8f  50                   push eax
// 00a54a90  83ec10               sub esp, 0x10
// 00a54a93  8bc4                 mov eax, esp
// 00a54a95  8908                 mov dword ptr [eax], ecx
// 00a54a97  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a54a9b  895004               mov dword ptr [eax + 4], edx
// 00a54a9e  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a54aa2  894808               mov dword ptr [eax + 8], ecx
// 00a54aa5  55                   push ebp
// 00a54aa6  89500c               mov dword ptr [eax + 0xc], edx
// 00a54aa9  e812d1ffff           call 0xa51bc0
// 00a54aae  83c420               add esp, 0x20
// 00a54ab1  5f                   pop edi
// 00a54ab2  5e                   pop esi
// 00a54ab3  5d                   pop ebp
// 00a54ab4  8bc3                 mov eax, ebx
// 00a54ab6  5b                   pop ebx
// 00a54ab7  83c410               add esp, 0x10
// 00a54aba  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetFlat@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp

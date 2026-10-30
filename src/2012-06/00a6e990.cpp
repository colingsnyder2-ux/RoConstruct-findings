// roc 2012-06 00a6e990  unit: CXTPTabPaintManager::CColorSetWinXP  size: 488 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6e990
//
// 00a6e990  53                   push ebx
// 00a6e991  55                   push ebp
// 00a6e992  56                   push esi
// 00a6e993  57                   push edi
// 00a6e994  8bf9                 mov edi, ecx
// 00a6e996  8daf08020000         lea ebp, [edi + 0x208]
// 00a6e99c  8bcd                 mov ecx, ebp
// 00a6e99e  e8cd6ef8ff           call 0x9f5870
// 00a6e9a3  85c0                 test eax, eax
// 00a6e9a5  7538                 jne 0xa6e9df
// 00a6e9a7  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a6e9ab  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a6e9af  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a6e9b3  50                   push eax
// 00a6e9b4  83ec10               sub esp, 0x10
// 00a6e9b7  8bc4                 mov eax, esp
// 00a6e9b9  8908                 mov dword ptr [eax], ecx
// 00a6e9bb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a6e9bf  895004               mov dword ptr [eax + 4], edx
// 00a6e9c2  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a6e9c6  894808               mov dword ptr [eax + 8], ecx
// 00a6e9c9  89500c               mov dword ptr [eax + 0xc], edx
// 00a6e9cc  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a6e9d0  50                   push eax
// 00a6e9d1  8bcf                 mov ecx, edi
// 00a6e9d3  e878eaffff           call 0xa6d450
// 00a6e9d8  5f                   pop edi
// 00a6e9d9  5e                   pop esi
// 00a6e9da  5d                   pop ebp
// 00a6e9db  5b                   pop ebx
// 00a6e9dc  c21800               ret 0x18
// 00a6e9df  8b742428             mov esi, dword ptr [esp + 0x28]
// 00a6e9e3  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00a6e9e6  397104               cmp dword ptr [ecx + 4], esi
// 00a6e9e9  7522                 jne 0xa6ea0d
// 00a6e9eb  8b11                 mov edx, dword ptr [ecx]
// 00a6e9ed  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a6e9f0  ffd0                 call eax
// 00a6e9f2  83e800               sub eax, 0
// 00a6e9f5  bb01000000           mov ebx, 1
// 00a6e9fa  740a                 je 0xa6ea06
// 00a6e9fc  2bc3                 sub eax, ebx
// 00a6e9fe  7512                 jne 0xa6ea12
// 00a6ea00  015c2420             add dword ptr [esp + 0x20], ebx
// 00a6ea04  eb0c                 jmp 0xa6ea12
// 00a6ea06  8344242402           add dword ptr [esp + 0x24], 2
// 00a6ea0b  eb05                 jmp 0xa6ea12
// 00a6ea0d  bb01000000           mov ebx, 1
// 00a6ea12  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00a6ea15  8b11                 mov edx, dword ptr [ecx]
// 00a6ea17  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a6ea1a  ffd0                 call eax
// 00a6ea1c  83f803               cmp eax, 3
// 00a6ea1f  0f8738010000         ja 0xa6eb5d
// 00a6ea25  ff248568eba600       jmp dword ptr [eax*4 + 0xa6eb68]
// 00a6ea2c  295c2418             sub dword ptr [esp + 0x18], ebx
// 00a6ea30  295c241c             sub dword ptr [esp + 0x1c], ebx
// 00a6ea34  015c2420             add dword ptr [esp + 0x20], ebx
// 00a6ea38  8b4660               mov eax, dword ptr [esi + 0x60]
// 00a6ea3b  8b4804               mov ecx, dword ptr [eax + 4]
// 00a6ea3e  3bce                 cmp ecx, esi
// 00a6ea40  7507                 jne 0xa6ea49
// 00a6ea42  bf03000000           mov edi, 3
// 00a6ea47  eb0b                 jmp 0xa6ea54
// 00a6ea49  33d2                 xor edx, edx
// 00a6ea4b  397008               cmp dword ptr [eax + 8], esi
// 00a6ea4e  0f94c2               sete dl
// 00a6ea51  42                   inc edx
// 00a6ea52  8bfa                 mov edi, edx
// 00a6ea54  8b562c               mov edx, dword ptr [esi + 0x2c]
// 00a6ea57  85d2                 test edx, edx
// 00a6ea59  7505                 jne 0xa6ea60
// 00a6ea5b  8d4a06               lea ecx, [edx + 6]
// 00a6ea5e  eb17                 jmp 0xa6ea77
// 00a6ea60  8b405c               mov eax, dword ptr [eax + 0x5c]
// 00a6ea63  2bc3                 sub eax, ebx
// 00a6ea65  3bd0                 cmp edx, eax
// 00a6ea67  7509                 jne 0xa6ea72
// 00a6ea69  3bce                 cmp ecx, esi
// 00a6ea6b  b907000000           mov ecx, 7
// 00a6ea70  7505                 jne 0xa6ea77
// 00a6ea72  b905000000           mov ecx, 5
// 00a6ea77  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a6ea7b  85c0                 test eax, eax
// 00a6ea7d  7403                 je 0xa6ea82
// 00a6ea7f  8b4004               mov eax, dword ptr [eax + 4]
// 00a6ea82  6a00                 push 0
// 00a6ea84  8d54241c             lea edx, [esp + 0x1c]
// 00a6ea88  52                   push edx
// 00a6ea89  57                   push edi
// 00a6ea8a  51                   push ecx
// 00a6ea8b  50                   push eax
// 00a6ea8c  8bcd                 mov ecx, ebp
// 00a6ea8e  e80d6bf8ff           call 0x9f55a0
// 00a6ea93  83c8ff               or eax, 0xffffffff
// 00a6ea96  5f                   pop edi
// 00a6ea97  5e                   pop esi
// 00a6ea98  5d                   pop ebp
// 00a6ea99  5b                   pop ebx
// 00a6ea9a  c21800               ret 0x18
// 00a6ea9d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a6eaa1  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a6eaa5  2bcb                 sub ecx, ebx
// 00a6eaa7  03d3                 add edx, ebx
// 00a6eaa9  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00a6eaad  68b0caa600           push 0xa6cab0
// 00a6eab2  6a00                 push 0
// 00a6eab4  56                   push esi
// 00a6eab5  83c302               add ebx, 2
// 00a6eab8  83ec10               sub esp, 0x10
// 00a6eabb  8bc4                 mov eax, esp
// 00a6eabd  8908                 mov dword ptr [eax], ecx
// 00a6eabf  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a6eac3  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a6eac7  894804               mov dword ptr [eax + 4], ecx
// 00a6eaca  895008               mov dword ptr [eax + 8], edx
// 00a6eacd  8954243c             mov dword ptr [esp + 0x3c], edx
// 00a6ead1  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a6ead5  89580c               mov dword ptr [eax + 0xc], ebx
// 00a6ead8  52                   push edx
// 00a6ead9  eb77                 jmp 0xa6eb52
// 00a6eadb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a6eadf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a6eae3  2bcb                 sub ecx, ebx
// 00a6eae5  2bd3                 sub edx, ebx
// 00a6eae7  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00a6eaeb  6870cba600           push 0xa6cb70
// 00a6eaf0  6a01                 push 1
// 00a6eaf2  56                   push esi
// 00a6eaf3  43                   inc ebx
// 00a6eaf4  83ec10               sub esp, 0x10
// 00a6eaf7  8bc4                 mov eax, esp
// 00a6eaf9  8908                 mov dword ptr [eax], ecx
// 00a6eafb  895004               mov dword ptr [eax + 4], edx
// 00a6eafe  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a6eb02  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a6eb06  89542438             mov dword ptr [esp + 0x38], edx
// 00a6eb0a  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a6eb0e  894808               mov dword ptr [eax + 8], ecx
// 00a6eb11  89580c               mov dword ptr [eax + 0xc], ebx
// 00a6eb14  52                   push edx
// 00a6eb15  eb3b                 jmp 0xa6eb52
// 00a6eb17  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a6eb1b  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a6eb1f  6810cba600           push 0xa6cb10
// 00a6eb24  2bcb                 sub ecx, ebx
// 00a6eb26  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00a6eb2a  6a01                 push 1
// 00a6eb2c  56                   push esi
// 00a6eb2d  8b742424             mov esi, dword ptr [esp + 0x24]
// 00a6eb31  83c202               add edx, 2
// 00a6eb34  43                   inc ebx
// 00a6eb35  83ec10               sub esp, 0x10
// 00a6eb38  8bc4                 mov eax, esp
// 00a6eb3a  8930                 mov dword ptr [eax], esi
// 00a6eb3c  894804               mov dword ptr [eax + 4], ecx
// 00a6eb3f  895008               mov dword ptr [eax + 8], edx
// 00a6eb42  89580c               mov dword ptr [eax + 0xc], ebx
// 00a6eb45  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a6eb49  894c2438             mov dword ptr [esp + 0x38], ecx
// 00a6eb4d  8954243c             mov dword ptr [esp + 0x3c], edx
// 00a6eb51  50                   push eax
// 00a6eb52  8bcf                 mov ecx, edi
// 00a6eb54  895c2444             mov dword ptr [esp + 0x44], ebx
// 00a6eb58  e8d3fbffff           call 0xa6e730
// 00a6eb5d  5f                   pop edi
// 00a6eb5e  5e                   pop esi
// 00a6eb5f  5d                   pop ebp
// 00a6eb60  83c8ff               or eax, 0xffffffff
// 00a6eb63  5b                   pop ebx
// 00a6eb64  c21800               ret 0x18
// 00a6eb67  90                   nop 
// 00a6eb68  2cea                 sub al, 0xea
// 00a6eb6a  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 00a6eb6b  00db                 add bl, bl
// 00a6eb6d  eaa6009deaa600       ljmp 0xa6:0xea9d00a6
// 00a6eb74  17                   pop ss
// 00a6eb75  eba6                 jmp 0xa6eb1d
// copied from an identical function in another client (function ?FillPropertyButton@CColorSetWinXP@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManagerColors.cpp
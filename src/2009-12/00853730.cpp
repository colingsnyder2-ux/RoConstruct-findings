// roc 2009-12 00853730  unit: CXTPPropExchangeXMLNode  size: 307 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00853730
//
// 00853730  6aff                 push -1
// 00853732  6829dd9500           push 0x95dd29
// 00853737  64a100000000         mov eax, dword ptr fs:[0]
// 0085373d  50                   push eax
// 0085373e  51                   push ecx
// 0085373f  53                   push ebx
// 00853740  55                   push ebp
// 00853741  56                   push esi
// 00853742  57                   push edi
// 00853743  a10052b600           mov eax, dword ptr [0xb65200]
// 00853748  33c4                 xor eax, esp
// 0085374a  50                   push eax
// 0085374b  8d442418             lea eax, [esp + 0x18]
// 0085374f  64a300000000         mov dword ptr fs:[0], eax
// 00853755  8bf1                 mov esi, ecx
// 00853757  89742414             mov dword ptr [esp + 0x14], esi
// 0085375b  33db                 xor ebx, ebx
// 0085375d  895c2420             mov dword ptr [esp + 0x20], ebx
// 00853761  e8bac8ffff           call 0x850020
// 00853766  8d7e44               lea edi, [esi + 0x44]
// 00853769  c706ccc59f00         mov dword ptr [esi], 0x9fc5cc
// 0085376f  891f                 mov dword ptr [edi], ebx
// 00853771  895e48               mov dword ptr [esi + 0x48], ebx
// 00853774  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00853777  8d6e50               lea ebp, [esi + 0x50]
// 0085377a  8bcd                 mov ecx, ebp
// 0085377c  ff1574de9800         call dword ptr [0x98de74]
// 00853782  8d4e54               lea ecx, [esi + 0x54]
// 00853785  ff1574de9800         call dword ptr [0x98de74]
// 0085378b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0085378f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00853793  51                   push ecx
// 00853794  8bcd                 mov ecx, ebp
// 00853796  c644242406           mov byte ptr [esp + 0x24], 6
// 0085379b  894628               mov dword ptr [esi + 0x28], eax
// 0085379e  ff155cde9800         call dword ptr [0x98de5c]
// 008537a4  8b6e48               mov ebp, dword ptr [esi + 0x48]
// 008537a7  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008537ab  3be8                 cmp ebp, eax
// 008537ad  7424                 je 0x8537d3
// 008537af  894648               mov dword ptr [esi + 0x48], eax
// 008537b2  3bc3                 cmp eax, ebx
// 008537b4  740c                 je 0x8537c2
// 008537b6  8b10                 mov edx, dword ptr [eax]
// 008537b8  50                   push eax
// 008537b9  8b4204               mov eax, dword ptr [edx + 4]
// 008537bc  ffd0                 call eax
// 008537be  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008537c2  3beb                 cmp ebp, ebx
// 008537c4  740d                 je 0x8537d3
// 008537c6  8b4d00               mov ecx, dword ptr [ebp]
// 008537c9  8b5108               mov edx, dword ptr [ecx + 8]
// 008537cc  55                   push ebp
// 008537cd  ffd2                 call edx
// 008537cf  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008537d3  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 008537d6  3bcb                 cmp ecx, ebx
// 008537d8  740f                 je 0x8537e9
// 008537da  895e4c               mov dword ptr [esi + 0x4c], ebx
// 008537dd  8b01                 mov eax, dword ptr [ecx]
// 008537df  51                   push ecx
// 008537e0  8b4808               mov ecx, dword ptr [eax + 8]
// 008537e3  ffd1                 call ecx
// 008537e5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008537e9  c7465801000000       mov dword ptr [esi + 0x58], 1
// 008537f0  3bc3                 cmp eax, ebx
// 008537f2  7431                 je 0x853825
// 008537f4  8be8                 mov ebp, eax
// 008537f6  8b07                 mov eax, dword ptr [edi]
// 008537f8  3bc3                 cmp eax, ebx
// 008537fa  7408                 je 0x853804
// 008537fc  8b10                 mov edx, dword ptr [eax]
// 008537fe  50                   push eax
// 008537ff  8b4208               mov eax, dword ptr [edx + 8]
// 00853802  ffd0                 call eax
// 00853804  891f                 mov dword ptr [edi], ebx
// 00853806  8b4d00               mov ecx, dword ptr [ebp]
// 00853809  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 0085380c  57                   push edi
// 0085380d  55                   push ebp
// 0085380e  ffd2                 call edx
// 00853810  391f                 cmp dword ptr [edi], ebx
// 00853812  0f94c0               sete al
// 00853815  3ac3                 cmp al, bl
// 00853817  740c                 je 0x853825
// 00853819  8d44242c             lea eax, [esp + 0x2c]
// 0085381d  50                   push eax
// 0085381e  8bcf                 mov ecx, edi
// 00853820  e8ebf4ffff           call 0x852d10
// 00853825  68c0c59f00           push 0x9fc5c0
// 0085382a  8d4e54               lea ecx, [esi + 0x54]
// 0085382d  ff155cde9800         call dword ptr [0x98de5c]
// 00853833  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00853837  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0085383f  3bc3                 cmp eax, ebx
// 00853841  7408                 je 0x85384b
// 00853843  8b08                 mov ecx, dword ptr [eax]
// 00853845  8b5108               mov edx, dword ptr [ecx + 8]
// 00853848  50                   push eax
// 00853849  ffd2                 call edx
// 0085384b  8bc6                 mov eax, esi
// 0085384d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00853851  64890d00000000       mov dword ptr fs:[0], ecx
// 00853858  59                   pop ecx
// 00853859  5f                   pop edi
// 0085385a  5e                   pop esi
// 0085385b  5d                   pop ebp
// 0085385c  5b                   pop ebx
// 0085385d  83c410               add esp, 0x10
// 00853860  c20c00               ret 0xc
// copied from an identical function in another client (function ??0CXTPPropExchangeXMLNode@@QAE@HV?$_com_ptr_t@V?$_com_IIID@UIXMLDOMNode@XTPXML@@$1?_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp
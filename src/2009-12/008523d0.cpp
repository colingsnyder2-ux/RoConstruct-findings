// roc 2009-12 008523d0  unit: CXTPPropExchangeArchive  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008523d0
//
// 008523d0  6aff                 push -1
// 008523d2  6821db9500           push 0x95db21
// 008523d7  64a100000000         mov eax, dword ptr fs:[0]
// 008523dd  50                   push eax
// 008523de  83ec10               sub esp, 0x10
// 008523e1  53                   push ebx
// 008523e2  55                   push ebp
// 008523e3  56                   push esi
// 008523e4  57                   push edi
// 008523e5  a10052b600           mov eax, dword ptr [0xb65200]
// 008523ea  33c4                 xor eax, esp
// 008523ec  50                   push eax
// 008523ed  8d442424             lea eax, [esp + 0x24]
// 008523f1  64a300000000         mov dword ptr fs:[0], eax
// 008523f7  894c2418             mov dword ptr [esp + 0x18], ecx
// 008523fb  33ed                 xor ebp, ebp
// 008523fd  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00852401  8b742434             mov esi, dword ptr [esp + 0x34]
// 00852405  892e                 mov dword ptr [esi], ebp
// 00852407  b801000000           mov eax, 1
// 0085240c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00852410  896c2414             mov dword ptr [esp + 0x14], ebp
// 00852414  8b7948               mov edi, dword ptr [ecx + 0x48]
// 00852417  8944242c             mov dword ptr [esp + 0x2c], eax
// 0085241b  3bfd                 cmp edi, ebp
// 0085241d  750a                 jne 0x852429
// 0085241f  6803400080           push 0x80004003
// 00852424  e8d734faff           call 0x7f5900
// 00852429  8b442438             mov eax, dword ptr [esp + 0x38]
// 0085242d  50                   push eax
// 0085242e  8d4c2424             lea ecx, [esp + 0x24]
// 00852432  e859c50100           call 0x86e990
// 00852437  8bd8                 mov ebx, eax
// 00852439  8b06                 mov eax, dword ptr [esi]
// 0085243b  c644242c02           mov byte ptr [esp + 0x2c], 2
// 00852440  3bc5                 cmp eax, ebp
// 00852442  7408                 je 0x85244c
// 00852444  8b08                 mov ecx, dword ptr [eax]
// 00852446  8b5108               mov edx, dword ptr [ecx + 8]
// 00852449  50                   push eax
// 0085244a  ffd2                 call edx
// 0085244c  892e                 mov dword ptr [esi], ebp
// 0085244e  8b2f                 mov ebp, dword ptr [edi]
// 00852450  56                   push esi
// 00852451  8bcb                 mov ecx, ebx
// 00852453  e818d2cdff           call 0x52f670
// 00852458  50                   push eax
// 00852459  8b8594000000         mov eax, dword ptr [ebp + 0x94]
// 0085245f  57                   push edi
// 00852460  ffd0                 call eax
// 00852462  8d4c2420             lea ecx, [esp + 0x20]
// 00852466  8bf8                 mov edi, eax
// 00852468  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0085246d  e8febb0100           call 0x86e070
// 00852472  85ff                 test edi, edi
// 00852474  7c0e                 jl 0x852484
// 00852476  833e00               cmp dword ptr [esi], 0
// 00852479  0f94c0               sete al
// 0085247c  84c0                 test al, al
// 0085247e  0f84a7000000         je 0x85252b
// 00852484  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00852488  8b7944               mov edi, dword ptr [ecx + 0x44]
// 0085248b  85ff                 test edi, edi
// 0085248d  750a                 jne 0x852499
// 0085248f  6803400080           push 0x80004003
// 00852494  e86734faff           call 0x7f5900
// 00852499  8b542438             mov edx, dword ptr [esp + 0x38]
// 0085249d  52                   push edx
// 0085249e  8d4c243c             lea ecx, [esp + 0x3c]
// 008524a2  e8e9c40100           call 0x86e990
// 008524a7  8bd8                 mov ebx, eax
// 008524a9  8b442414             mov eax, dword ptr [esp + 0x14]
// 008524ad  c644242c03           mov byte ptr [esp + 0x2c], 3
// 008524b2  85c0                 test eax, eax
// 008524b4  7408                 je 0x8524be
// 008524b6  8b08                 mov ecx, dword ptr [eax]
// 008524b8  8b5108               mov edx, dword ptr [ecx + 8]
// 008524bb  50                   push eax
// 008524bc  ffd2                 call edx
// 008524be  8d442414             lea eax, [esp + 0x14]
// 008524c2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008524ca  8b2f                 mov ebp, dword ptr [edi]
// 008524cc  50                   push eax
// 008524cd  8bcb                 mov ecx, ebx
// 008524cf  e89cd1cdff           call 0x52f670
// 008524d4  8b8dbc000000         mov ecx, dword ptr [ebp + 0xbc]
// 008524da  50                   push eax
// 008524db  57                   push edi
// 008524dc  ffd1                 call ecx
// 008524de  8d4c2438             lea ecx, [esp + 0x38]
// 008524e2  c644242c01           mov byte ptr [esp + 0x2c], 1
// 008524e7  e884bb0100           call 0x86e070
// 008524ec  8b442414             mov eax, dword ptr [esp + 0x14]
// 008524f0  85c0                 test eax, eax
// 008524f2  743b                 je 0x85252f
// 008524f4  8b542418             mov edx, dword ptr [esp + 0x18]
// 008524f8  8b7a48               mov edi, dword ptr [edx + 0x48]
// 008524fb  85ff                 test edi, edi
// 008524fd  750a                 jne 0x852509
// 008524ff  6803400080           push 0x80004003
// 00852504  e8f733faff           call 0x7f5900
// 00852509  8b0e                 mov ecx, dword ptr [esi]
// 0085250b  85c9                 test ecx, ecx
// 0085250d  740c                 je 0x85251b
// 0085250f  8b01                 mov eax, dword ptr [ecx]
// 00852511  51                   push ecx
// 00852512  8b4808               mov ecx, dword ptr [eax + 8]
// 00852515  ffd1                 call ecx
// 00852517  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085251b  56                   push esi
// 0085251c  c70600000000         mov dword ptr [esi], 0
// 00852522  8b17                 mov edx, dword ptr [edi]
// 00852524  50                   push eax
// 00852525  8b4254               mov eax, dword ptr [edx + 0x54]
// 00852528  57                   push edi
// 00852529  ffd0                 call eax
// 0085252b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085252f  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00852534  85c0                 test eax, eax
// 00852536  7408                 je 0x852540
// 00852538  8b08                 mov ecx, dword ptr [eax]
// 0085253a  8b5108               mov edx, dword ptr [ecx + 8]
// 0085253d  50                   push eax
// 0085253e  ffd2                 call edx
// 00852540  8bc6                 mov eax, esi
// 00852542  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00852546  64890d00000000       mov dword ptr fs:[0], ecx
// 0085254d  59                   pop ecx
// 0085254e  5f                   pop edi
// 0085254f  5e                   pop esi
// 00852550  5d                   pop ebp
// 00852551  5b                   pop ebx
// 00852552  83c41c               add esp, 0x1c
// 00852555  c20800               ret 8
// copied from an identical function in another client (function ?GetProfileNode@CXTPPropExchangeXMLNode@@IAE?AV?$_com_ptr_t@V?$_com_IIID@UIXMLDOMNode@XTPXML@@$1?_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@PBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
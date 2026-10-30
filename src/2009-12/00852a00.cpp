// roc 2009-12 00852a00  unit: CXTPPropExchangeArchive  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00852a00
//
// 00852a00  6aff                 push -1
// 00852a02  68f9db9500           push 0x95dbf9
// 00852a07  64a100000000         mov eax, dword ptr fs:[0]
// 00852a0d  50                   push eax
// 00852a0e  83ec08               sub esp, 8
// 00852a11  53                   push ebx
// 00852a12  55                   push ebp
// 00852a13  56                   push esi
// 00852a14  57                   push edi
// 00852a15  a10052b600           mov eax, dword ptr [0xb65200]
// 00852a1a  33c4                 xor eax, esp
// 00852a1c  50                   push eax
// 00852a1d  8d44241c             lea eax, [esp + 0x1c]
// 00852a21  64a300000000         mov dword ptr fs:[0], eax
// 00852a27  8bf1                 mov esi, ecx
// 00852a29  33ed                 xor ebp, ebp
// 00852a2b  896c2418             mov dword ptr [esp + 0x18], ebp
// 00852a2f  896c2414             mov dword ptr [esp + 0x14], ebp
// 00852a33  8d4c2418             lea ecx, [esp + 0x18]
// 00852a37  896c2424             mov dword ptr [esp + 0x24], ebp
// 00852a3b  ff1574de9800         call dword ptr [0x98de74]
// 00852a41  8d7e08               lea edi, [esi + 8]
// 00852a44  8bcf                 mov ecx, edi
// 00852a46  c644242401           mov byte ptr [esp + 0x24], 1
// 00852a4b  ff15bcdd9800         call dword ptr [0x98ddbc]
// 00852a51  84c0                 test al, al
// 00852a53  7407                 je 0x852a5c
// 00852a55  b8a0489b00           mov eax, 0x9b48a0
// 00852a5a  eb08                 jmp 0x852a64
// 00852a5c  8bcf                 mov ecx, edi
// 00852a5e  ff1580de9800         call dword ptr [0x98de80]
// 00852a64  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00852a68  51                   push ecx
// 00852a69  50                   push eax
// 00852a6a  8d542420             lea edx, [esp + 0x20]
// 00852a6e  6884c59f00           push 0x9fc584
// 00852a73  52                   push edx
// 00852a74  ff157cde9800         call dword ptr [0x98de7c]
// 00852a7a  8b4604               mov eax, dword ptr [esi + 4]
// 00852a7d  8b784c               mov edi, dword ptr [eax + 0x4c]
// 00852a80  83c04c               add eax, 0x4c
// 00852a83  83c410               add esp, 0x10
// 00852a86  3bfd                 cmp edi, ebp
// 00852a88  750a                 jne 0x852a94
// 00852a8a  6803400080           push 0x80004003
// 00852a8f  e86c2efaff           call 0x7f5900
// 00852a94  8d4c2418             lea ecx, [esp + 0x18]
// 00852a98  ff1580de9800         call dword ptr [0x98de80]
// 00852a9e  50                   push eax
// 00852a9f  8d4c2434             lea ecx, [esp + 0x34]
// 00852aa3  e8e8be0100           call 0x86e990
// 00852aa8  8bd8                 mov ebx, eax
// 00852aaa  8b442414             mov eax, dword ptr [esp + 0x14]
// 00852aae  c644242402           mov byte ptr [esp + 0x24], 2
// 00852ab3  3bc5                 cmp eax, ebp
// 00852ab5  7408                 je 0x852abf
// 00852ab7  8b08                 mov ecx, dword ptr [eax]
// 00852ab9  8b5108               mov edx, dword ptr [ecx + 8]
// 00852abc  50                   push eax
// 00852abd  ffd2                 call edx
// 00852abf  896c2414             mov dword ptr [esp + 0x14], ebp
// 00852ac3  8b37                 mov esi, dword ptr [edi]
// 00852ac5  8d442414             lea eax, [esp + 0x14]
// 00852ac9  50                   push eax
// 00852aca  8bcb                 mov ecx, ebx
// 00852acc  81c694000000         add esi, 0x94
// 00852ad2  e899cbcdff           call 0x52f670
// 00852ad7  8b0e                 mov ecx, dword ptr [esi]
// 00852ad9  50                   push eax
// 00852ada  57                   push edi
// 00852adb  ffd1                 call ecx
// 00852add  85c0                 test eax, eax
// 00852adf  8d4c2430             lea ecx, [esp + 0x30]
// 00852ae3  0f9dc3               setge bl
// 00852ae6  c644242401           mov byte ptr [esp + 0x24], 1
// 00852aeb  e880b50100           call 0x86e070
// 00852af0  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00852af4  84db                 test bl, bl
// 00852af6  7414                 je 0x852b0c
// 00852af8  8b442414             mov eax, dword ptr [esp + 0x14]
// 00852afc  8906                 mov dword ptr [esi], eax
// 00852afe  3bc5                 cmp eax, ebp
// 00852b00  740c                 je 0x852b0e
// 00852b02  8b10                 mov edx, dword ptr [eax]
// 00852b04  50                   push eax
// 00852b05  8b4204               mov eax, dword ptr [edx + 4]
// 00852b08  ffd0                 call eax
// 00852b0a  eb02                 jmp 0x852b0e
// 00852b0c  892e                 mov dword ptr [esi], ebp
// 00852b0e  8d4c2418             lea ecx, [esp + 0x18]
// 00852b12  ff15c0de9800         call dword ptr [0x98dec0]
// 00852b18  8b442414             mov eax, dword ptr [esp + 0x14]
// 00852b1c  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00852b24  3bc5                 cmp eax, ebp
// 00852b26  7408                 je 0x852b30
// 00852b28  8b08                 mov ecx, dword ptr [eax]
// 00852b2a  8b5108               mov edx, dword ptr [ecx + 8]
// 00852b2d  50                   push eax
// 00852b2e  ffd2                 call edx
// 00852b30  8bc6                 mov eax, esi
// 00852b32  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00852b36  64890d00000000       mov dword ptr fs:[0], ecx
// 00852b3d  59                   pop ecx
// 00852b3e  5f                   pop edi
// 00852b3f  5e                   pop esi
// 00852b40  5d                   pop ebp
// 00852b41  5b                   pop ebx
// 00852b42  83c414               add esp, 0x14
// 00852b45  c20800               ret 8
// copied from an identical function in another client (function ?GetProfileNode@CXMLEnumerator@CXTPPropExchangeXMLNode@@QAE?AV?$_com_ptr_t@V?$_com_IIID@UIXMLDOMNode@XTPXML@@$1?_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60@@3U__s_GUID@@B@@@@PAU__POSITION@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp
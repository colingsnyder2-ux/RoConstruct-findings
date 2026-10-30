// roc 2011-06 00403c90  unit: RBX::VRenderHooksService::?$FactoryProduct::Creator  size: 300 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00403c90
//
// 00403c90  56                   push esi
// 00403c91  8bf1                 mov esi, ecx
// 00403c93  e898ffffff           call 0x403c30
// 00403c98  8b0e                 mov ecx, dword ptr [esi]
// 00403c9a  8a01                 mov al, byte ptr [ecx]
// 00403c9c  84c0                 test al, al
// 00403c9e  7509                 jne 0x403ca9
// 00403ca0  b809000280           mov eax, 0x80020009
// 00403ca5  5e                   pop esi
// 00403ca6  c20400               ret 4
// 00403ca9  53                   push ebx
// 00403caa  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00403cae  55                   push ebp
// 00403caf  8b2dd419a400         mov ebp, dword ptr [0xa419d4]
// 00403cb5  57                   push edi
// 00403cb6  895c2414             mov dword ptr [esp + 0x14], ebx
// 00403cba  3c27                 cmp al, 0x27
// 00403cbc  7574                 jne 0x403d32
// 00403cbe  51                   push ecx
// 00403cbf  ffd5                 call ebp
// 00403cc1  8906                 mov dword ptr [esi], eax
// 00403cc3  803800               cmp byte ptr [eax], 0
// 00403cc6  7450                 je 0x403d18
// 00403cc8  8b06                 mov eax, dword ptr [esi]
// 00403cca  803827               cmp byte ptr [eax], 0x27
// 00403ccd  7508                 jne 0x403cd7
// 00403ccf  50                   push eax
// 00403cd0  ffd5                 call ebp
// 00403cd2  803827               cmp byte ptr [eax], 0x27
// 00403cd5  7541                 jne 0x403d18
// 00403cd7  8b06                 mov eax, dword ptr [esi]
// 00403cd9  803827               cmp byte ptr [eax], 0x27
// 00403cdc  7505                 jne 0x403ce3
// 00403cde  50                   push eax
// 00403cdf  ffd5                 call ebp
// 00403ce1  8906                 mov dword ptr [esi], eax
// 00403ce3  8b3e                 mov edi, dword ptr [esi]
// 00403ce5  57                   push edi
// 00403ce6  ffd5                 call ebp
// 00403ce8  8b542414             mov edx, dword ptr [esp + 0x14]
// 00403cec  8906                 mov dword ptr [esi], eax
// 00403cee  2bc7                 sub eax, edi
// 00403cf0  8d4c1801             lea ecx, [eax + ebx + 1]
// 00403cf4  81c200100000         add edx, 0x1000
// 00403cfa  3bca                 cmp ecx, edx
// 00403cfc  0f838c000000         jae 0x403d8e
// 00403d02  85c0                 test eax, eax
// 00403d04  7e0b                 jle 0x403d11
// 00403d06  8a0f                 mov cl, byte ptr [edi]
// 00403d08  880b                 mov byte ptr [ebx], cl
// 00403d0a  43                   inc ebx
// 00403d0b  47                   inc edi
// 00403d0c  83e801               sub eax, 1
// 00403d0f  75f5                 jne 0x403d06
// 00403d11  8b16                 mov edx, dword ptr [esi]
// 00403d13  803a00               cmp byte ptr [edx], 0
// 00403d16  75b0                 jne 0x403cc8
// 00403d18  8b06                 mov eax, dword ptr [esi]
// 00403d1a  803800               cmp byte ptr [eax], 0
// 00403d1d  746f                 je 0x403d8e
// 00403d1f  c60300               mov byte ptr [ebx], 0
// 00403d22  8b0e                 mov ecx, dword ptr [esi]
// 00403d24  51                   push ecx
// 00403d25  ffd5                 call ebp
// 00403d27  5f                   pop edi
// 00403d28  5d                   pop ebp
// 00403d29  8906                 mov dword ptr [esi], eax
// 00403d2b  5b                   pop ebx
// 00403d2c  33c0                 xor eax, eax
// 00403d2e  5e                   pop esi
// 00403d2f  c20400               ret 4
// 00403d32  8b3e                 mov edi, dword ptr [esi]
// 00403d34  0fbe07               movsx eax, byte ptr [edi]
// 00403d37  83c0f7               add eax, -9
// 00403d3a  83f817               cmp eax, 0x17
// 00403d3d  770e                 ja 0x403d4d
// 00403d3f  0fb690a43d4000       movzx edx, byte ptr [eax + 0x403da4]
// 00403d46  ff24959c3d4000       jmp dword ptr [edx*4 + 0x403d9c]
// 00403d4d  57                   push edi
// 00403d4e  ffd5                 call ebp
// 00403d50  8b542414             mov edx, dword ptr [esp + 0x14]
// 00403d54  8906                 mov dword ptr [esi], eax
// 00403d56  2bc7                 sub eax, edi
// 00403d58  8d4c1801             lea ecx, [eax + ebx + 1]
// 00403d5c  81c200100000         add edx, 0x1000
// 00403d62  3bca                 cmp ecx, edx
// 00403d64  7328                 jae 0x403d8e
// 00403d66  85c0                 test eax, eax
// 00403d68  7e11                 jle 0x403d7b
// 00403d6a  8d9b00000000         lea ebx, [ebx]
// 00403d70  8a0f                 mov cl, byte ptr [edi]
// 00403d72  880b                 mov byte ptr [ebx], cl
// 00403d74  43                   inc ebx
// 00403d75  47                   inc edi
// 00403d76  83e801               sub eax, 1
// 00403d79  75f5                 jne 0x403d70
// 00403d7b  8b16                 mov edx, dword ptr [esi]
// 00403d7d  803a00               cmp byte ptr [edx], 0
// 00403d80  75b0                 jne 0x403d32
// 00403d82  5f                   pop edi
// 00403d83  5d                   pop ebp
// 00403d84  c60300               mov byte ptr [ebx], 0
// 00403d87  5b                   pop ebx
// 00403d88  33c0                 xor eax, eax
// 00403d8a  5e                   pop esi
// 00403d8b  c20400               ret 4
// 00403d8e  5f                   pop edi
// 00403d8f  5d                   pop ebp
// 00403d90  5b                   pop ebx
// 00403d91  b809000280           mov eax, 0x80020009
// 00403d96  5e                   pop esi
// 00403d97  c20400               ret 4
// 00403d9a  8bff                 mov edi, edi
// 00403d9c  823d40004d3d40       cmp byte ptr [0x3d4d0040], 0x40
// 00403da3  0000                 add byte ptr [eax], al
// 00403da5  0001                 add byte ptr [ecx], al
// 00403da7  0100                 add dword ptr [eax], eax
// 00403da9  0101                 add dword ptr [ecx], eax
// 00403dab  0101                 add dword ptr [ecx], eax
// 00403dad  0101                 add dword ptr [ecx], eax
// 00403daf  0101                 add dword ptr [ecx], eax
// 00403db1  0101                 add dword ptr [ecx], eax
// 00403db3  0101                 add dword ptr [ecx], eax
// 00403db5  0101                 add dword ptr [ecx], eax
// 00403db7  0101                 add dword ptr [ecx], eax
// 00403db9  0101                 add dword ptr [ecx], eax
// copied from an identical function in another client (function ?NextToken@CRegParser@ATL@@IAEJPAD@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-8.0 atl.cpp
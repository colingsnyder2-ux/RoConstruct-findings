// from server: 100% by colin
// roc 2008-06 00402060  unit: VCWorkspace::?$CComObject  size: 300 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00402060
//
// 00402060  56                   push esi
// 00402061  8bf1                 mov esi, ecx
// 00402063  e898ffffff           call 0x402000
// 00402068  8b0e                 mov ecx, dword ptr [esi]
// 0040206a  8a01                 mov al, byte ptr [ecx]
// 0040206c  84c0                 test al, al
// 0040206e  7509                 jne 0x402079
// 00402070  b809000280           mov eax, 0x80020009
// 00402075  5e                   pop esi
// 00402076  c20400               ret 4
// 00402079  53                   push ebx
// 0040207a  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0040207e  55                   push ebp
// 0040207f  8b2d2c2e8000         mov ebp, dword ptr [0x802e2c]
// 00402085  57                   push edi
// 00402086  895c2414             mov dword ptr [esp + 0x14], ebx
// 0040208a  3c27                 cmp al, 0x27
// 0040208c  7574                 jne 0x402102
// 0040208e  51                   push ecx
// 0040208f  ffd5                 call ebp
// 00402091  8906                 mov dword ptr [esi], eax
// 00402093  803800               cmp byte ptr [eax], 0
// 00402096  7450                 je 0x4020e8
// 00402098  8b06                 mov eax, dword ptr [esi]
// 0040209a  803827               cmp byte ptr [eax], 0x27
// 0040209d  7508                 jne 0x4020a7
// 0040209f  50                   push eax
// 004020a0  ffd5                 call ebp
// 004020a2  803827               cmp byte ptr [eax], 0x27
// 004020a5  7541                 jne 0x4020e8
// 004020a7  8b06                 mov eax, dword ptr [esi]
// 004020a9  803827               cmp byte ptr [eax], 0x27
// 004020ac  7505                 jne 0x4020b3
// 004020ae  50                   push eax
// 004020af  ffd5                 call ebp
// 004020b1  8906                 mov dword ptr [esi], eax
// 004020b3  8b3e                 mov edi, dword ptr [esi]
// 004020b5  57                   push edi
// 004020b6  ffd5                 call ebp
// 004020b8  8b542414             mov edx, dword ptr [esp + 0x14]
// 004020bc  8906                 mov dword ptr [esi], eax
// 004020be  2bc7                 sub eax, edi
// 004020c0  8d4c1801             lea ecx, [eax + ebx + 1]
// 004020c4  81c200100000         add edx, 0x1000
// 004020ca  3bca                 cmp ecx, edx
// 004020cc  0f838c000000         jae 0x40215e
// 004020d2  85c0                 test eax, eax
// 004020d4  7e0b                 jle 0x4020e1
// 004020d6  8a0f                 mov cl, byte ptr [edi]
// 004020d8  880b                 mov byte ptr [ebx], cl
// 004020da  43                   inc ebx
// 004020db  47                   inc edi
// 004020dc  83e801               sub eax, 1
// 004020df  75f5                 jne 0x4020d6
// 004020e1  8b16                 mov edx, dword ptr [esi]
// 004020e3  803a00               cmp byte ptr [edx], 0
// 004020e6  75b0                 jne 0x402098
// 004020e8  8b06                 mov eax, dword ptr [esi]
// 004020ea  803800               cmp byte ptr [eax], 0
// 004020ed  746f                 je 0x40215e
// 004020ef  c60300               mov byte ptr [ebx], 0
// 004020f2  8b0e                 mov ecx, dword ptr [esi]
// 004020f4  51                   push ecx
// 004020f5  ffd5                 call ebp
// 004020f7  5f                   pop edi
// 004020f8  5d                   pop ebp
// 004020f9  8906                 mov dword ptr [esi], eax
// 004020fb  5b                   pop ebx
// 004020fc  33c0                 xor eax, eax
// 004020fe  5e                   pop esi
// 004020ff  c20400               ret 4
// 00402102  8b3e                 mov edi, dword ptr [esi]
// 00402104  0fbe07               movsx eax, byte ptr [edi]
// 00402107  83c0f7               add eax, -9
// 0040210a  83f817               cmp eax, 0x17
// 0040210d  770e                 ja 0x40211d
// 0040210f  0fb69074214000       movzx edx, byte ptr [eax + 0x402174]
// 00402116  ff24956c214000       jmp dword ptr [edx*4 + 0x40216c]
// 0040211d  57                   push edi
// 0040211e  ffd5                 call ebp
// 00402120  8b542414             mov edx, dword ptr [esp + 0x14]
// 00402124  8906                 mov dword ptr [esi], eax
// 00402126  2bc7                 sub eax, edi
// 00402128  8d4c1801             lea ecx, [eax + ebx + 1]
// 0040212c  81c200100000         add edx, 0x1000
// 00402132  3bca                 cmp ecx, edx
// 00402134  7328                 jae 0x40215e
// 00402136  85c0                 test eax, eax
// 00402138  7e11                 jle 0x40214b
// 0040213a  8d9b00000000         lea ebx, [ebx]
// 00402140  8a0f                 mov cl, byte ptr [edi]
// 00402142  880b                 mov byte ptr [ebx], cl
// 00402144  43                   inc ebx
// 00402145  47                   inc edi
// 00402146  83e801               sub eax, 1
// 00402149  75f5                 jne 0x402140
// 0040214b  8b16                 mov edx, dword ptr [esi]
// 0040214d  803a00               cmp byte ptr [edx], 0
// 00402150  75b0                 jne 0x402102
// 00402152  5f                   pop edi
// 00402153  5d                   pop ebp
// 00402154  c60300               mov byte ptr [ebx], 0
// 00402157  5b                   pop ebx
// 00402158  33c0                 xor eax, eax
// 0040215a  5e                   pop esi
// 0040215b  c20400               ret 4
// 0040215e  5f                   pop edi
// 0040215f  5d                   pop ebp
// 00402160  5b                   pop ebx
// 00402161  b809000280           mov eax, 0x80020009
// 00402166  5e                   pop esi
// 00402167  c20400               ret 4
// 0040216a  8bff                 mov edi, edi
// 0040216c  52                   push edx
// 0040216d  214000               and dword ptr [eax], eax
// 00402170  1d21400000           sbb eax, 0x4021
// 00402175  0001                 add byte ptr [ecx], al
// 00402177  0100                 add dword ptr [eax], eax
// 00402179  0101                 add dword ptr [ecx], eax
// 0040217b  0101                 add dword ptr [ecx], eax
// 0040217d  0101                 add dword ptr [ecx], eax
// 0040217f  0101                 add dword ptr [ecx], eax
// 00402181  0101                 add dword ptr [ecx], eax
// 00402183  0101                 add dword ptr [ecx], eax
// 00402185  0101                 add dword ptr [ecx], eax
// 00402187  0101                 add dword ptr [ecx], eax
// 00402189  0101                 add dword ptr [ecx], eax
// library atl-9.0-rtm/roc_atl_static_registry_wide_dc589bf9570d98db.cpp (function ?NextToken@CRegParser@ATL@@IAEJPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_atl_static_registry_wide_dc589bf9570d98db.cpp

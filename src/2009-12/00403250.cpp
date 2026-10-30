// roc 2009-12 00403250  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 300 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00403250
//
// 00403250  56                   push esi
// 00403251  8bf1                 mov esi, ecx
// 00403253  e898ffffff           call 0x4031f0
// 00403258  8b0e                 mov ecx, dword ptr [esi]
// 0040325a  8a01                 mov al, byte ptr [ecx]
// 0040325c  84c0                 test al, al
// 0040325e  7509                 jne 0x403269
// 00403260  b809000280           mov eax, 0x80020009
// 00403265  5e                   pop esi
// 00403266  c20400               ret 4
// 00403269  53                   push ebx
// 0040326a  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0040326e  55                   push ebp
// 0040326f  8b2dd4cb9800         mov ebp, dword ptr [0x98cbd4]
// 00403275  57                   push edi
// 00403276  895c2414             mov dword ptr [esp + 0x14], ebx
// 0040327a  3c27                 cmp al, 0x27
// 0040327c  7574                 jne 0x4032f2
// 0040327e  51                   push ecx
// 0040327f  ffd5                 call ebp
// 00403281  8906                 mov dword ptr [esi], eax
// 00403283  803800               cmp byte ptr [eax], 0
// 00403286  7450                 je 0x4032d8
// 00403288  8b06                 mov eax, dword ptr [esi]
// 0040328a  803827               cmp byte ptr [eax], 0x27
// 0040328d  7508                 jne 0x403297
// 0040328f  50                   push eax
// 00403290  ffd5                 call ebp
// 00403292  803827               cmp byte ptr [eax], 0x27
// 00403295  7541                 jne 0x4032d8
// 00403297  8b06                 mov eax, dword ptr [esi]
// 00403299  803827               cmp byte ptr [eax], 0x27
// 0040329c  7505                 jne 0x4032a3
// 0040329e  50                   push eax
// 0040329f  ffd5                 call ebp
// 004032a1  8906                 mov dword ptr [esi], eax
// 004032a3  8b3e                 mov edi, dword ptr [esi]
// 004032a5  57                   push edi
// 004032a6  ffd5                 call ebp
// 004032a8  8b542414             mov edx, dword ptr [esp + 0x14]
// 004032ac  8906                 mov dword ptr [esi], eax
// 004032ae  2bc7                 sub eax, edi
// 004032b0  8d4c1801             lea ecx, [eax + ebx + 1]
// 004032b4  81c200100000         add edx, 0x1000
// 004032ba  3bca                 cmp ecx, edx
// 004032bc  0f838c000000         jae 0x40334e
// 004032c2  85c0                 test eax, eax
// 004032c4  7e0b                 jle 0x4032d1
// 004032c6  8a0f                 mov cl, byte ptr [edi]
// 004032c8  880b                 mov byte ptr [ebx], cl
// 004032ca  43                   inc ebx
// 004032cb  47                   inc edi
// 004032cc  83e801               sub eax, 1
// 004032cf  75f5                 jne 0x4032c6
// 004032d1  8b16                 mov edx, dword ptr [esi]
// 004032d3  803a00               cmp byte ptr [edx], 0
// 004032d6  75b0                 jne 0x403288
// 004032d8  8b06                 mov eax, dword ptr [esi]
// 004032da  803800               cmp byte ptr [eax], 0
// 004032dd  746f                 je 0x40334e
// 004032df  c60300               mov byte ptr [ebx], 0
// 004032e2  8b0e                 mov ecx, dword ptr [esi]
// 004032e4  51                   push ecx
// 004032e5  ffd5                 call ebp
// 004032e7  5f                   pop edi
// 004032e8  5d                   pop ebp
// 004032e9  8906                 mov dword ptr [esi], eax
// 004032eb  5b                   pop ebx
// 004032ec  33c0                 xor eax, eax
// 004032ee  5e                   pop esi
// 004032ef  c20400               ret 4
// 004032f2  8b3e                 mov edi, dword ptr [esi]
// 004032f4  0fbe07               movsx eax, byte ptr [edi]
// 004032f7  83c0f7               add eax, -9
// 004032fa  83f817               cmp eax, 0x17
// 004032fd  770e                 ja 0x40330d
// 004032ff  0fb69064334000       movzx edx, byte ptr [eax + 0x403364]
// 00403306  ff24955c334000       jmp dword ptr [edx*4 + 0x40335c]
// 0040330d  57                   push edi
// 0040330e  ffd5                 call ebp
// 00403310  8b542414             mov edx, dword ptr [esp + 0x14]
// 00403314  8906                 mov dword ptr [esi], eax
// 00403316  2bc7                 sub eax, edi
// 00403318  8d4c1801             lea ecx, [eax + ebx + 1]
// 0040331c  81c200100000         add edx, 0x1000
// 00403322  3bca                 cmp ecx, edx
// 00403324  7328                 jae 0x40334e
// 00403326  85c0                 test eax, eax
// 00403328  7e11                 jle 0x40333b
// 0040332a  8d9b00000000         lea ebx, [ebx]
// 00403330  8a0f                 mov cl, byte ptr [edi]
// 00403332  880b                 mov byte ptr [ebx], cl
// 00403334  43                   inc ebx
// 00403335  47                   inc edi
// 00403336  83e801               sub eax, 1
// 00403339  75f5                 jne 0x403330
// 0040333b  8b16                 mov edx, dword ptr [esi]
// 0040333d  803a00               cmp byte ptr [edx], 0
// 00403340  75b0                 jne 0x4032f2
// 00403342  5f                   pop edi
// 00403343  5d                   pop ebp
// 00403344  c60300               mov byte ptr [ebx], 0
// 00403347  5b                   pop ebx
// 00403348  33c0                 xor eax, eax
// 0040334a  5e                   pop esi
// 0040334b  c20400               ret 4
// 0040334e  5f                   pop edi
// 0040334f  5d                   pop ebp
// 00403350  5b                   pop ebx
// 00403351  b809000280           mov eax, 0x80020009
// 00403356  5e                   pop esi
// 00403357  c20400               ret 4
// 0040335a  8bff                 mov edi, edi
// 0040335c  42                   inc edx
// 0040335d  334000               xor eax, dword ptr [eax]
// 00403360  0d33400000           or eax, 0x4033
// 00403365  0001                 add byte ptr [ecx], al
// 00403367  0100                 add dword ptr [eax], eax
// 00403369  0101                 add dword ptr [ecx], eax
// 0040336b  0101                 add dword ptr [ecx], eax
// 0040336d  0101                 add dword ptr [ecx], eax
// 0040336f  0101                 add dword ptr [ecx], eax
// 00403371  0101                 add dword ptr [ecx], eax
// 00403373  0101                 add dword ptr [ecx], eax
// 00403375  0101                 add dword ptr [ecx], eax
// 00403377  0101                 add dword ptr [ecx], eax
// 00403379  0101                 add dword ptr [ecx], eax
// copied from an identical function in another client (function ?NextToken@CRegParser@ATL@@IAEJPAD@Z)

// from server: 100% by colin
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lang: cpp
// roc-lib: atl-8.0 atl.cpp
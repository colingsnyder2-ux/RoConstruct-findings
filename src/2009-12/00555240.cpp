// roc 2009-12 00555240  unit: RBX::Network::ClientReplicator  size: 364 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00555240
//
// 00555240  51                   push ecx
// 00555241  53                   push ebx
// 00555242  55                   push ebp
// 00555243  56                   push esi
// 00555244  57                   push edi
// 00555245  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00555249  8d44241c             lea eax, [esp + 0x1c]
// 0055524d  8be9                 mov ebp, ecx
// 0055524f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00555253  50                   push eax
// 00555254  57                   push edi
// 00555255  51                   push ecx
// 00555256  8bcd                 mov ecx, ebp
// 00555258  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0055525c  e8afe2ffff           call 0x553510
// 00555261  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00555265  84c0                 test al, al
// 00555267  7401                 je 0x55526a
// 00555269  46                   inc esi
// 0055526a  8b9cb710010000       mov ebx, dword ptr [edi + esi*4 + 0x110]
// 00555271  803b00               cmp byte ptr [ebx], 0
// 00555274  0f859c000000         jne 0x555316
// 0055527a  3b7704               cmp esi, dword ptr [edi + 4]
// 0055527d  7d06                 jge 0x555285
// 0055527f  8b44b708             mov eax, dword ptr [edi + esi*4 + 8]
// 00555283  eb04                 jmp 0x555289
// 00555285  8b44b704             mov eax, dword ptr [edi + esi*4 + 4]
// 00555289  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0055528d  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00555291  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00555295  52                   push edx
// 00555296  55                   push ebp
// 00555297  50                   push eax
// 00555298  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0055529c  50                   push eax
// 0055529d  53                   push ebx
// 0055529e  51                   push ecx
// 0055529f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005552a3  e898ffffff           call 0x555240
// 005552a8  84c0                 test al, al
// 005552aa  750a                 jne 0x5552b6
// 005552ac  5f                   pop edi
// 005552ad  5e                   pop esi
// 005552ae  5d                   pop ebp
// 005552af  32c0                 xor al, al
// 005552b1  5b                   pop ebx
// 005552b2  59                   pop ecx
// 005552b3  c21800               ret 0x18
// 005552b6  3b7704               cmp esi, dword ptr [edi + 4]
// 005552b9  7d06                 jge 0x5552c1
// 005552bb  8b44b708             mov eax, dword ptr [edi + esi*4 + 8]
// 005552bf  eb04                 jmp 0x5552c5
// 005552c1  8b44b704             mov eax, dword ptr [edi + esi*4 + 4]
// 005552c5  837d0803             cmp dword ptr [ebp + 8], 3
// 005552c9  751f                 jne 0x5552ea
// 005552cb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005552cf  3bf1                 cmp esi, ecx
// 005552d1  7417                 je 0x5552ea
// 005552d3  8b5500               mov edx, dword ptr [ebp]
// 005552d6  c7450800000000       mov dword ptr [ebp + 8], 0
// 005552dd  89548f08             mov dword ptr [edi + ecx*4 + 8], edx
// 005552e1  3b7704               cmp esi, dword ptr [edi + 4]
// 005552e4  7d2a                 jge 0x555310
// 005552e6  8b44b708             mov eax, dword ptr [edi + esi*4 + 8]
// 005552ea  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005552ee  803900               cmp byte ptr [ecx], 0
// 005552f1  7413                 je 0x555306
// 005552f3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005552f7  55                   push ebp
// 005552f8  50                   push eax
// 005552f9  57                   push edi
// 005552fa  56                   push esi
// 005552fb  e840f2ffff           call 0x554540
// 00555300  8b542420             mov edx, dword ptr [esp + 0x20]
// 00555304  8802                 mov byte ptr [edx], al
// 00555306  5f                   pop edi
// 00555307  5e                   pop esi
// 00555308  5d                   pop ebp
// 00555309  b001                 mov al, 1
// 0055530b  5b                   pop ebx
// 0055530c  59                   pop ecx
// 0055530d  c21800               ret 0x18
// 00555310  8b44b704             mov eax, dword ptr [edi + esi*4 + 4]
// 00555314  ebd4                 jmp 0x5552ea
// 00555316  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0055531a  8d44241c             lea eax, [esp + 0x1c]
// 0055531e  50                   push eax
// 0055531f  53                   push ebx
// 00555320  51                   push ecx
// 00555321  8bcd                 mov ecx, ebp
// 00555323  e8e8e1ffff           call 0x553510
// 00555328  84c0                 test al, al
// 0055532a  7480                 je 0x5552ac
// 0055532c  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00555330  8b94ab88000000       mov edx, dword ptr [ebx + ebp*4 + 0x88]
// 00555337  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0055533b  8910                 mov dword ptr [eax], edx
// 0055533d  8b8cb710010000       mov ecx, dword ptr [edi + esi*4 + 0x110]
// 00555344  51                   push ecx
// 00555345  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00555349  55                   push ebp
// 0055534a  e841e1ffff           call 0x553490
// 0055534f  85ed                 test ebp, ebp
// 00555351  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00555355  7527                 jne 0x55537e
// 00555357  85f6                 test esi, esi
// 00555359  7e0e                 jle 0x555369
// 0055535b  8b94b710010000       mov edx, dword ptr [edi + esi*4 + 0x110]
// 00555362  8b4208               mov eax, dword ptr [edx + 8]
// 00555365  8944b704             mov dword ptr [edi + esi*4 + 4], eax
// 00555369  7513                 jne 0x55537e
// 0055536b  c7450803000000       mov dword ptr [ebp + 8], 3
// 00555372  8b8f10010000         mov ecx, dword ptr [edi + 0x110]
// 00555378  8b5108               mov edx, dword ptr [ecx + 8]
// 0055537b  895500               mov dword ptr [ebp], edx
// 0055537e  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 00555385  83780410             cmp dword ptr [eax + 4], 0x10
// 00555389  7d10                 jge 0x55539b
// 0055538b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055538f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00555393  c60101               mov byte ptr [ecx], 1
// 00555396  e958ffffff           jmp 0x5552f3
// 0055539b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0055539f  5f                   pop edi
// 005553a0  5e                   pop esi
// 005553a1  5d                   pop ebp
// 005553a2  c60200               mov byte ptr [edx], 0
// 005553a5  b001                 mov al, 1
// 005553a7  5b                   pop ebx
// 005553a8  59                   pop ecx
// 005553a9  c21800               ret 0x18
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?FindDeleteRebalance@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAE_NIPAU?$Page@IPAUInternalPacket@@$0CA@@2@PA_NIPAUReturnAction@12@AAPAUInternalPacket@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp

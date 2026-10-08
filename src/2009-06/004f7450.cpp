// roc 2009-06 004f7450  unit: RBX::Network::ClientReplicator  size: 364 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f7450
//
// 004f7450  51                   push ecx
// 004f7451  53                   push ebx
// 004f7452  55                   push ebp
// 004f7453  56                   push esi
// 004f7454  57                   push edi
// 004f7455  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004f7459  8d44241c             lea eax, [esp + 0x1c]
// 004f745d  8be9                 mov ebp, ecx
// 004f745f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004f7463  50                   push eax
// 004f7464  57                   push edi
// 004f7465  51                   push ecx
// 004f7466  8bcd                 mov ecx, ebp
// 004f7468  896c241c             mov dword ptr [esp + 0x1c], ebp
// 004f746c  e81fe1ffff           call 0x4f5590
// 004f7471  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004f7475  84c0                 test al, al
// 004f7477  7401                 je 0x4f747a
// 004f7479  46                   inc esi
// 004f747a  8b9cb710010000       mov ebx, dword ptr [edi + esi*4 + 0x110]
// 004f7481  803b00               cmp byte ptr [ebx], 0
// 004f7484  0f859c000000         jne 0x4f7526
// 004f748a  3b7704               cmp esi, dword ptr [edi + 4]
// 004f748d  7d06                 jge 0x4f7495
// 004f748f  8b44b708             mov eax, dword ptr [edi + esi*4 + 8]
// 004f7493  eb04                 jmp 0x4f7499
// 004f7495  8b44b704             mov eax, dword ptr [edi + esi*4 + 4]
// 004f7499  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004f749d  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 004f74a1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004f74a5  52                   push edx
// 004f74a6  55                   push ebp
// 004f74a7  50                   push eax
// 004f74a8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004f74ac  50                   push eax
// 004f74ad  53                   push ebx
// 004f74ae  51                   push ecx
// 004f74af  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004f74b3  e898ffffff           call 0x4f7450
// 004f74b8  84c0                 test al, al
// 004f74ba  750a                 jne 0x4f74c6
// 004f74bc  5f                   pop edi
// 004f74bd  5e                   pop esi
// 004f74be  5d                   pop ebp
// 004f74bf  32c0                 xor al, al
// 004f74c1  5b                   pop ebx
// 004f74c2  59                   pop ecx
// 004f74c3  c21800               ret 0x18
// 004f74c6  3b7704               cmp esi, dword ptr [edi + 4]
// 004f74c9  7d06                 jge 0x4f74d1
// 004f74cb  8b44b708             mov eax, dword ptr [edi + esi*4 + 8]
// 004f74cf  eb04                 jmp 0x4f74d5
// 004f74d1  8b44b704             mov eax, dword ptr [edi + esi*4 + 4]
// 004f74d5  837d0803             cmp dword ptr [ebp + 8], 3
// 004f74d9  751f                 jne 0x4f74fa
// 004f74db  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004f74df  3bf1                 cmp esi, ecx
// 004f74e1  7417                 je 0x4f74fa
// 004f74e3  8b5500               mov edx, dword ptr [ebp]
// 004f74e6  c7450800000000       mov dword ptr [ebp + 8], 0
// 004f74ed  89548f08             mov dword ptr [edi + ecx*4 + 8], edx
// 004f74f1  3b7704               cmp esi, dword ptr [edi + 4]
// 004f74f4  7d2a                 jge 0x4f7520
// 004f74f6  8b44b708             mov eax, dword ptr [edi + esi*4 + 8]
// 004f74fa  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004f74fe  803900               cmp byte ptr [ecx], 0
// 004f7501  7413                 je 0x4f7516
// 004f7503  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004f7507  55                   push ebp
// 004f7508  50                   push eax
// 004f7509  57                   push edi
// 004f750a  56                   push esi
// 004f750b  e840f2ffff           call 0x4f6750
// 004f7510  8b542420             mov edx, dword ptr [esp + 0x20]
// 004f7514  8802                 mov byte ptr [edx], al
// 004f7516  5f                   pop edi
// 004f7517  5e                   pop esi
// 004f7518  5d                   pop ebp
// 004f7519  b001                 mov al, 1
// 004f751b  5b                   pop ebx
// 004f751c  59                   pop ecx
// 004f751d  c21800               ret 0x18
// 004f7520  8b44b704             mov eax, dword ptr [edi + esi*4 + 4]
// 004f7524  ebd4                 jmp 0x4f74fa
// 004f7526  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004f752a  8d44241c             lea eax, [esp + 0x1c]
// 004f752e  50                   push eax
// 004f752f  53                   push ebx
// 004f7530  51                   push ecx
// 004f7531  8bcd                 mov ecx, ebp
// 004f7533  e858e0ffff           call 0x4f5590
// 004f7538  84c0                 test al, al
// 004f753a  7480                 je 0x4f74bc
// 004f753c  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004f7540  8b94ab88000000       mov edx, dword ptr [ebx + ebp*4 + 0x88]
// 004f7547  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004f754b  8910                 mov dword ptr [eax], edx
// 004f754d  8b8cb710010000       mov ecx, dword ptr [edi + esi*4 + 0x110]
// 004f7554  51                   push ecx
// 004f7555  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004f7559  55                   push ebp
// 004f755a  e8b1dfffff           call 0x4f5510
// 004f755f  85ed                 test ebp, ebp
// 004f7561  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 004f7565  7527                 jne 0x4f758e
// 004f7567  85f6                 test esi, esi
// 004f7569  7e0e                 jle 0x4f7579
// 004f756b  8b94b710010000       mov edx, dword ptr [edi + esi*4 + 0x110]
// 004f7572  8b4208               mov eax, dword ptr [edx + 8]
// 004f7575  8944b704             mov dword ptr [edi + esi*4 + 4], eax
// 004f7579  7513                 jne 0x4f758e
// 004f757b  c7450803000000       mov dword ptr [ebp + 8], 3
// 004f7582  8b8f10010000         mov ecx, dword ptr [edi + 0x110]
// 004f7588  8b5108               mov edx, dword ptr [ecx + 8]
// 004f758b  895500               mov dword ptr [ebp], edx
// 004f758e  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004f7595  83780410             cmp dword ptr [eax + 4], 0x10
// 004f7599  7d10                 jge 0x4f75ab
// 004f759b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004f759f  8b442424             mov eax, dword ptr [esp + 0x24]
// 004f75a3  c60101               mov byte ptr [ecx], 1
// 004f75a6  e958ffffff           jmp 0x4f7503
// 004f75ab  8b542420             mov edx, dword ptr [esp + 0x20]
// 004f75af  5f                   pop edi
// 004f75b0  5e                   pop esi
// 004f75b1  5d                   pop ebp
// 004f75b2  c60200               mov byte ptr [edx], 0
// 004f75b5  b001                 mov al, 1
// 004f75b7  5b                   pop ebx
// 004f75b8  59                   pop ecx
// 004f75b9  c21800               ret 0x18
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?FindDeleteRebalance@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAE_NIPAU?$Page@IPAUInternalPacket@@$0CA@@2@PA_NIPAUReturnAction@12@AAPAUInternalPacket@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp

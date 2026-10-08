// roc 2010-06 00503ca0  unit: RBX::Network::ClientReplicator  size: 364 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00503ca0
//
// 00503ca0  51                   push ecx
// 00503ca1  53                   push ebx
// 00503ca2  55                   push ebp
// 00503ca3  56                   push esi
// 00503ca4  57                   push edi
// 00503ca5  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00503ca9  8d44241c             lea eax, [esp + 0x1c]
// 00503cad  8be9                 mov ebp, ecx
// 00503caf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00503cb3  50                   push eax
// 00503cb4  57                   push edi
// 00503cb5  51                   push ecx
// 00503cb6  8bcd                 mov ecx, ebp
// 00503cb8  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00503cbc  e8efe0ffff           call 0x501db0
// 00503cc1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00503cc5  84c0                 test al, al
// 00503cc7  7401                 je 0x503cca
// 00503cc9  46                   inc esi
// 00503cca  8b9cb710010000       mov ebx, dword ptr [edi + esi*4 + 0x110]
// 00503cd1  803b00               cmp byte ptr [ebx], 0
// 00503cd4  0f859c000000         jne 0x503d76
// 00503cda  3b7704               cmp esi, dword ptr [edi + 4]
// 00503cdd  7d06                 jge 0x503ce5
// 00503cdf  8b44b708             mov eax, dword ptr [edi + esi*4 + 8]
// 00503ce3  eb04                 jmp 0x503ce9
// 00503ce5  8b44b704             mov eax, dword ptr [edi + esi*4 + 4]
// 00503ce9  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00503ced  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00503cf1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00503cf5  52                   push edx
// 00503cf6  55                   push ebp
// 00503cf7  50                   push eax
// 00503cf8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00503cfc  50                   push eax
// 00503cfd  53                   push ebx
// 00503cfe  51                   push ecx
// 00503cff  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00503d03  e898ffffff           call 0x503ca0
// 00503d08  84c0                 test al, al
// 00503d0a  750a                 jne 0x503d16
// 00503d0c  5f                   pop edi
// 00503d0d  5e                   pop esi
// 00503d0e  5d                   pop ebp
// 00503d0f  32c0                 xor al, al
// 00503d11  5b                   pop ebx
// 00503d12  59                   pop ecx
// 00503d13  c21800               ret 0x18
// 00503d16  3b7704               cmp esi, dword ptr [edi + 4]
// 00503d19  7d06                 jge 0x503d21
// 00503d1b  8b44b708             mov eax, dword ptr [edi + esi*4 + 8]
// 00503d1f  eb04                 jmp 0x503d25
// 00503d21  8b44b704             mov eax, dword ptr [edi + esi*4 + 4]
// 00503d25  837d0803             cmp dword ptr [ebp + 8], 3
// 00503d29  751f                 jne 0x503d4a
// 00503d2b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00503d2f  3bf1                 cmp esi, ecx
// 00503d31  7417                 je 0x503d4a
// 00503d33  8b5500               mov edx, dword ptr [ebp]
// 00503d36  c7450800000000       mov dword ptr [ebp + 8], 0
// 00503d3d  89548f08             mov dword ptr [edi + ecx*4 + 8], edx
// 00503d41  3b7704               cmp esi, dword ptr [edi + 4]
// 00503d44  7d2a                 jge 0x503d70
// 00503d46  8b44b708             mov eax, dword ptr [edi + esi*4 + 8]
// 00503d4a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00503d4e  803900               cmp byte ptr [ecx], 0
// 00503d51  7413                 je 0x503d66
// 00503d53  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00503d57  55                   push ebp
// 00503d58  50                   push eax
// 00503d59  57                   push edi
// 00503d5a  56                   push esi
// 00503d5b  e830f2ffff           call 0x502f90
// 00503d60  8b542420             mov edx, dword ptr [esp + 0x20]
// 00503d64  8802                 mov byte ptr [edx], al
// 00503d66  5f                   pop edi
// 00503d67  5e                   pop esi
// 00503d68  5d                   pop ebp
// 00503d69  b001                 mov al, 1
// 00503d6b  5b                   pop ebx
// 00503d6c  59                   pop ecx
// 00503d6d  c21800               ret 0x18
// 00503d70  8b44b704             mov eax, dword ptr [edi + esi*4 + 4]
// 00503d74  ebd4                 jmp 0x503d4a
// 00503d76  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00503d7a  8d44241c             lea eax, [esp + 0x1c]
// 00503d7e  50                   push eax
// 00503d7f  53                   push ebx
// 00503d80  51                   push ecx
// 00503d81  8bcd                 mov ecx, ebp
// 00503d83  e828e0ffff           call 0x501db0
// 00503d88  84c0                 test al, al
// 00503d8a  7480                 je 0x503d0c
// 00503d8c  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00503d90  8b94ab88000000       mov edx, dword ptr [ebx + ebp*4 + 0x88]
// 00503d97  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00503d9b  8910                 mov dword ptr [eax], edx
// 00503d9d  8b8cb710010000       mov ecx, dword ptr [edi + esi*4 + 0x110]
// 00503da4  51                   push ecx
// 00503da5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00503da9  55                   push ebp
// 00503daa  e881dfffff           call 0x501d30
// 00503daf  85ed                 test ebp, ebp
// 00503db1  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00503db5  7527                 jne 0x503dde
// 00503db7  85f6                 test esi, esi
// 00503db9  7e0e                 jle 0x503dc9
// 00503dbb  8b94b710010000       mov edx, dword ptr [edi + esi*4 + 0x110]
// 00503dc2  8b4208               mov eax, dword ptr [edx + 8]
// 00503dc5  8944b704             mov dword ptr [edi + esi*4 + 4], eax
// 00503dc9  7513                 jne 0x503dde
// 00503dcb  c7450803000000       mov dword ptr [ebp + 8], 3
// 00503dd2  8b8f10010000         mov ecx, dword ptr [edi + 0x110]
// 00503dd8  8b5108               mov edx, dword ptr [ecx + 8]
// 00503ddb  895500               mov dword ptr [ebp], edx
// 00503dde  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 00503de5  83780410             cmp dword ptr [eax + 4], 0x10
// 00503de9  7d10                 jge 0x503dfb
// 00503deb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00503def  8b442424             mov eax, dword ptr [esp + 0x24]
// 00503df3  c60101               mov byte ptr [ecx], 1
// 00503df6  e958ffffff           jmp 0x503d53
// 00503dfb  8b542420             mov edx, dword ptr [esp + 0x20]
// 00503dff  5f                   pop edi
// 00503e00  5e                   pop esi
// 00503e01  5d                   pop ebp
// 00503e02  c60200               mov byte ptr [edx], 0
// 00503e05  b001                 mov al, 1
// 00503e07  5b                   pop ebx
// 00503e08  59                   pop ecx
// 00503e09  c21800               ret 0x18
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?FindDeleteRebalance@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAE_NIPAU?$Page@IPAUInternalPacket@@$0CA@@2@PA_NIPAUReturnAction@12@AAPAUInternalPacket@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp

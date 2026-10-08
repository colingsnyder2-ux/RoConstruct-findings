// roc 2008-06 004d0fd0  unit: RBX::Network::PhysicsSender  size: 364 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d0fd0
//
// 004d0fd0  51                   push ecx
// 004d0fd1  53                   push ebx
// 004d0fd2  55                   push ebp
// 004d0fd3  56                   push esi
// 004d0fd4  57                   push edi
// 004d0fd5  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004d0fd9  8d44241c             lea eax, [esp + 0x1c]
// 004d0fdd  8be9                 mov ebp, ecx
// 004d0fdf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d0fe3  50                   push eax
// 004d0fe4  57                   push edi
// 004d0fe5  51                   push ecx
// 004d0fe6  8bcd                 mov ecx, ebp
// 004d0fe8  896c241c             mov dword ptr [esp + 0x1c], ebp
// 004d0fec  e88fe2ffff           call 0x4cf280
// 004d0ff1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004d0ff5  84c0                 test al, al
// 004d0ff7  7401                 je 0x4d0ffa
// 004d0ff9  46                   inc esi
// 004d0ffa  8b9cb710010000       mov ebx, dword ptr [edi + esi*4 + 0x110]
// 004d1001  803b00               cmp byte ptr [ebx], 0
// 004d1004  0f859c000000         jne 0x4d10a6
// 004d100a  3b7704               cmp esi, dword ptr [edi + 4]
// 004d100d  7d06                 jge 0x4d1015
// 004d100f  8b44b708             mov eax, dword ptr [edi + esi*4 + 8]
// 004d1013  eb04                 jmp 0x4d1019
// 004d1015  8b44b704             mov eax, dword ptr [edi + esi*4 + 4]
// 004d1019  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004d101d  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 004d1021  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d1025  52                   push edx
// 004d1026  55                   push ebp
// 004d1027  50                   push eax
// 004d1028  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004d102c  50                   push eax
// 004d102d  53                   push ebx
// 004d102e  51                   push ecx
// 004d102f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d1033  e898ffffff           call 0x4d0fd0
// 004d1038  84c0                 test al, al
// 004d103a  750a                 jne 0x4d1046
// 004d103c  5f                   pop edi
// 004d103d  5e                   pop esi
// 004d103e  5d                   pop ebp
// 004d103f  32c0                 xor al, al
// 004d1041  5b                   pop ebx
// 004d1042  59                   pop ecx
// 004d1043  c21800               ret 0x18
// 004d1046  3b7704               cmp esi, dword ptr [edi + 4]
// 004d1049  7d06                 jge 0x4d1051
// 004d104b  8b44b708             mov eax, dword ptr [edi + esi*4 + 8]
// 004d104f  eb04                 jmp 0x4d1055
// 004d1051  8b44b704             mov eax, dword ptr [edi + esi*4 + 4]
// 004d1055  837d0803             cmp dword ptr [ebp + 8], 3
// 004d1059  751f                 jne 0x4d107a
// 004d105b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004d105f  3bf1                 cmp esi, ecx
// 004d1061  7417                 je 0x4d107a
// 004d1063  8b5500               mov edx, dword ptr [ebp]
// 004d1066  c7450800000000       mov dword ptr [ebp + 8], 0
// 004d106d  89548f08             mov dword ptr [edi + ecx*4 + 8], edx
// 004d1071  3b7704               cmp esi, dword ptr [edi + 4]
// 004d1074  7d2a                 jge 0x4d10a0
// 004d1076  8b44b708             mov eax, dword ptr [edi + esi*4 + 8]
// 004d107a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d107e  803900               cmp byte ptr [ecx], 0
// 004d1081  7413                 je 0x4d1096
// 004d1083  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d1087  55                   push ebp
// 004d1088  50                   push eax
// 004d1089  57                   push edi
// 004d108a  56                   push esi
// 004d108b  e840f2ffff           call 0x4d02d0
// 004d1090  8b542420             mov edx, dword ptr [esp + 0x20]
// 004d1094  8802                 mov byte ptr [edx], al
// 004d1096  5f                   pop edi
// 004d1097  5e                   pop esi
// 004d1098  5d                   pop ebp
// 004d1099  b001                 mov al, 1
// 004d109b  5b                   pop ebx
// 004d109c  59                   pop ecx
// 004d109d  c21800               ret 0x18
// 004d10a0  8b44b704             mov eax, dword ptr [edi + esi*4 + 4]
// 004d10a4  ebd4                 jmp 0x4d107a
// 004d10a6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d10aa  8d44241c             lea eax, [esp + 0x1c]
// 004d10ae  50                   push eax
// 004d10af  53                   push ebx
// 004d10b0  51                   push ecx
// 004d10b1  8bcd                 mov ecx, ebp
// 004d10b3  e8c8e1ffff           call 0x4cf280
// 004d10b8  84c0                 test al, al
// 004d10ba  7480                 je 0x4d103c
// 004d10bc  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004d10c0  8b94ab88000000       mov edx, dword ptr [ebx + ebp*4 + 0x88]
// 004d10c7  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004d10cb  8910                 mov dword ptr [eax], edx
// 004d10cd  8b8cb710010000       mov ecx, dword ptr [edi + esi*4 + 0x110]
// 004d10d4  51                   push ecx
// 004d10d5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d10d9  55                   push ebp
// 004d10da  e821e1ffff           call 0x4cf200
// 004d10df  85ed                 test ebp, ebp
// 004d10e1  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 004d10e5  7527                 jne 0x4d110e
// 004d10e7  85f6                 test esi, esi
// 004d10e9  7e0e                 jle 0x4d10f9
// 004d10eb  8b94b710010000       mov edx, dword ptr [edi + esi*4 + 0x110]
// 004d10f2  8b4208               mov eax, dword ptr [edx + 8]
// 004d10f5  8944b704             mov dword ptr [edi + esi*4 + 4], eax
// 004d10f9  7513                 jne 0x4d110e
// 004d10fb  c7450803000000       mov dword ptr [ebp + 8], 3
// 004d1102  8b8f10010000         mov ecx, dword ptr [edi + 0x110]
// 004d1108  8b5108               mov edx, dword ptr [ecx + 8]
// 004d110b  895500               mov dword ptr [ebp], edx
// 004d110e  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004d1115  83780410             cmp dword ptr [eax + 4], 0x10
// 004d1119  7d10                 jge 0x4d112b
// 004d111b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d111f  8b442424             mov eax, dword ptr [esp + 0x24]
// 004d1123  c60101               mov byte ptr [ecx], 1
// 004d1126  e958ffffff           jmp 0x4d1083
// 004d112b  8b542420             mov edx, dword ptr [esp + 0x20]
// 004d112f  5f                   pop edi
// 004d1130  5e                   pop esi
// 004d1131  5d                   pop ebp
// 004d1132  c60200               mov byte ptr [edx], 0
// 004d1135  b001                 mov al, 1
// 004d1137  5b                   pop ebx
// 004d1138  59                   pop ecx
// 004d1139  c21800               ret 0x18
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?FindDeleteRebalance@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAE_NIPAU?$Page@IPAUInternalPacket@@$0CA@@2@PA_NIPAUReturnAction@12@AAPAUInternalPacket@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp

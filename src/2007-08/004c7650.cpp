// roc 2007-08 004c7650  unit: RakPeer  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c7650
//
// 004c7650  53                   push ebx
// 004c7651  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004c7655  56                   push esi
// 004c7656  8bf1                 mov esi, ecx
// 004c7658  8a4b14               mov cl, byte ptr [ebx + 0x14]
// 004c765b  80f920               cmp cl, 0x20
// 004c765e  0f8385000000         jae 0x4c76e9
// 004c7664  0fb6c1               movzx eax, cl
// 004c7667  57                   push edi
// 004c7668  8b7e04               mov edi, dword ptr [esi + 4]
// 004c766b  3bc7                 cmp eax, edi
// 004c766d  7324                 jae 0x4c7693
// 004c766f  8b16                 mov edx, dword ptr [esi]
// 004c7671  833c8200             cmp dword ptr [edx + eax*4], 0
// 004c7675  741c                 je 0x4c7693
// 004c7677  8b0482               mov eax, dword ptr [edx + eax*4]
// 004c767a  833800               cmp dword ptr [eax], 0
// 004c767d  7504                 jne 0x4c7683
// 004c767f  8bc8                 mov ecx, eax
// 004c7681  eb4e                 jmp 0x4c76d1
// 004c7683  0fb6c1               movzx eax, cl
// 004c7686  3bc7                 cmp eax, edi
// 004c7688  7204                 jb 0x4c768e
// 004c768a  33c9                 xor ecx, ecx
// 004c768c  eb43                 jmp 0x4c76d1
// 004c768e  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 004c7691  eb3e                 jmp 0x4c76d1
// 004c7693  6a0c                 push 0xc
// 004c7695  e85c881600           call 0x62fef6
// 004c769a  83c404               add esp, 4
// 004c769d  85c0                 test eax, eax
// 004c769f  7416                 je 0x4c76b7
// 004c76a1  c7400400000000       mov dword ptr [eax + 4], 0
// 004c76a8  c7400800000000       mov dword ptr [eax + 8], 0
// 004c76af  c70000000000         mov dword ptr [eax], 0
// 004c76b5  eb02                 jmp 0x4c76b9
// 004c76b7  33c0                 xor eax, eax
// 004c76b9  0fb64b14             movzx ecx, byte ptr [ebx + 0x14]
// 004c76bd  51                   push ecx
// 004c76be  6a00                 push 0
// 004c76c0  50                   push eax
// 004c76c1  8bce                 mov ecx, esi
// 004c76c3  e858270000           call 0x4c9e20
// 004c76c8  0fb65314             movzx edx, byte ptr [ebx + 0x14]
// 004c76cc  8b06                 mov eax, dword ptr [esi]
// 004c76ce  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 004c76d1  8b4104               mov eax, dword ptr [ecx + 4]
// 004c76d4  85c0                 test eax, eax
// 004c76d6  5f                   pop edi
// 004c76d7  7406                 je 0x4c76df
// 004c76d9  8b5004               mov edx, dword ptr [eax + 4]
// 004c76dc  895108               mov dword ptr [ecx + 8], edx
// 004c76df  8d44240c             lea eax, [esp + 0xc]
// 004c76e3  50                   push eax
// 004c76e4  e837d9ffff           call 0x4c5020
// 004c76e9  5e                   pop esi
// 004c76ea  5b                   pop ebx
// 004c76eb  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?AddToOrderingList@ReliabilityLayer@@AAEXPAUInternalPacket@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp

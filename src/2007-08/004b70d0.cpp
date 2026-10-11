// roc 2007-08 004b70d0  unit: Exposer  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b70d0
//
// 004b70d0  81ec0c010000         sub esp, 0x10c
// 004b70d6  a188518b00           mov eax, dword ptr [0x8b5188]
// 004b70db  33c4                 xor eax, esp
// 004b70dd  89842408010000       mov dword ptr [esp + 0x108], eax
// 004b70e4  8b15c02a8900         mov edx, dword ptr [0x892ac0]
// 004b70ea  53                   push ebx
// 004b70eb  55                   push ebp
// 004b70ec  56                   push esi
// 004b70ed  57                   push edi
// 004b70ee  8bbc2420010000       mov edi, dword ptr [esp + 0x120]
// 004b70f5  52                   push edx
// 004b70f6  8b15bc2a8900         mov edx, dword ptr [0x892abc]
// 004b70fc  8bf1                 mov esi, ecx
// 004b70fe  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b7101  8b01                 mov eax, dword ptr [ecx]
// 004b7103  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 004b7109  52                   push edx
// 004b710a  8d542418             lea edx, [esp + 0x18]
// 004b710e  52                   push edx
// 004b710f  ffd0                 call eax
// 004b7111  807e0800             cmp byte ptr [esi + 8], 0
// 004b7115  8b18                 mov ebx, dword ptr [eax]
// 004b7117  668b6804             mov bp, word ptr [eax + 4]
// 004b711b  753f                 jne 0x4b715c
// 004b711d  0fb794242c010000     movzx edx, word ptr [esp + 0x12c]
// 004b7125  8b842428010000       mov eax, dword ptr [esp + 0x128]
// 004b712c  8d8e0a010000         lea ecx, [esi + 0x10a]
// 004b7132  51                   push ecx
// 004b7133  52                   push edx
// 004b7134  0fb7cd               movzx ecx, bp
// 004b7137  50                   push eax
// 004b7138  51                   push ecx
// 004b7139  53                   push ebx
// 004b713a  e8310e0000           call 0x4b7f70
// 004b713f  8b942438010000       mov edx, dword ptr [esp + 0x138]
// 004b7146  50                   push eax
// 004b7147  0fbe07               movsx eax, byte ptr [edi]
// 004b714a  52                   push edx
// 004b714b  50                   push eax
// 004b714c  8d4e0a               lea ecx, [esi + 0xa]
// 004b714f  51                   push ecx
// 004b7150  68a4e97900           push 0x79e9a4
// 004b7155  8d542440             lea edx, [esp + 0x40]
// 004b7159  52                   push edx
// 004b715a  eb5d                 jmp 0x4b71b9
// 004b715c  8a07                 mov al, byte ptr [edi]
// 004b715e  88442410             mov byte ptr [esp + 0x10], al
// 004b7162  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b7166  51                   push ecx
// 004b7167  e8d4fbffff           call 0x4b6d40
// 004b716c  83c404               add esp, 4
// 004b716f  85c0                 test eax, eax
// 004b7171  750a                 jne 0x4b717d
// 004b7173  8b16                 mov edx, dword ptr [esi]
// 004b7175  8b4248               mov eax, dword ptr [edx + 0x48]
// 004b7178  51                   push ecx
// 004b7179  8bce                 mov ecx, esi
// 004b717b  ffd0                 call eax
// 004b717d  0fb794242c010000     movzx edx, word ptr [esp + 0x12c]
// 004b7185  8d8e0a010000         lea ecx, [esi + 0x10a]
// 004b718b  51                   push ecx
// 004b718c  52                   push edx
// 004b718d  8bf8                 mov edi, eax
// 004b718f  8b842430010000       mov eax, dword ptr [esp + 0x130]
// 004b7196  0fb7cd               movzx ecx, bp
// 004b7199  50                   push eax
// 004b719a  51                   push ecx
// 004b719b  53                   push ebx
// 004b719c  e8cf0d0000           call 0x4b7f70
// 004b71a1  8b942438010000       mov edx, dword ptr [esp + 0x138]
// 004b71a8  50                   push eax
// 004b71a9  52                   push edx
// 004b71aa  57                   push edi
// 004b71ab  8d460a               lea eax, [esi + 0xa]
// 004b71ae  50                   push eax
// 004b71af  6878e97900           push 0x79e978
// 004b71b4  8d4c2440             lea ecx, [esp + 0x40]
// 004b71b8  51                   push ecx
// 004b71b9  ff1568e97700         call dword ptr [0x77e968]
// 004b71bf  8b16                 mov edx, dword ptr [esi]
// 004b71c1  8b5244               mov edx, dword ptr [edx + 0x44]
// 004b71c4  83c42c               add esp, 0x2c
// 004b71c7  8d442418             lea eax, [esp + 0x18]
// 004b71cb  50                   push eax
// 004b71cc  8bce                 mov ecx, esi
// 004b71ce  ffd2                 call edx
// 004b71d0  8b8c2418010000       mov ecx, dword ptr [esp + 0x118]
// 004b71d7  5f                   pop edi
// 004b71d8  5e                   pop esi
// 004b71d9  5d                   pop ebp
// 004b71da  5b                   pop ebx
// 004b71db  33cc                 xor ecx, esp
// 004b71dd  e83c981700           call 0x630a1e
// 004b71e2  81c40c010000         add esp, 0x10c
// 004b71e8  c21000               ret 0x10
// library openrbx-raknet/PacketLogger.cpp (function ?OnDirectSocketSend@PacketLogger@@UAEXPBDIUSystemAddress@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet PacketLogger.cpp

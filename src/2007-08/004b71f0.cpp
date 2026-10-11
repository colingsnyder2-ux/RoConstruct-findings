// roc 2007-08 004b71f0  unit: Exposer  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b71f0
//
// 004b71f0  81ec0c010000         sub esp, 0x10c
// 004b71f6  a188518b00           mov eax, dword ptr [0x8b5188]
// 004b71fb  33c4                 xor eax, esp
// 004b71fd  89842408010000       mov dword ptr [esp + 0x108], eax
// 004b7204  8b15c02a8900         mov edx, dword ptr [0x892ac0]
// 004b720a  53                   push ebx
// 004b720b  55                   push ebp
// 004b720c  56                   push esi
// 004b720d  57                   push edi
// 004b720e  8bbc2420010000       mov edi, dword ptr [esp + 0x120]
// 004b7215  52                   push edx
// 004b7216  8b15bc2a8900         mov edx, dword ptr [0x892abc]
// 004b721c  8bf1                 mov esi, ecx
// 004b721e  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b7221  8b01                 mov eax, dword ptr [ecx]
// 004b7223  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 004b7229  52                   push edx
// 004b722a  8d542418             lea edx, [esp + 0x18]
// 004b722e  52                   push edx
// 004b722f  ffd0                 call eax
// 004b7231  807e0800             cmp byte ptr [esi + 8], 0
// 004b7235  8b18                 mov ebx, dword ptr [eax]
// 004b7237  668b6804             mov bp, word ptr [eax + 4]
// 004b723b  753f                 jne 0x4b727c
// 004b723d  0fb794242c010000     movzx edx, word ptr [esp + 0x12c]
// 004b7245  8b842428010000       mov eax, dword ptr [esp + 0x128]
// 004b724c  8d8e0a010000         lea ecx, [esi + 0x10a]
// 004b7252  51                   push ecx
// 004b7253  52                   push edx
// 004b7254  0fb7cd               movzx ecx, bp
// 004b7257  50                   push eax
// 004b7258  51                   push ecx
// 004b7259  53                   push ebx
// 004b725a  e8110d0000           call 0x4b7f70
// 004b725f  8b942438010000       mov edx, dword ptr [esp + 0x138]
// 004b7266  50                   push eax
// 004b7267  0fbe07               movsx eax, byte ptr [edi]
// 004b726a  52                   push edx
// 004b726b  50                   push eax
// 004b726c  8d4e0a               lea ecx, [esi + 0xa]
// 004b726f  51                   push ecx
// 004b7270  6800ea7900           push 0x79ea00
// 004b7275  8d542440             lea edx, [esp + 0x40]
// 004b7279  52                   push edx
// 004b727a  eb5d                 jmp 0x4b72d9
// 004b727c  8a07                 mov al, byte ptr [edi]
// 004b727e  88442410             mov byte ptr [esp + 0x10], al
// 004b7282  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b7286  51                   push ecx
// 004b7287  e8b4faffff           call 0x4b6d40
// 004b728c  83c404               add esp, 4
// 004b728f  85c0                 test eax, eax
// 004b7291  750a                 jne 0x4b729d
// 004b7293  8b16                 mov edx, dword ptr [esi]
// 004b7295  8b4248               mov eax, dword ptr [edx + 0x48]
// 004b7298  51                   push ecx
// 004b7299  8bce                 mov ecx, esi
// 004b729b  ffd0                 call eax
// 004b729d  0fb794242c010000     movzx edx, word ptr [esp + 0x12c]
// 004b72a5  8d8e0a010000         lea ecx, [esi + 0x10a]
// 004b72ab  51                   push ecx
// 004b72ac  52                   push edx
// 004b72ad  8bf8                 mov edi, eax
// 004b72af  8b842430010000       mov eax, dword ptr [esp + 0x130]
// 004b72b6  0fb7cd               movzx ecx, bp
// 004b72b9  50                   push eax
// 004b72ba  51                   push ecx
// 004b72bb  53                   push ebx
// 004b72bc  e8af0c0000           call 0x4b7f70
// 004b72c1  8b942438010000       mov edx, dword ptr [esp + 0x138]
// 004b72c8  50                   push eax
// 004b72c9  52                   push edx
// 004b72ca  57                   push edi
// 004b72cb  8d460a               lea eax, [esi + 0xa]
// 004b72ce  50                   push eax
// 004b72cf  68d4e97900           push 0x79e9d4
// 004b72d4  8d4c2440             lea ecx, [esp + 0x40]
// 004b72d8  51                   push ecx
// 004b72d9  ff1568e97700         call dword ptr [0x77e968]
// 004b72df  8b16                 mov edx, dword ptr [esi]
// 004b72e1  8b5244               mov edx, dword ptr [edx + 0x44]
// 004b72e4  83c42c               add esp, 0x2c
// 004b72e7  8d442418             lea eax, [esp + 0x18]
// 004b72eb  50                   push eax
// 004b72ec  8bce                 mov ecx, esi
// 004b72ee  ffd2                 call edx
// 004b72f0  8b8c2418010000       mov ecx, dword ptr [esp + 0x118]
// 004b72f7  5f                   pop edi
// 004b72f8  5e                   pop esi
// 004b72f9  5d                   pop ebp
// 004b72fa  5b                   pop ebx
// 004b72fb  33cc                 xor ecx, esp
// 004b72fd  e81c971700           call 0x630a1e
// 004b7302  81c40c010000         add esp, 0x10c
// 004b7308  c21000               ret 0x10
// library openrbx-raknet/PacketLogger.cpp (function ?OnDirectSocketReceive@PacketLogger@@UAEXPBDIUSystemAddress@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet PacketLogger.cpp

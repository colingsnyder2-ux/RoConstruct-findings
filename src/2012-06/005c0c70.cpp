// roc 2012-06 005c0c70  unit: RakNet::RakPeer  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c0c70
//
// 005c0c70  53                   push ebx
// 005c0c71  55                   push ebp
// 005c0c72  56                   push esi
// 005c0c73  8bf1                 mov esi, ecx
// 005c0c75  8b4608               mov eax, dword ptr [esi + 8]
// 005c0c78  57                   push edi
// 005c0c79  394604               cmp dword ptr [esi + 4], eax
// 005c0c7c  7575                 jne 0x5c0cf3
// 005c0c7e  85c0                 test eax, eax
// 005c0c80  7509                 jne 0x5c0c8b
// 005c0c82  c7460810000000       mov dword ptr [esi + 8], 0x10
// 005c0c89  eb05                 jmp 0x5c0c90
// 005c0c8b  03c0                 add eax, eax
// 005c0c8d  894608               mov dword ptr [esi + 8], eax
// 005c0c90  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005c0c94  8b542418             mov edx, dword ptr [esp + 0x18]
// 005c0c98  8b4608               mov eax, dword ptr [esi + 8]
// 005c0c9b  51                   push ecx
// 005c0c9c  52                   push edx
// 005c0c9d  50                   push eax
// 005c0c9e  e84de6ffff           call 0x5bf2f0
// 005c0ca3  83c40c               add esp, 0xc
// 005c0ca6  833e00               cmp dword ptr [esi], 0
// 005c0ca9  8bd8                 mov ebx, eax
// 005c0cab  7444                 je 0x5c0cf1
// 005c0cad  33ff                 xor edi, edi
// 005c0caf  397e04               cmp dword ptr [esi + 4], edi
// 005c0cb2  761a                 jbe 0x5c0cce
// 005c0cb4  8b0e                 mov ecx, dword ptr [esi]
// 005c0cb6  8d04fd00000000       lea eax, [edi*8]
// 005c0cbd  03c8                 add ecx, eax
// 005c0cbf  51                   push ecx
// 005c0cc0  8d0c18               lea ecx, [eax + ebx]
// 005c0cc3  e8a8e1ffff           call 0x5bee70
// 005c0cc8  47                   inc edi
// 005c0cc9  3b7e04               cmp edi, dword ptr [esi + 4]
// 005c0ccc  72e6                 jb 0x5c0cb4
// 005c0cce  8b06                 mov eax, dword ptr [esi]
// 005c0cd0  85c0                 test eax, eax
// 005c0cd2  741d                 je 0x5c0cf1
// 005c0cd4  8b50fc               mov edx, dword ptr [eax - 4]
// 005c0cd7  8d78fc               lea edi, [eax - 4]
// 005c0cda  68e0ed5b00           push 0x5bede0
// 005c0cdf  52                   push edx
// 005c0ce0  6a08                 push 8
// 005c0ce2  50                   push eax
// 005c0ce3  e888253c00           call 0x983270
// 005c0ce8  57                   push edi
// 005c0ce9  e8cc163c00           call 0x9823ba
// 005c0cee  83c404               add esp, 4
// 005c0cf1  891e                 mov dword ptr [esi], ebx
// 005c0cf3  8b4604               mov eax, dword ptr [esi + 4]
// 005c0cf6  8b0e                 mov ecx, dword ptr [esi]
// 005c0cf8  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005c0cfc  8d3cc1               lea edi, [ecx + eax*8]
// 005c0cff  3bfd                 cmp edi, ebp
// 005c0d01  7443                 je 0x5c0d46
// 005c0d03  8b4704               mov eax, dword ptr [edi + 4]
// 005c0d06  85c0                 test eax, eax
// 005c0d08  742b                 je 0x5c0d35
// 005c0d0a  8300ff               add dword ptr [eax], -1
// 005c0d0d  7526                 jne 0x5c0d35
// 005c0d0f  8b1f                 mov ebx, dword ptr [edi]
// 005c0d11  85db                 test ebx, ebx
// 005c0d13  7410                 je 0x5c0d25
// 005c0d15  8bcb                 mov ecx, ebx
// 005c0d17  e8c4860000           call 0x5c93e0
// 005c0d1c  53                   push ebx
// 005c0d1d  e8f2133c00           call 0x982114
// 005c0d22  83c404               add esp, 4
// 005c0d25  8b4704               mov eax, dword ptr [edi + 4]
// 005c0d28  85c0                 test eax, eax
// 005c0d2a  7409                 je 0x5c0d35
// 005c0d2c  50                   push eax
// 005c0d2d  e8e2133c00           call 0x982114
// 005c0d32  83c404               add esp, 4
// 005c0d35  8b5500               mov edx, dword ptr [ebp]
// 005c0d38  8917                 mov dword ptr [edi], edx
// 005c0d3a  8b4504               mov eax, dword ptr [ebp + 4]
// 005c0d3d  894704               mov dword ptr [edi + 4], eax
// 005c0d40  85c0                 test eax, eax
// 005c0d42  7402                 je 0x5c0d46
// 005c0d44  ff00                 inc dword ptr [eax]
// 005c0d46  ff4604               inc dword ptr [esi + 4]
// 005c0d49  5f                   pop edi
// 005c0d4a  5e                   pop esi
// 005c0d4b  5d                   pop ebp
// 005c0d4c  5b                   pop ebx
// 005c0d4d  c20c00               ret 0xc
// library rbx2016-raknet/RakPeer.cpp (function ?Insert@?$List@V?$RakNetSmartPtr@URakNetSocket@RakNet@@@RakNet@@@DataStructures@@QAEXABV?$RakNetSmartPtr@URakNetSocket@RakNet@@@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp

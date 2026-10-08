// roc 2007-08 0049fa50  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049fa50
//
// 0049fa50  53                   push ebx
// 0049fa51  55                   push ebp
// 0049fa52  56                   push esi
// 0049fa53  57                   push edi
// 0049fa54  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0049fa58  c1ff03               sar edi, 3
// 0049fa5b  83ef01               sub edi, 1
// 0049fa5e  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 0049fa63  8bf1                 mov esi, ecx
// 0049fa65  740c                 je 0x49fa73
// 0049fa67  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0049fa6c  c644241800           mov byte ptr [esp + 0x18], 0
// 0049fa71  eb0a                 jmp 0x49fa7d
// 0049fa73  c644241cff           mov byte ptr [esp + 0x1c], 0xff
// 0049fa78  c6442418f0           mov byte ptr [esp + 0x18], 0xf0
// 0049fa7d  85ff                 test edi, edi
// 0049fa7f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0049fa83  7e37                 jle 0x49fabc
// 0049fa85  8b4608               mov eax, dword ptr [esi + 8]
// 0049fa88  8d6801               lea ebp, [eax + 1]
// 0049fa8b  3b2e                 cmp ebp, dword ptr [esi]
// 0049fa8d  7f6f                 jg 0x49fafe
// 0049fa8f  8bc8                 mov ecx, eax
// 0049fa91  83e107               and ecx, 7
// 0049fa94  ba80000000           mov edx, 0x80
// 0049fa99  d3fa                 sar edx, cl
// 0049fa9b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0049fa9e  c1f803               sar eax, 3
// 0049faa1  841408               test byte ptr [eax + ecx], dl
// 0049faa4  896e08               mov dword ptr [esi + 8], ebp
// 0049faa7  0f95c0               setne al
// 0049faaa  84c0                 test al, al
// 0049faac  7459                 je 0x49fb07
// 0049faae  8a54241c             mov dl, byte ptr [esp + 0x1c]
// 0049fab2  88141f               mov byte ptr [edi + ebx], dl
// 0049fab5  83ef01               sub edi, 1
// 0049fab8  85ff                 test edi, edi
// 0049faba  7fc9                 jg 0x49fa85
// 0049fabc  8b4e08               mov ecx, dword ptr [esi + 8]
// 0049fabf  83c101               add ecx, 1
// 0049fac2  3b0e                 cmp ecx, dword ptr [esi]
// 0049fac4  7f38                 jg 0x49fafe
// 0049fac6  8d54241c             lea edx, [esp + 0x1c]
// 0049faca  52                   push edx
// 0049facb  8bce                 mov ecx, esi
// 0049facd  e80efdffff           call 0x49f7e0
// 0049fad2  84c0                 test al, al
// 0049fad4  7428                 je 0x49fafe
// 0049fad6  03fb                 add edi, ebx
// 0049fad8  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 0049fadd  6a01                 push 1
// 0049fadf  8bce                 mov ecx, esi
// 0049fae1  7442                 je 0x49fb25
// 0049fae3  6a04                 push 4
// 0049fae5  57                   push edi
// 0049fae6  e8b5feffff           call 0x49f9a0
// 0049faeb  84c0                 test al, al
// 0049faed  740f                 je 0x49fafe
// 0049faef  8a442418             mov al, byte ptr [esp + 0x18]
// 0049faf3  0807                 or byte ptr [edi], al
// 0049faf5  5f                   pop edi
// 0049faf6  5e                   pop esi
// 0049faf7  5d                   pop ebp
// 0049faf8  b001                 mov al, 1
// 0049fafa  5b                   pop ebx
// 0049fafb  c20c00               ret 0xc
// 0049fafe  5f                   pop edi
// 0049faff  5e                   pop esi
// 0049fb00  5d                   pop ebp
// 0049fb01  32c0                 xor al, al
// 0049fb03  5b                   pop ebx
// 0049fb04  c20c00               ret 0xc
// 0049fb07  6a01                 push 1
// 0049fb09  8d04fd08000000       lea eax, [edi*8 + 8]
// 0049fb10  50                   push eax
// 0049fb11  53                   push ebx
// 0049fb12  8bce                 mov ecx, esi
// 0049fb14  e887feffff           call 0x49f9a0
// 0049fb19  5f                   pop edi
// 0049fb1a  5e                   pop esi
// 0049fb1b  84c0                 test al, al
// 0049fb1d  5d                   pop ebp
// 0049fb1e  0f95c0               setne al
// 0049fb21  5b                   pop ebx
// 0049fb22  c20c00               ret 0xc
// 0049fb25  6a08                 push 8
// 0049fb27  57                   push edi
// 0049fb28  e873feffff           call 0x49f9a0
// 0049fb2d  84c0                 test al, al
// 0049fb2f  74cd                 je 0x49fafe
// 0049fb31  5f                   pop edi
// 0049fb32  5e                   pop esi
// 0049fb33  5d                   pop ebp
// 0049fb34  b001                 mov al, 1
// 0049fb36  5b                   pop ebx
// 0049fb37  c20c00               ret 0xc
// library rbxgs-raknet/BitStream.cpp (function ?ReadCompressed@BitStream@RakNet@@AAE_NPAEH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp

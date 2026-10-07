// roc 2007-08 0050eb70  unit: G3D::TextInput::WrongSymbol  size: 343 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050eb70
//
// 0050eb70  8b542404             mov edx, dword ptr [esp + 4]
// 0050eb74  83ec08               sub esp, 8
// 0050eb77  53                   push ebx
// 0050eb78  8bd9                 mov ebx, ecx
// 0050eb7a  8b4308               mov eax, dword ptr [ebx + 8]
// 0050eb7d  b95d74d105           mov ecx, 0x5d1745d
// 0050eb82  2bc8                 sub ecx, eax
// 0050eb84  3bca                 cmp ecx, edx
// 0050eb86  7305                 jae 0x50eb8d
// 0050eb88  e8a365f9ff           call 0x4a5130
// 0050eb8d  8bc8                 mov ecx, eax
// 0050eb8f  d1e9                 shr ecx, 1
// 0050eb91  83f908               cmp ecx, 8
// 0050eb94  7305                 jae 0x50eb9b
// 0050eb96  b908000000           mov ecx, 8
// 0050eb9b  3bd1                 cmp edx, ecx
// 0050eb9d  55                   push ebp
// 0050eb9e  56                   push esi
// 0050eb9f  57                   push edi
// 0050eba0  7311                 jae 0x50ebb3
// 0050eba2  be5d74d105           mov esi, 0x5d1745d
// 0050eba7  2bf1                 sub esi, ecx
// 0050eba9  3bc6                 cmp eax, esi
// 0050ebab  7706                 ja 0x50ebb3
// 0050ebad  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0050ebb1  8bd1                 mov edx, ecx
// 0050ebb3  8b6b0c               mov ebp, dword ptr [ebx + 0xc]
// 0050ebb6  03c2                 add eax, edx
// 0050ebb8  6a00                 push 0
// 0050ebba  50                   push eax
// 0050ebbb  e8a0110a00           call 0x5afd60
// 0050ebc0  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0050ebc3  89442418             mov dword ptr [esp + 0x18], eax
// 0050ebc7  8d34ad00000000       lea esi, [ebp*4]
// 0050ebce  8d3c06               lea edi, [esi + eax]
// 0050ebd1  8b4308               mov eax, dword ptr [ebx + 8]
// 0050ebd4  03c0                 add eax, eax
// 0050ebd6  03c0                 add eax, eax
// 0050ebd8  8d140e               lea edx, [esi + ecx]
// 0050ebdb  2bc2                 sub eax, edx
// 0050ebdd  03c1                 add eax, ecx
// 0050ebdf  83c408               add esp, 8
// 0050ebe2  c1f802               sar eax, 2
// 0050ebe5  8d048500000000       lea eax, [eax*4]
// 0050ebec  8d0c38               lea ecx, [eax + edi]
// 0050ebef  894c2414             mov dword ptr [esp + 0x14], ecx
// 0050ebf3  7415                 je 0x50ec0a
// 0050ebf5  50                   push eax
// 0050ebf6  52                   push edx
// 0050ebf7  50                   push eax
// 0050ebf8  57                   push edi
// 0050ebf9  8b3d48e77700         mov edi, dword ptr [0x77e748]
// 0050ebff  ffd7                 call edi
// 0050ec01  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0050ec05  83c410               add esp, 0x10
// 0050ec08  eb06                 jmp 0x50ec10
// 0050ec0a  8b3d48e77700         mov edi, dword ptr [0x77e748]
// 0050ec10  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050ec14  3be8                 cmp ebp, eax
// 0050ec16  7735                 ja 0x50ec4d
// 0050ec18  8b4304               mov eax, dword ptr [ebx + 4]
// 0050ec1b  c1fe02               sar esi, 2
// 0050ec1e  8d14b500000000       lea edx, [esi*4]
// 0050ec25  8d340a               lea esi, [edx + ecx]
// 0050ec28  7409                 je 0x50ec33
// 0050ec2a  52                   push edx
// 0050ec2b  50                   push eax
// 0050ec2c  52                   push edx
// 0050ec2d  51                   push ecx
// 0050ec2e  ffd7                 call edi
// 0050ec30  83c410               add esp, 0x10
// 0050ec33  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050ec37  2bcd                 sub ecx, ebp
// 0050ec39  7406                 je 0x50ec41
// 0050ec3b  33c0                 xor eax, eax
// 0050ec3d  8bfe                 mov edi, esi
// 0050ec3f  f3ab                 rep stosd dword ptr es:[edi], eax
// 0050ec41  85ed                 test ebp, ebp
// 0050ec43  765a                 jbe 0x50ec9f
// 0050ec45  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0050ec49  8bcd                 mov ecx, ebp
// 0050ec4b  eb4e                 jmp 0x50ec9b
// 0050ec4d  8b5304               mov edx, dword ptr [ebx + 4]
// 0050ec50  8d2c8500000000       lea ebp, [eax*4]
// 0050ec57  8bc5                 mov eax, ebp
// 0050ec59  c1f802               sar eax, 2
// 0050ec5c  740d                 je 0x50ec6b
// 0050ec5e  03c0                 add eax, eax
// 0050ec60  03c0                 add eax, eax
// 0050ec62  50                   push eax
// 0050ec63  52                   push edx
// 0050ec64  50                   push eax
// 0050ec65  51                   push ecx
// 0050ec66  ffd7                 call edi
// 0050ec68  83c410               add esp, 0x10
// 0050ec6b  8b4304               mov eax, dword ptr [ebx + 4]
// 0050ec6e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050ec72  8d0c28               lea ecx, [eax + ebp]
// 0050ec75  2bf1                 sub esi, ecx
// 0050ec77  03f0                 add esi, eax
// 0050ec79  c1fe02               sar esi, 2
// 0050ec7c  8d04b500000000       lea eax, [esi*4]
// 0050ec83  8d3410               lea esi, [eax + edx]
// 0050ec86  7409                 je 0x50ec91
// 0050ec88  50                   push eax
// 0050ec89  51                   push ecx
// 0050ec8a  50                   push eax
// 0050ec8b  52                   push edx
// 0050ec8c  ffd7                 call edi
// 0050ec8e  83c410               add esp, 0x10
// 0050ec91  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050ec95  85c9                 test ecx, ecx
// 0050ec97  7606                 jbe 0x50ec9f
// 0050ec99  8bfe                 mov edi, esi
// 0050ec9b  33c0                 xor eax, eax
// 0050ec9d  f3ab                 rep stosd dword ptr es:[edi], eax
// 0050ec9f  8b4304               mov eax, dword ptr [ebx + 4]
// 0050eca2  85c0                 test eax, eax
// 0050eca4  5f                   pop edi
// 0050eca5  5e                   pop esi
// 0050eca6  5d                   pop ebp
// 0050eca7  7409                 je 0x50ecb2
// 0050eca9  50                   push eax
// 0050ecaa  e8b30f1200           call 0x62fc62
// 0050ecaf  83c404               add esp, 4
// 0050ecb2  8b542404             mov edx, dword ptr [esp + 4]
// 0050ecb6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050ecba  014308               add dword ptr [ebx + 8], eax
// 0050ecbd  895304               mov dword ptr [ebx + 4], edx
// 0050ecc0  5b                   pop ebx
// 0050ecc1  83c408               add esp, 8
// 0050ecc4  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?_Growmap@?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp

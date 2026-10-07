// roc 2008-06 00663d20  unit: RBX::FilterStairs  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00663d20
//
// 00663d20  56                   push esi
// 00663d21  8b742408             mov esi, dword ptr [esp + 8]
// 00663d25  8b06                 mov eax, dword ptr [esi]
// 00663d27  57                   push edi
// 00663d28  50                   push eax
// 00663d29  e872b9ffff           call 0x65f6a0
// 00663d2e  8b0e                 mov ecx, dword ptr [esi]
// 00663d30  8bf8                 mov edi, eax
// 00663d32  8b4108               mov eax, dword ptr [ecx + 8]
// 00663d35  8938                 mov dword ptr [eax], edi
// 00663d37  c7400809000000       mov dword ptr [eax + 8], 9
// 00663d3e  8b06                 mov eax, dword ptr [esi]
// 00663d40  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00663d43  2b5008               sub edx, dword ptr [eax + 8]
// 00663d46  83c404               add esp, 4
// 00663d49  83fa10               cmp edx, 0x10
// 00663d4c  7f0b                 jg 0x663d59
// 00663d4e  6a01                 push 1
// 00663d50  50                   push eax
// 00663d51  e8faddfbff           call 0x621b50
// 00663d56  83c408               add esp, 8
// 00663d59  8b06                 mov eax, dword ptr [esi]
// 00663d5b  83400810             add dword ptr [eax + 8], 0x10
// 00663d5f  e82cf9ffff           call 0x663690
// 00663d64  894720               mov dword ptr [edi + 0x20], eax
// 00663d67  85c0                 test eax, eax
// 00663d69  7507                 jne 0x663d72
// 00663d6b  8b442410             mov eax, dword ptr [esp + 0x10]
// 00663d6f  894720               mov dword ptr [edi + 0x20], eax
// 00663d72  e8a9f8ffff           call 0x663620
// 00663d77  89473c               mov dword ptr [edi + 0x3c], eax
// 00663d7a  e8a1f8ffff           call 0x663620
// 00663d7f  6a01                 push 1
// 00663d81  8d4c2410             lea ecx, [esp + 0x10]
// 00663d85  894740               mov dword ptr [edi + 0x40], eax
// 00663d88  8b5604               mov edx, dword ptr [esi + 4]
// 00663d8b  51                   push ecx
// 00663d8c  52                   push edx
// 00663d8d  e86ebbffff           call 0x65f900
// 00663d92  83c40c               add esp, 0xc
// 00663d95  85c0                 test eax, eax
// 00663d97  7423                 je 0x663dbc
// 00663d99  8b460c               mov eax, dword ptr [esi + 0xc]
// 00663d9c  8b0e                 mov ecx, dword ptr [esi]
// 00663d9e  6830c78400           push 0x84c730
// 00663da3  50                   push eax
// 00663da4  6814c78400           push 0x84c714
// 00663da9  51                   push ecx
// 00663daa  e811edfbff           call 0x622ac0
// 00663daf  8b16                 mov edx, dword ptr [esi]
// 00663db1  6a03                 push 3
// 00663db3  52                   push edx
// 00663db4  e897e2fbff           call 0x622050
// 00663db9  83c418               add esp, 0x18
// 00663dbc  8a44240c             mov al, byte ptr [esp + 0xc]
// 00663dc0  6a01                 push 1
// 00663dc2  8d4c2410             lea ecx, [esp + 0x10]
// 00663dc6  884748               mov byte ptr [edi + 0x48], al
// 00663dc9  8b5604               mov edx, dword ptr [esi + 4]
// 00663dcc  51                   push ecx
// 00663dcd  52                   push edx
// 00663dce  e82dbbffff           call 0x65f900
// 00663dd3  83c40c               add esp, 0xc
// 00663dd6  85c0                 test eax, eax
// 00663dd8  7423                 je 0x663dfd
// 00663dda  8b460c               mov eax, dword ptr [esi + 0xc]
// 00663ddd  8b0e                 mov ecx, dword ptr [esi]
// 00663ddf  6830c78400           push 0x84c730
// 00663de4  50                   push eax
// 00663de5  6814c78400           push 0x84c714
// 00663dea  51                   push ecx
// 00663deb  e8d0ecfbff           call 0x622ac0
// 00663df0  8b16                 mov edx, dword ptr [esi]
// 00663df2  6a03                 push 3
// 00663df4  52                   push edx
// 00663df5  e856e2fbff           call 0x622050
// 00663dfa  83c418               add esp, 0x18
// 00663dfd  8a44240c             mov al, byte ptr [esp + 0xc]
// 00663e01  6a01                 push 1
// 00663e03  8d4c2410             lea ecx, [esp + 0x10]
// 00663e07  884749               mov byte ptr [edi + 0x49], al
// 00663e0a  8b5604               mov edx, dword ptr [esi + 4]
// 00663e0d  51                   push ecx
// 00663e0e  52                   push edx
// 00663e0f  e8ecbaffff           call 0x65f900
// 00663e14  83c40c               add esp, 0xc
// 00663e17  85c0                 test eax, eax
// 00663e19  7423                 je 0x663e3e
// 00663e1b  8b460c               mov eax, dword ptr [esi + 0xc]
// 00663e1e  8b0e                 mov ecx, dword ptr [esi]
// 00663e20  6830c78400           push 0x84c730
// 00663e25  50                   push eax
// 00663e26  6814c78400           push 0x84c714
// 00663e2b  51                   push ecx
// 00663e2c  e88fecfbff           call 0x622ac0
// 00663e31  8b16                 mov edx, dword ptr [esi]
// 00663e33  6a03                 push 3
// 00663e35  52                   push edx
// 00663e36  e815e2fbff           call 0x622050
// 00663e3b  83c418               add esp, 0x18
// 00663e3e  8a44240c             mov al, byte ptr [esp + 0xc]
// 00663e42  6a01                 push 1
// 00663e44  8d4c2410             lea ecx, [esp + 0x10]
// 00663e48  88474a               mov byte ptr [edi + 0x4a], al
// 00663e4b  8b5604               mov edx, dword ptr [esi + 4]
// 00663e4e  51                   push ecx
// 00663e4f  52                   push edx
// 00663e50  e8abbaffff           call 0x65f900
// 00663e55  83c40c               add esp, 0xc
// 00663e58  85c0                 test eax, eax
// 00663e5a  7423                 je 0x663e7f
// 00663e5c  8b460c               mov eax, dword ptr [esi + 0xc]
// 00663e5f  8b0e                 mov ecx, dword ptr [esi]
// 00663e61  6830c78400           push 0x84c730
// 00663e66  50                   push eax
// 00663e67  6814c78400           push 0x84c714
// 00663e6c  51                   push ecx
// 00663e6d  e84eecfbff           call 0x622ac0
// 00663e72  8b16                 mov edx, dword ptr [esi]
// 00663e74  6a03                 push 3
// 00663e76  52                   push edx
// 00663e77  e8d4e1fbff           call 0x622050
// 00663e7c  83c418               add esp, 0x18
// 00663e7f  8a44240c             mov al, byte ptr [esp + 0xc]
// 00663e83  53                   push ebx
// 00663e84  88474b               mov byte ptr [edi + 0x4b], al
// 00663e87  8bdf                 mov ebx, edi
// 00663e89  8bc6                 mov eax, esi
// 00663e8b  e8b0f8ffff           call 0x663740
// 00663e90  57                   push edi
// 00663e91  8bc6                 mov eax, esi
// 00663e93  e828f9ffff           call 0x6637c0
// 00663e98  8bc6                 mov eax, esi
// 00663e9a  e8c1fbffff           call 0x663a60
// 00663e9f  57                   push edi
// 00663ea0  e8bbf5fbff           call 0x623460
// 00663ea5  83c408               add esp, 8
// 00663ea8  5b                   pop ebx
// 00663ea9  85c0                 test eax, eax
// 00663eab  7523                 jne 0x663ed0
// 00663ead  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00663eb0  8b16                 mov edx, dword ptr [esi]
// 00663eb2  685cc78400           push 0x84c75c
// 00663eb7  51                   push ecx
// 00663eb8  6814c78400           push 0x84c714
// 00663ebd  52                   push edx
// 00663ebe  e8fdebfbff           call 0x622ac0
// 00663ec3  8b06                 mov eax, dword ptr [esi]
// 00663ec5  6a03                 push 3
// 00663ec7  50                   push eax
// 00663ec8  e883e1fbff           call 0x622050
// 00663ecd  83c418               add esp, 0x18
// 00663ed0  8b36                 mov esi, dword ptr [esi]
// 00663ed2  834608f0             add dword ptr [esi + 8], -0x10
// 00663ed6  8bc7                 mov eax, edi
// 00663ed8  5f                   pop edi
// 00663ed9  5e                   pop esi
// 00663eda  c3                   ret 
// library lua-5.1.3/lundump.c (function _LoadFunction)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.3 lundump.c

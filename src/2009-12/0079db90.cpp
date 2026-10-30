// roc 2009-12 0079db90  unit: seg_00790000  size: 429 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079db90
//
// 0079db90  81ec20010000         sub esp, 0x120
// 0079db96  53                   push ebx
// 0079db97  55                   push ebp
// 0079db98  8bac242c010000       mov ebp, dword ptr [esp + 0x12c]
// 0079db9f  56                   push esi
// 0079dba0  57                   push edi
// 0079dba1  8d442410             lea eax, [esp + 0x10]
// 0079dba5  50                   push eax
// 0079dba6  6a01                 push 1
// 0079dba8  55                   push ebp
// 0079dba9  e8c2cbfeff           call 0x78a770
// 0079dbae  8d4c2424             lea ecx, [esp + 0x24]
// 0079dbb2  51                   push ecx
// 0079dbb3  8bf8                 mov edi, eax
// 0079dbb5  6a02                 push 2
// 0079dbb7  55                   push ebp
// 0079dbb8  897c2434             mov dword ptr [esp + 0x34], edi
// 0079dbbc  e8afcbfeff           call 0x78a770
// 0079dbc1  8b742428             mov esi, dword ptr [esp + 0x28]
// 0079dbc5  6a01                 push 1
// 0079dbc7  6a03                 push 3
// 0079dbc9  55                   push ebp
// 0079dbca  8bd8                 mov ebx, eax
// 0079dbcc  e84fcdfeff           call 0x78a920
// 0079dbd1  83c424               add esp, 0x24
// 0079dbd4  85c0                 test eax, eax
// 0079dbd6  7d04                 jge 0x79dbdc
// 0079dbd8  8d443001             lea eax, [eax + esi + 1]
// 0079dbdc  33d2                 xor edx, edx
// 0079dbde  85c0                 test eax, eax
// 0079dbe0  0f9cc2               setl dl
// 0079dbe3  4a                   dec edx
// 0079dbe4  23d0                 and edx, eax
// 0079dbe6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0079dbea  83ea01               sub edx, 1
// 0079dbed  8bf2                 mov esi, edx
// 0079dbef  7904                 jns 0x79dbf5
// 0079dbf1  33f6                 xor esi, esi
// 0079dbf3  eb06                 jmp 0x79dbfb
// 0079dbf5  3bf0                 cmp esi, eax
// 0079dbf7  7602                 jbe 0x79dbfb
// 0079dbf9  8bf0                 mov esi, eax
// 0079dbfb  83bc243801000000     cmp dword ptr [esp + 0x138], 0
// 0079dc03  7473                 je 0x79dc78
// 0079dc05  6a04                 push 4
// 0079dc07  55                   push ebp
// 0079dc08  e863affeff           call 0x788b70
// 0079dc0d  83c408               add esp, 8
// 0079dc10  85c0                 test eax, eax
// 0079dc12  7513                 jne 0x79dc27
// 0079dc14  688cb19e00           push 0x9eb18c
// 0079dc19  53                   push ebx
// 0079dc1a  ff1564b99800         call dword ptr [0x98b964]
// 0079dc20  83c408               add esp, 8
// 0079dc23  85c0                 test eax, eax
// 0079dc25  754d                 jne 0x79dc74
// 0079dc27  8b442418             mov eax, dword ptr [esp + 0x18]
// 0079dc2b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079dc2f  50                   push eax
// 0079dc30  2bce                 sub ecx, esi
// 0079dc32  51                   push ecx
// 0079dc33  03f7                 add esi, edi
// 0079dc35  56                   push esi
// 0079dc36  e8d5fdffff           call 0x79da10
// 0079dc3b  83c40c               add esp, 0xc
// 0079dc3e  85c0                 test eax, eax
// 0079dc40  0f8486000000         je 0x79dccc
// 0079dc46  8bf0                 mov esi, eax
// 0079dc48  2bf7                 sub esi, edi
// 0079dc4a  8d5601               lea edx, [esi + 1]
// 0079dc4d  52                   push edx
// 0079dc4e  55                   push ebp
// 0079dc4f  e82cb1feff           call 0x788d80
// 0079dc54  8b442420             mov eax, dword ptr [esp + 0x20]
// 0079dc58  03f0                 add esi, eax
// 0079dc5a  56                   push esi
// 0079dc5b  55                   push ebp
// 0079dc5c  e81fb1feff           call 0x788d80
// 0079dc61  83c410               add esp, 0x10
// 0079dc64  5f                   pop edi
// 0079dc65  5e                   pop esi
// 0079dc66  5d                   pop ebp
// 0079dc67  b802000000           mov eax, 2
// 0079dc6c  5b                   pop ebx
// 0079dc6d  81c420010000         add esp, 0x120
// 0079dc73  c3                   ret 
// 0079dc74  8b442410             mov eax, dword ptr [esp + 0x10]
// 0079dc78  803b5e               cmp byte ptr [ebx], 0x5e
// 0079dc7b  750b                 jne 0x79dc88
// 0079dc7d  43                   inc ebx
// 0079dc7e  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0079dc86  eb08                 jmp 0x79dc90
// 0079dc88  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0079dc90  03f7                 add esi, edi
// 0079dc92  03c7                 add eax, edi
// 0079dc94  896c2428             mov dword ptr [esp + 0x28], ebp
// 0079dc98  897c2420             mov dword ptr [esp + 0x20], edi
// 0079dc9c  89442424             mov dword ptr [esp + 0x24], eax
// 0079dca0  53                   push ebx
// 0079dca1  8d4c2424             lea ecx, [esp + 0x24]
// 0079dca5  56                   push esi
// 0079dca6  51                   push ecx
// 0079dca7  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0079dcaf  e88cfaffff           call 0x79d740
// 0079dcb4  8bf8                 mov edi, eax
// 0079dcb6  83c40c               add esp, 0xc
// 0079dcb9  85ff                 test edi, edi
// 0079dcbb  7528                 jne 0x79dce5
// 0079dcbd  8bd6                 mov edx, esi
// 0079dcbf  46                   inc esi
// 0079dcc0  3b542424             cmp edx, dword ptr [esp + 0x24]
// 0079dcc4  7306                 jae 0x79dccc
// 0079dcc6  39442414             cmp dword ptr [esp + 0x14], eax
// 0079dcca  74d4                 je 0x79dca0
// 0079dccc  55                   push ebp
// 0079dccd  e86eb0feff           call 0x788d40
// 0079dcd2  83c404               add esp, 4
// 0079dcd5  5f                   pop edi
// 0079dcd6  5e                   pop esi
// 0079dcd7  5d                   pop ebp
// 0079dcd8  b801000000           mov eax, 1
// 0079dcdd  5b                   pop ebx
// 0079dcde  81c420010000         add esp, 0x120
// 0079dce4  c3                   ret 
// 0079dce5  83bc243801000000     cmp dword ptr [esp + 0x138], 0
// 0079dced  7435                 je 0x79dd24
// 0079dcef  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0079dcf3  2bf3                 sub esi, ebx
// 0079dcf5  46                   inc esi
// 0079dcf6  56                   push esi
// 0079dcf7  55                   push ebp
// 0079dcf8  e883b0feff           call 0x788d80
// 0079dcfd  2bfb                 sub edi, ebx
// 0079dcff  57                   push edi
// 0079dd00  55                   push ebp
// 0079dd01  e87ab0feff           call 0x788d80
// 0079dd06  6a00                 push 0
// 0079dd08  6a00                 push 0
// 0079dd0a  8d442438             lea eax, [esp + 0x38]
// 0079dd0e  e82dfeffff           call 0x79db40
// 0079dd13  83c418               add esp, 0x18
// 0079dd16  5f                   pop edi
// 0079dd17  5e                   pop esi
// 0079dd18  5d                   pop ebp
// 0079dd19  83c002               add eax, 2
// 0079dd1c  5b                   pop ebx
// 0079dd1d  81c420010000         add esp, 0x120
// 0079dd23  c3                   ret 
// 0079dd24  57                   push edi
// 0079dd25  56                   push esi
// 0079dd26  8d442428             lea eax, [esp + 0x28]
// 0079dd2a  e811feffff           call 0x79db40
// 0079dd2f  83c408               add esp, 8
// 0079dd32  5f                   pop edi
// 0079dd33  5e                   pop esi
// 0079dd34  5d                   pop ebp
// 0079dd35  5b                   pop ebx
// 0079dd36  81c420010000         add esp, 0x120
// 0079dd3c  c3                   ret 
// copied from an identical function in another client (function _str_find_aux)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lstrlib.c
// from server: 100% by auto
// roc 2008-06 0066b710  unit: RBX::GroupDragTool  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066b710
//
// 0066b710  83ec08               sub esp, 8
// 0066b713  53                   push ebx
// 0066b714  55                   push ebp
// 0066b715  56                   push esi
// 0066b716  57                   push edi
// 0066b717  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0066b71b  8bd8                 mov ebx, eax
// 0066b71d  8bf1                 mov esi, ecx
// 0066b71f  e87cfeffff           call 0x66b5a0
// 0066b724  833b0a               cmp dword ptr [ebx], 0xa
// 0066b727  7511                 jne 0x66b73a
// 0066b729  8b4308               mov eax, dword ptr [ebx + 8]
// 0066b72c  50                   push eax
// 0066b72d  8d4b10               lea ecx, [ebx + 0x10]
// 0066b730  51                   push ecx
// 0066b731  56                   push esi
// 0066b732  e8d9f5ffff           call 0x66ad10
// 0066b737  83c40c               add esp, 0xc
// 0066b73a  8b5310               mov edx, dword ptr [ebx + 0x10]
// 0066b73d  8b6b14               mov ebp, dword ptr [ebx + 0x14]
// 0066b740  3bd5                 cmp edx, ebp
// 0066b742  0f84bd000000         je 0x66b805
// 0066b748  83cfff               or edi, 0xffffffff
// 0066b74b  8bc6                 mov eax, esi
// 0066b74d  897c2414             mov dword ptr [esp + 0x14], edi
// 0066b751  e88af3ffff           call 0x66aae0
// 0066b756  85c0                 test eax, eax
// 0066b758  750d                 jne 0x66b767
// 0066b75a  8bd5                 mov edx, ebp
// 0066b75c  8bc6                 mov eax, esi
// 0066b75e  e87df3ffff           call 0x66aae0
// 0066b763  85c0                 test eax, eax
// 0066b765  7475                 je 0x66b7dc
// 0066b767  833b0a               cmp dword ptr [ebx], 0xa
// 0066b76a  750a                 jne 0x66b776
// 0066b76c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0066b774  eb0d                 jmp 0x66b783
// 0066b776  56                   push esi
// 0066b777  e834fcffff           call 0x66b3b0
// 0066b77c  83c404               add esp, 4
// 0066b77f  89442410             mov dword ptr [esp + 0x10], eax
// 0066b783  8b5618               mov edx, dword ptr [esi + 0x18]
// 0066b786  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0066b78a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0066b78d  89561c               mov dword ptr [esi + 0x1c], edx
// 0066b790  8b4808               mov ecx, dword ptr [eax + 8]
// 0066b793  c1e506               shl ebp, 6
// 0066b796  8bd5                 mov edx, ebp
// 0066b798  51                   push ecx
// 0066b799  81ca02400000         or edx, 0x4002
// 0066b79f  52                   push edx
// 0066b7a0  e8ebf9ffff           call 0x66b190
// 0066b7a5  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0066b7a8  8bf8                 mov edi, eax
// 0066b7aa  8b4618               mov eax, dword ptr [esi + 0x18]
// 0066b7ad  89461c               mov dword ptr [esi + 0x1c], eax
// 0066b7b0  8b5108               mov edx, dword ptr [ecx + 8]
// 0066b7b3  52                   push edx
// 0066b7b4  81cd02008000         or ebp, 0x800002
// 0066b7ba  55                   push ebp
// 0066b7bb  e8d0f9ffff           call 0x66b190
// 0066b7c0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0066b7c4  51                   push ecx
// 0066b7c5  8d5620               lea edx, [esi + 0x20]
// 0066b7c8  89442428             mov dword ptr [esp + 0x28], eax
// 0066b7cc  8b4618               mov eax, dword ptr [esi + 0x18]
// 0066b7cf  52                   push edx
// 0066b7d0  56                   push esi
// 0066b7d1  89461c               mov dword ptr [esi + 0x1c], eax
// 0066b7d4  e837f5ffff           call 0x66ad10
// 0066b7d9  83c41c               add esp, 0x1c
// 0066b7dc  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0066b7df  57                   push edi
// 0066b7e0  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0066b7e4  57                   push edi
// 0066b7e5  896e1c               mov dword ptr [esi + 0x1c], ebp
// 0066b7e8  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0066b7eb  55                   push ebp
// 0066b7ec  56                   push esi
// 0066b7ed  e85ef4ffff           call 0x66ac50
// 0066b7f2  8b442424             mov eax, dword ptr [esp + 0x24]
// 0066b7f6  50                   push eax
// 0066b7f7  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0066b7fa  57                   push edi
// 0066b7fb  55                   push ebp
// 0066b7fc  56                   push esi
// 0066b7fd  e84ef4ffff           call 0x66ac50
// 0066b802  83c420               add esp, 0x20
// 0066b805  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066b809  5f                   pop edi
// 0066b80a  5e                   pop esi
// 0066b80b  83c8ff               or eax, 0xffffffff
// 0066b80e  5d                   pop ebp
// 0066b80f  894310               mov dword ptr [ebx + 0x10], eax
// 0066b812  894314               mov dword ptr [ebx + 0x14], eax
// 0066b815  894b08               mov dword ptr [ebx + 8], ecx
// 0066b818  c7030c000000         mov dword ptr [ebx], 0xc
// 0066b81e  5b                   pop ebx
// 0066b81f  83c408               add esp, 8
// 0066b822  c3                   ret 
// library lua-5.1.4/lcode.c (function _exp2reg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c

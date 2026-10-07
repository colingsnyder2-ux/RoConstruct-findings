// roc 2009-06 006fa6c0  unit: RBX::GroupDragTool  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fa6c0
//
// 006fa6c0  83ec08               sub esp, 8
// 006fa6c3  53                   push ebx
// 006fa6c4  55                   push ebp
// 006fa6c5  56                   push esi
// 006fa6c6  57                   push edi
// 006fa6c7  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006fa6cb  8bd8                 mov ebx, eax
// 006fa6cd  8bf1                 mov esi, ecx
// 006fa6cf  e87cfeffff           call 0x6fa550
// 006fa6d4  833b0a               cmp dword ptr [ebx], 0xa
// 006fa6d7  7511                 jne 0x6fa6ea
// 006fa6d9  8b4308               mov eax, dword ptr [ebx + 8]
// 006fa6dc  50                   push eax
// 006fa6dd  8d4b10               lea ecx, [ebx + 0x10]
// 006fa6e0  51                   push ecx
// 006fa6e1  56                   push esi
// 006fa6e2  e8c9f5ffff           call 0x6f9cb0
// 006fa6e7  83c40c               add esp, 0xc
// 006fa6ea  8b5310               mov edx, dword ptr [ebx + 0x10]
// 006fa6ed  8b6b14               mov ebp, dword ptr [ebx + 0x14]
// 006fa6f0  3bd5                 cmp edx, ebp
// 006fa6f2  0f84bd000000         je 0x6fa7b5
// 006fa6f8  83cfff               or edi, 0xffffffff
// 006fa6fb  8bc6                 mov eax, esi
// 006fa6fd  897c2414             mov dword ptr [esp + 0x14], edi
// 006fa701  e87af3ffff           call 0x6f9a80
// 006fa706  85c0                 test eax, eax
// 006fa708  750d                 jne 0x6fa717
// 006fa70a  8bd5                 mov edx, ebp
// 006fa70c  8bc6                 mov eax, esi
// 006fa70e  e86df3ffff           call 0x6f9a80
// 006fa713  85c0                 test eax, eax
// 006fa715  7475                 je 0x6fa78c
// 006fa717  833b0a               cmp dword ptr [ebx], 0xa
// 006fa71a  750a                 jne 0x6fa726
// 006fa71c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006fa724  eb0d                 jmp 0x6fa733
// 006fa726  56                   push esi
// 006fa727  e834fcffff           call 0x6fa360
// 006fa72c  83c404               add esp, 4
// 006fa72f  89442410             mov dword ptr [esp + 0x10], eax
// 006fa733  8b5618               mov edx, dword ptr [esi + 0x18]
// 006fa736  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006fa73a  8b460c               mov eax, dword ptr [esi + 0xc]
// 006fa73d  89561c               mov dword ptr [esi + 0x1c], edx
// 006fa740  8b4808               mov ecx, dword ptr [eax + 8]
// 006fa743  c1e506               shl ebp, 6
// 006fa746  8bd5                 mov edx, ebp
// 006fa748  51                   push ecx
// 006fa749  81ca02400000         or edx, 0x4002
// 006fa74f  52                   push edx
// 006fa750  e8dbf9ffff           call 0x6fa130
// 006fa755  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006fa758  8bf8                 mov edi, eax
// 006fa75a  8b4618               mov eax, dword ptr [esi + 0x18]
// 006fa75d  89461c               mov dword ptr [esi + 0x1c], eax
// 006fa760  8b5108               mov edx, dword ptr [ecx + 8]
// 006fa763  52                   push edx
// 006fa764  81cd02008000         or ebp, 0x800002
// 006fa76a  55                   push ebp
// 006fa76b  e8c0f9ffff           call 0x6fa130
// 006fa770  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006fa774  51                   push ecx
// 006fa775  8d5620               lea edx, [esi + 0x20]
// 006fa778  89442428             mov dword ptr [esp + 0x28], eax
// 006fa77c  8b4618               mov eax, dword ptr [esi + 0x18]
// 006fa77f  52                   push edx
// 006fa780  56                   push esi
// 006fa781  89461c               mov dword ptr [esi + 0x1c], eax
// 006fa784  e827f5ffff           call 0x6f9cb0
// 006fa789  83c41c               add esp, 0x1c
// 006fa78c  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 006fa78f  57                   push edi
// 006fa790  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006fa794  57                   push edi
// 006fa795  896e1c               mov dword ptr [esi + 0x1c], ebp
// 006fa798  8b4314               mov eax, dword ptr [ebx + 0x14]
// 006fa79b  55                   push ebp
// 006fa79c  56                   push esi
// 006fa79d  e84ef4ffff           call 0x6f9bf0
// 006fa7a2  8b442424             mov eax, dword ptr [esp + 0x24]
// 006fa7a6  50                   push eax
// 006fa7a7  8b4310               mov eax, dword ptr [ebx + 0x10]
// 006fa7aa  57                   push edi
// 006fa7ab  55                   push ebp
// 006fa7ac  56                   push esi
// 006fa7ad  e83ef4ffff           call 0x6f9bf0
// 006fa7b2  83c420               add esp, 0x20
// 006fa7b5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006fa7b9  5f                   pop edi
// 006fa7ba  5e                   pop esi
// 006fa7bb  83c8ff               or eax, 0xffffffff
// 006fa7be  5d                   pop ebp
// 006fa7bf  894310               mov dword ptr [ebx + 0x10], eax
// 006fa7c2  894314               mov dword ptr [ebx + 0x14], eax
// 006fa7c5  894b08               mov dword ptr [ebx + 8], ecx
// 006fa7c8  c7030c000000         mov dword ptr [ebx], 0xc
// 006fa7ce  5b                   pop ebx
// 006fa7cf  83c408               add esp, 8
// 006fa7d2  c3                   ret 
// library lua-5.1.4/lcode.c (function _exp2reg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c

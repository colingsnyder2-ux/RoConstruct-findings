// from server: 100% by auto
// roc 2010-06 00790050  unit: RBX::GroupDragTool  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00790050
//
// 00790050  83ec08               sub esp, 8
// 00790053  53                   push ebx
// 00790054  55                   push ebp
// 00790055  56                   push esi
// 00790056  57                   push edi
// 00790057  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0079005b  8bd8                 mov ebx, eax
// 0079005d  8bf1                 mov esi, ecx
// 0079005f  e87cfeffff           call 0x78fee0
// 00790064  833b0a               cmp dword ptr [ebx], 0xa
// 00790067  7511                 jne 0x79007a
// 00790069  8b4308               mov eax, dword ptr [ebx + 8]
// 0079006c  50                   push eax
// 0079006d  8d4b10               lea ecx, [ebx + 0x10]
// 00790070  51                   push ecx
// 00790071  56                   push esi
// 00790072  e8b9f5ffff           call 0x78f630
// 00790077  83c40c               add esp, 0xc
// 0079007a  8b5310               mov edx, dword ptr [ebx + 0x10]
// 0079007d  8b6b14               mov ebp, dword ptr [ebx + 0x14]
// 00790080  3bd5                 cmp edx, ebp
// 00790082  0f84bd000000         je 0x790145
// 00790088  83cfff               or edi, 0xffffffff
// 0079008b  8bc6                 mov eax, esi
// 0079008d  897c2414             mov dword ptr [esp + 0x14], edi
// 00790091  e86af3ffff           call 0x78f400
// 00790096  85c0                 test eax, eax
// 00790098  750d                 jne 0x7900a7
// 0079009a  8bd5                 mov edx, ebp
// 0079009c  8bc6                 mov eax, esi
// 0079009e  e85df3ffff           call 0x78f400
// 007900a3  85c0                 test eax, eax
// 007900a5  7475                 je 0x79011c
// 007900a7  833b0a               cmp dword ptr [ebx], 0xa
// 007900aa  750a                 jne 0x7900b6
// 007900ac  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 007900b4  eb0d                 jmp 0x7900c3
// 007900b6  56                   push esi
// 007900b7  e834fcffff           call 0x78fcf0
// 007900bc  83c404               add esp, 4
// 007900bf  89442410             mov dword ptr [esp + 0x10], eax
// 007900c3  8b5618               mov edx, dword ptr [esi + 0x18]
// 007900c6  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007900ca  8b460c               mov eax, dword ptr [esi + 0xc]
// 007900cd  89561c               mov dword ptr [esi + 0x1c], edx
// 007900d0  8b4808               mov ecx, dword ptr [eax + 8]
// 007900d3  c1e506               shl ebp, 6
// 007900d6  8bd5                 mov edx, ebp
// 007900d8  51                   push ecx
// 007900d9  81ca02400000         or edx, 0x4002
// 007900df  52                   push edx
// 007900e0  e8dbf9ffff           call 0x78fac0
// 007900e5  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007900e8  8bf8                 mov edi, eax
// 007900ea  8b4618               mov eax, dword ptr [esi + 0x18]
// 007900ed  89461c               mov dword ptr [esi + 0x1c], eax
// 007900f0  8b5108               mov edx, dword ptr [ecx + 8]
// 007900f3  52                   push edx
// 007900f4  81cd02008000         or ebp, 0x800002
// 007900fa  55                   push ebp
// 007900fb  e8c0f9ffff           call 0x78fac0
// 00790100  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00790104  51                   push ecx
// 00790105  8d5620               lea edx, [esi + 0x20]
// 00790108  89442428             mov dword ptr [esp + 0x28], eax
// 0079010c  8b4618               mov eax, dword ptr [esi + 0x18]
// 0079010f  52                   push edx
// 00790110  56                   push esi
// 00790111  89461c               mov dword ptr [esi + 0x1c], eax
// 00790114  e817f5ffff           call 0x78f630
// 00790119  83c41c               add esp, 0x1c
// 0079011c  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0079011f  57                   push edi
// 00790120  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00790124  57                   push edi
// 00790125  896e1c               mov dword ptr [esi + 0x1c], ebp
// 00790128  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0079012b  55                   push ebp
// 0079012c  56                   push esi
// 0079012d  e83ef4ffff           call 0x78f570
// 00790132  8b442424             mov eax, dword ptr [esp + 0x24]
// 00790136  50                   push eax
// 00790137  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0079013a  57                   push edi
// 0079013b  55                   push ebp
// 0079013c  56                   push esi
// 0079013d  e82ef4ffff           call 0x78f570
// 00790142  83c420               add esp, 0x20
// 00790145  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00790149  5f                   pop edi
// 0079014a  5e                   pop esi
// 0079014b  83c8ff               or eax, 0xffffffff
// 0079014e  5d                   pop ebp
// 0079014f  894310               mov dword ptr [ebx + 0x10], eax
// 00790152  894314               mov dword ptr [ebx + 0x14], eax
// 00790155  894b08               mov dword ptr [ebx + 8], ecx
// 00790158  c7030c000000         mov dword ptr [ebx], 0xc
// 0079015e  5b                   pop ebx
// 0079015f  83c408               add esp, 8
// 00790162  c3                   ret 
// library lua-5.1.4/lcode.c (function _exp2reg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c

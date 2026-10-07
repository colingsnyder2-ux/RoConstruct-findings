// roc 2008-06 006617c0  unit: RBX::FilterStairs  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006617c0
//
// 006617c0  83ec1c               sub esp, 0x1c
// 006617c3  53                   push ebx
// 006617c4  55                   push ebp
// 006617c5  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 006617c9  56                   push esi
// 006617ca  8bf0                 mov esi, eax
// 006617cc  8b4610               mov eax, dword ptr [esi + 0x10]
// 006617cf  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 006617d2  57                   push edi
// 006617d3  8b7e04               mov edi, dword ptr [esi + 4]
// 006617d6  897c2410             mov dword ptr [esp + 0x10], edi
// 006617da  83f828               cmp eax, 0x28
// 006617dd  745b                 je 0x66183a
// 006617df  83f87b               cmp eax, 0x7b
// 006617e2  7449                 je 0x66182d
// 006617e4  3d1e010000           cmp eax, 0x11e
// 006617e9  7416                 je 0x661801
// 006617eb  682cc68400           push 0x84c62c
// 006617f0  56                   push esi
// 006617f1  e81a2a0000           call 0x664210
// 006617f6  83c408               add esp, 8
// 006617f9  5f                   pop edi
// 006617fa  5e                   pop esi
// 006617fb  5d                   pop ebp
// 006617fc  5b                   pop ebx
// 006617fd  83c41c               add esp, 0x1c
// 00661800  c3                   ret 
// 00661801  8b4618               mov eax, dword ptr [esi + 0x18]
// 00661804  50                   push eax
// 00661805  53                   push ebx
// 00661806  e8d5960000           call 0x66aee0
// 0066180b  83c9ff               or ecx, 0xffffffff
// 0066180e  56                   push esi
// 0066180f  894c2430             mov dword ptr [esp + 0x30], ecx
// 00661813  894c2434             mov dword ptr [esp + 0x34], ecx
// 00661817  c744242004000000     mov dword ptr [esp + 0x20], 4
// 0066181f  89442428             mov dword ptr [esp + 0x28], eax
// 00661823  e8d83d0000           call 0x665600
// 00661828  83c40c               add esp, 0xc
// 0066182b  eb69                 jmp 0x661896
// 0066182d  8d442414             lea eax, [esp + 0x14]
// 00661831  8bce                 mov ecx, esi
// 00661833  e848faffff           call 0x661280
// 00661838  eb5c                 jmp 0x661896
// 0066183a  3b7e08               cmp edi, dword ptr [esi + 8]
// 0066183d  740e                 je 0x66184d
// 0066183f  68f8c58400           push 0x84c5f8
// 00661844  56                   push esi
// 00661845  e8c6290000           call 0x664210
// 0066184a  83c408               add esp, 8
// 0066184d  56                   push esi
// 0066184e  e8ad3d0000           call 0x665600
// 00661853  83c404               add esp, 4
// 00661856  837e1029             cmp dword ptr [esi + 0x10], 0x29
// 0066185a  750a                 jne 0x661866
// 0066185c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00661864  eb1b                 jmp 0x661881
// 00661866  8d7c2414             lea edi, [esp + 0x14]
// 0066186a  e811ffffff           call 0x661780
// 0066186f  6aff                 push -1
// 00661871  8bc7                 mov eax, edi
// 00661873  50                   push eax
// 00661874  53                   push ebx
// 00661875  e8c6960000           call 0x66af40
// 0066187a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0066187e  83c40c               add esp, 0xc
// 00661881  8bc7                 mov eax, edi
// 00661883  6a28                 push 0x28
// 00661885  bf29000000           mov edi, 0x29
// 0066188a  e891efffff           call 0x660820
// 0066188f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00661893  83c404               add esp, 4
// 00661896  8b442414             mov eax, dword ptr [esp + 0x14]
// 0066189a  8b7508               mov esi, dword ptr [ebp + 8]
// 0066189d  83f80d               cmp eax, 0xd
// 006618a0  741f                 je 0x6618c1
// 006618a2  83f80e               cmp eax, 0xe
// 006618a5  741a                 je 0x6618c1
// 006618a7  85c0                 test eax, eax
// 006618a9  740e                 je 0x6618b9
// 006618ab  8d4c2414             lea ecx, [esp + 0x14]
// 006618af  51                   push ecx
// 006618b0  53                   push ebx
// 006618b1  e87a9f0000           call 0x66b830
// 006618b6  83c408               add esp, 8
// 006618b9  8b4324               mov eax, dword ptr [ebx + 0x24]
// 006618bc  2bc6                 sub eax, esi
// 006618be  48                   dec eax
// 006618bf  eb03                 jmp 0x6618c4
// 006618c1  83c8ff               or eax, 0xffffffff
// 006618c4  6a02                 push 2
// 006618c6  40                   inc eax
// 006618c7  50                   push eax
// 006618c8  56                   push esi
// 006618c9  6a1c                 push 0x1c
// 006618cb  53                   push ebx
// 006618cc  e85f990000           call 0x66b230
// 006618d1  83c9ff               or ecx, 0xffffffff
// 006618d4  57                   push edi
// 006618d5  53                   push ebx
// 006618d6  894d10               mov dword ptr [ebp + 0x10], ecx
// 006618d9  894d14               mov dword ptr [ebp + 0x14], ecx
// 006618dc  c745000d000000       mov dword ptr [ebp], 0xd
// 006618e3  894508               mov dword ptr [ebp + 8], eax
// 006618e6  e885980000           call 0x66b170
// 006618eb  83c41c               add esp, 0x1c
// 006618ee  46                   inc esi
// 006618ef  5f                   pop edi
// 006618f0  897324               mov dword ptr [ebx + 0x24], esi
// 006618f3  5e                   pop esi
// 006618f4  5d                   pop ebp
// 006618f5  5b                   pop ebx
// 006618f6  83c41c               add esp, 0x1c
// 006618f9  c3                   ret 
// library lua-5.1.4/lparser.c (function _funcargs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

// roc 2008-06 00663fe0  unit: RBX::FilterStairs  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00663fe0
//
// 00663fe0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00663fe4  8a01                 mov al, byte ptr [ecx]
// 00663fe6  83ec10               sub esp, 0x10
// 00663fe9  3c40                 cmp al, 0x40
// 00663feb  7412                 je 0x663fff
// 00663fed  3c3d                 cmp al, 0x3d
// 00663fef  740e                 je 0x663fff
// 00663ff1  3c1b                 cmp al, 0x1b
// 00663ff3  750b                 jne 0x664000
// 00663ff5  c744240c78c78400     mov dword ptr [esp + 0xc], 0x84c778
// 00663ffd  eb05                 jmp 0x664004
// 00663fff  41                   inc ecx
// 00664000  894c240c             mov dword ptr [esp + 0xc], ecx
// 00664004  8b442418             mov eax, dword ptr [esp + 0x18]
// 00664008  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066400c  56                   push esi
// 0066400d  57                   push edi
// 0066400e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00664012  8d742408             lea esi, [esp + 8]
// 00664016  897c2408             mov dword ptr [esp + 8], edi
// 0066401a  8944240c             mov dword ptr [esp + 0xc], eax
// 0066401e  894c2410             mov dword ptr [esp + 0x10], ecx
// 00664022  e8f9feffff           call 0x663f20
// 00664027  6a02                 push 2
// 00664029  6874c78400           push 0x84c774
// 0066402e  57                   push edi
// 0066402f  e8ccb2ffff           call 0x65f300
// 00664034  50                   push eax
// 00664035  8bd6                 mov edx, esi
// 00664037  52                   push edx
// 00664038  e8e3fcffff           call 0x663d20
// 0066403d  83c414               add esp, 0x14
// 00664040  5f                   pop edi
// 00664041  5e                   pop esi
// 00664042  83c410               add esp, 0x10
// 00664045  c3                   ret 
// library lua-5.1.4/lundump.c (function _luaU_undump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c

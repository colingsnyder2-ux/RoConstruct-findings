// roc 2007-08 00612780  unit: seg_00610000  size: 474 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00612780
//
// 00612780  83ec24               sub esp, 0x24
// 00612783  53                   push ebx
// 00612784  55                   push ebp
// 00612785  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00612789  56                   push esi
// 0061278a  8bf0                 mov esi, eax
// 0061278c  0fb64607             movzx eax, byte ptr [esi + 7]
// 00612790  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 00612793  3beb                 cmp ebp, ebx
// 00612795  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00612798  57                   push edi
// 00612799  89442420             mov dword ptr [esp + 0x20], eax
// 0061279d  894c2414             mov dword ptr [esp + 0x14], ecx
// 006127a1  7e0b                 jle 0x6127ae
// 006127a3  8b442438             mov eax, dword ptr [esp + 0x38]
// 006127a7  8bfd                 mov edi, ebp
// 006127a9  e8b2faffff           call 0x612260
// 006127ae  8b542438             mov edx, dword ptr [esp + 0x38]
// 006127b2  8b442440             mov eax, dword ptr [esp + 0x40]
// 006127b6  52                   push edx
// 006127b7  8bfe                 mov edi, esi
// 006127b9  e802fbffff           call 0x6122c0
// 006127be  83c404               add esp, 4
// 006127c1  3beb                 cmp ebp, ebx
// 006127c3  0f8dcf000000         jge 0x612898
// 006127c9  8d4501               lea eax, [ebp + 1]
// 006127cc  8944241c             mov dword ptr [esp + 0x1c], eax
// 006127d0  8944243c             mov dword ptr [esp + 0x3c], eax
// 006127d4  8bc5                 mov eax, ebp
// 006127d6  c1e004               shl eax, 4
// 006127d9  8bfb                 mov edi, ebx
// 006127db  896e1c               mov dword ptr [esi + 0x1c], ebp
// 006127de  89442418             mov dword ptr [esp + 0x18], eax
// 006127e2  89442410             mov dword ptr [esp + 0x10], eax
// 006127e6  2bfd                 sub edi, ebp
// 006127e8  eb06                 jmp 0x6127f0
// 006127ea  8d9b00000000         lea ebx, [ebx]
// 006127f0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006127f3  8b542410             mov edx, dword ptr [esp + 0x10]
// 006127f7  837c0a0800           cmp dword ptr [edx + ecx + 8], 0
// 006127fc  8d2c0a               lea ebp, [edx + ecx]
// 006127ff  744d                 je 0x61284e
// 00612801  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00612805  50                   push eax
// 00612806  56                   push esi
// 00612807  e834fcffff           call 0x612440
// 0061280c  83c408               add esp, 8
// 0061280f  3de82f7c00           cmp eax, 0x7c2fe8
// 00612814  7523                 jne 0x612839
// 00612816  db44243c             fild dword ptr [esp + 0x3c]
// 0061281a  8b542438             mov edx, dword ptr [esp + 0x38]
// 0061281e  8d4c2424             lea ecx, [esp + 0x24]
// 00612822  51                   push ecx
// 00612823  56                   push esi
// 00612824  dd5c242c             fstp qword ptr [esp + 0x2c]
// 00612828  52                   push edx
// 00612829  c744243803000000     mov dword ptr [esp + 0x38], 3
// 00612831  e89a020000           call 0x612ad0
// 00612836  83c40c               add esp, 0xc
// 00612839  8b4d00               mov ecx, dword ptr [ebp]
// 0061283c  8908                 mov dword ptr [eax], ecx
// 0061283e  8b5504               mov edx, dword ptr [ebp + 4]
// 00612841  895004               mov dword ptr [eax + 4], edx
// 00612844  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00612847  894808               mov dword ptr [eax + 8], ecx
// 0061284a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0061284e  8344241010           add dword ptr [esp + 0x10], 0x10
// 00612853  8344243c01           add dword ptr [esp + 0x3c], 1
// 00612858  83ef01               sub edi, 1
// 0061285b  7593                 jne 0x6127f0
// 0061285d  817c241cffffff0f     cmp dword ptr [esp + 0x1c], 0xfffffff
// 00612865  771b                 ja 0x612882
// 00612867  8b560c               mov edx, dword ptr [esi + 0xc]
// 0061286a  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0061286e  50                   push eax
// 0061286f  c1e304               shl ebx, 4
// 00612872  53                   push ebx
// 00612873  52                   push edx
// 00612874  55                   push ebp
// 00612875  e876110000           call 0x6139f0
// 0061287a  83c410               add esp, 0x10
// 0061287d  89460c               mov dword ptr [esi + 0xc], eax
// 00612880  eb1a                 jmp 0x61289c
// 00612882  8b442438             mov eax, dword ptr [esp + 0x38]
// 00612886  50                   push eax
// 00612887  e844110000           call 0x6139d0
// 0061288c  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00612890  83c404               add esp, 4
// 00612893  89460c               mov dword ptr [esi + 0xc], eax
// 00612896  eb04                 jmp 0x61289c
// 00612898  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0061289c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006128a0  b801000000           mov eax, 1
// 006128a5  d3e0                 shl eax, cl
// 006128a7  8d58ff               lea ebx, [eax - 1]
// 006128aa  85db                 test ebx, ebx
// 006128ac  8944243c             mov dword ptr [esp + 0x3c], eax
// 006128b0  0f8c80000000         jl 0x612936
// 006128b6  8b542414             mov edx, dword ptr [esp + 0x14]
// 006128ba  8bcb                 mov ecx, ebx
// 006128bc  c1e105               shl ecx, 5
// 006128bf  8d7c1110             lea edi, [ecx + edx + 0x10]
// 006128c3  837ff800             cmp dword ptr [edi - 8], 0
// 006128c7  7463                 je 0x61292c
// 006128c9  57                   push edi
// 006128ca  56                   push esi
// 006128cb  e840fcffff           call 0x612510
// 006128d0  83c408               add esp, 8
// 006128d3  3de82f7c00           cmp eax, 0x7c2fe8
// 006128d8  c6460600             mov byte ptr [esi + 6], 0
// 006128dc  7539                 jne 0x612917
// 006128de  8b4708               mov eax, dword ptr [edi + 8]
// 006128e1  85c0                 test eax, eax
// 006128e3  7507                 jne 0x6128ec
// 006128e5  6814337c00           push 0x7c3314
// 006128ea  eb17                 jmp 0x612903
// 006128ec  83f803               cmp eax, 3
// 006128ef  751b                 jne 0x61290c
// 006128f1  dd07                 fld qword ptr [edi]
// 006128f3  d9c0                 fld st(0)
// 006128f5  dae9                 fucompp 
// 006128f7  dfe0                 fnstsw ax
// 006128f9  f6c444               test ah, 0x44
// 006128fc  7b0e                 jnp 0x61290c
// 006128fe  6800337c00           push 0x7c3300
// 00612903  55                   push ebp
// 00612904  e8f746fbff           call 0x5c7000
// 00612909  83c408               add esp, 8
// 0061290c  57                   push edi
// 0061290d  56                   push esi
// 0061290e  55                   push ebp
// 0061290f  e8bc010000           call 0x612ad0
// 00612914  83c40c               add esp, 0xc
// 00612917  8b4ff0               mov ecx, dword ptr [edi - 0x10]
// 0061291a  8908                 mov dword ptr [eax], ecx
// 0061291c  8b57f4               mov edx, dword ptr [edi - 0xc]
// 0061291f  895004               mov dword ptr [eax + 4], edx
// 00612922  8b4ff8               mov ecx, dword ptr [edi - 8]
// 00612925  894808               mov dword ptr [eax + 8], ecx
// 00612928  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0061292c  83eb01               sub ebx, 1
// 0061292f  83ef20               sub edi, 0x20
// 00612932  85db                 test ebx, ebx
// 00612934  7d8d                 jge 0x6128c3
// 00612936  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061293a  81f9b8327c00         cmp ecx, 0x7c32b8
// 00612940  7410                 je 0x612952
// 00612942  6a00                 push 0
// 00612944  c1e005               shl eax, 5
// 00612947  50                   push eax
// 00612948  51                   push ecx
// 00612949  55                   push ebp
// 0061294a  e8a1100000           call 0x6139f0
// 0061294f  83c410               add esp, 0x10
// 00612952  5f                   pop edi
// 00612953  5e                   pop esi
// 00612954  5d                   pop ebp
// 00612955  5b                   pop ebx
// 00612956  83c424               add esp, 0x24
// 00612959  c3                   ret 
// library lua-5.1/roc_ltable_cpp_e4929b9c47845379.cpp (function ?resize@@YAXPAUlua_State@@PAUTable@@HH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1 roc_ltable_cpp_e4929b9c47845379.cpp

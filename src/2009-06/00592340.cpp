// roc 2009-06 00592340  unit: seg_00590000  size: 413 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00592340
//
// 00592340  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 00592346  83ec08               sub esp, 8
// 00592349  53                   push ebx
// 0059234a  bb01000000           mov ebx, 1
// 0059234f  57                   push edi
// 00592350  3bc3                 cmp eax, ebx
// 00592352  7553                 jne 0x5923a7
// 00592354  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 0059235a  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0059235d  898638010000         mov dword ptr [esi + 0x138], eax
// 00592363  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00592366  89963c010000         mov dword ptr [esi + 0x13c], edx
// 0059236c  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0059236f  8b790c               mov edi, dword ptr [ecx + 0xc]
// 00592372  894140               mov dword ptr [ecx + 0x40], eax
// 00592375  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00592378  33d2                 xor edx, edx
// 0059237a  f7f7                 div edi
// 0059237c  895934               mov dword ptr [ecx + 0x34], ebx
// 0059237f  895938               mov dword ptr [ecx + 0x38], ebx
// 00592382  89593c               mov dword ptr [ecx + 0x3c], ebx
// 00592385  895944               mov dword ptr [ecx + 0x44], ebx
// 00592388  85d2                 test edx, edx
// 0059238a  7502                 jne 0x59238e
// 0059238c  8bd7                 mov edx, edi
// 0059238e  895148               mov dword ptr [ecx + 0x48], edx
// 00592391  5f                   pop edi
// 00592392  899e40010000         mov dword ptr [esi + 0x140], ebx
// 00592398  c7864401000000000000 mov dword ptr [esi + 0x144], 0
// 005923a2  5b                   pop ebx
// 005923a3  83c408               add esp, 8
// 005923a6  c3                   ret 
// 005923a7  33ff                 xor edi, edi
// 005923a9  3bc7                 cmp eax, edi
// 005923ab  7e05                 jle 0x5923b2
// 005923ad  83f804               cmp eax, 4
// 005923b0  7e27                 jle 0x5923d9
// 005923b2  8b0e                 mov ecx, dword ptr [esi]
// 005923b4  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 005923bb  8b16                 mov edx, dword ptr [esi]
// 005923bd  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 005923c3  894218               mov dword ptr [edx + 0x18], eax
// 005923c6  8b0e                 mov ecx, dword ptr [esi]
// 005923c8  c7411c04000000       mov dword ptr [ecx + 0x1c], 4
// 005923cf  8b16                 mov edx, dword ptr [esi]
// 005923d1  8b02                 mov eax, dword ptr [edx]
// 005923d3  56                   push esi
// 005923d4  ffd0                 call eax
// 005923d6  83c404               add esp, 4
// 005923d9  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 005923df  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005923e2  03c9                 add ecx, ecx
// 005923e4  03c9                 add ecx, ecx
// 005923e6  03c9                 add ecx, ecx
// 005923e8  51                   push ecx
// 005923e9  52                   push edx
// 005923ea  e8217affff           call 0x589e10
// 005923ef  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005923f2  898638010000         mov dword ptr [esi + 0x138], eax
// 005923f8  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 005923fe  03c0                 add eax, eax
// 00592400  03c0                 add eax, eax
// 00592402  03c0                 add eax, eax
// 00592404  50                   push eax
// 00592405  51                   push ecx
// 00592406  e8057affff           call 0x589e10
// 0059240b  83c410               add esp, 0x10
// 0059240e  39be24010000         cmp dword ptr [esi + 0x124], edi
// 00592414  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0059241a  89be40010000         mov dword ptr [esi + 0x140], edi
// 00592420  897c2408             mov dword ptr [esp + 8], edi
// 00592424  0f8ead000000         jle 0x5924d7
// 0059242a  8d9628010000         lea edx, [esi + 0x128]
// 00592430  8954240c             mov dword ptr [esp + 0xc], edx
// 00592434  55                   push ebp
// 00592435  8b442410             mov eax, dword ptr [esp + 0x10]
// 00592439  8b08                 mov ecx, dword ptr [eax]
// 0059243b  8b7908               mov edi, dword ptr [ecx + 8]
// 0059243e  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00592441  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00592444  0fafd7               imul edx, edi
// 00592447  8b690c               mov ebp, dword ptr [ecx + 0xc]
// 0059244a  895140               mov dword ptr [ecx + 0x40], edx
// 0059244d  33d2                 xor edx, edx
// 0059244f  f7f7                 div edi
// 00592451  8bdd                 mov ebx, ebp
// 00592453  0fafdf               imul ebx, edi
// 00592456  897934               mov dword ptr [ecx + 0x34], edi
// 00592459  896938               mov dword ptr [ecx + 0x38], ebp
// 0059245c  89593c               mov dword ptr [ecx + 0x3c], ebx
// 0059245f  85d2                 test edx, edx
// 00592461  7502                 jne 0x592465
// 00592463  8bd7                 mov edx, edi
// 00592465  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00592468  895144               mov dword ptr [ecx + 0x44], edx
// 0059246b  33d2                 xor edx, edx
// 0059246d  f7f5                 div ebp
// 0059246f  85d2                 test edx, edx
// 00592471  7502                 jne 0x592475
// 00592473  8bd5                 mov edx, ebp
// 00592475  895148               mov dword ptr [ecx + 0x48], edx
// 00592478  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 0059247e  8bfb                 mov edi, ebx
// 00592480  03c7                 add eax, edi
// 00592482  83f80a               cmp eax, 0xa
// 00592485  7e13                 jle 0x59249a
// 00592487  8b0e                 mov ecx, dword ptr [esi]
// 00592489  c741140d000000       mov dword ptr [ecx + 0x14], 0xd
// 00592490  8b16                 mov edx, dword ptr [esi]
// 00592492  8b02                 mov eax, dword ptr [edx]
// 00592494  56                   push esi
// 00592495  ffd0                 call eax
// 00592497  83c404               add esp, 4
// 0059249a  85ff                 test edi, edi
// 0059249c  7e1e                 jle 0x5924bc
// 0059249e  8bff                 mov edi, edi
// 005924a0  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 005924a6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005924aa  4f                   dec edi
// 005924ab  89948e44010000       mov dword ptr [esi + ecx*4 + 0x144], edx
// 005924b2  ff8640010000         inc dword ptr [esi + 0x140]
// 005924b8  85ff                 test edi, edi
// 005924ba  7fe4                 jg 0x5924a0
// 005924bc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005924c0  8344241004           add dword ptr [esp + 0x10], 4
// 005924c5  40                   inc eax
// 005924c6  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 005924cc  8944240c             mov dword ptr [esp + 0xc], eax
// 005924d0  0f8c5fffffff         jl 0x592435
// 005924d6  5d                   pop ebp
// 005924d7  5f                   pop edi
// 005924d8  5b                   pop ebx
// 005924d9  83c408               add esp, 8
// 005924dc  c3                   ret 
// library jpeg-6b/jdinput.c (function _per_scan_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c

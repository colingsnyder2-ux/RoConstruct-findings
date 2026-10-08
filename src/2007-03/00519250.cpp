// roc 2007-03 00519250  unit: seg_00510000  size: 418 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00519250
//
// 00519250  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 00519256  83ec08               sub esp, 8
// 00519259  53                   push ebx
// 0051925a  bb01000000           mov ebx, 1
// 0051925f  3bc3                 cmp eax, ebx
// 00519261  57                   push edi
// 00519262  7553                 jne 0x5192b7
// 00519264  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 0051926a  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0051926d  898638010000         mov dword ptr [esi + 0x138], eax
// 00519273  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00519276  89963c010000         mov dword ptr [esi + 0x13c], edx
// 0051927c  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0051927f  8b790c               mov edi, dword ptr [ecx + 0xc]
// 00519282  894140               mov dword ptr [ecx + 0x40], eax
// 00519285  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00519288  33d2                 xor edx, edx
// 0051928a  f7f7                 div edi
// 0051928c  895934               mov dword ptr [ecx + 0x34], ebx
// 0051928f  895938               mov dword ptr [ecx + 0x38], ebx
// 00519292  89593c               mov dword ptr [ecx + 0x3c], ebx
// 00519295  895944               mov dword ptr [ecx + 0x44], ebx
// 00519298  85d2                 test edx, edx
// 0051929a  7502                 jne 0x51929e
// 0051929c  8bd7                 mov edx, edi
// 0051929e  895148               mov dword ptr [ecx + 0x48], edx
// 005192a1  5f                   pop edi
// 005192a2  899e40010000         mov dword ptr [esi + 0x140], ebx
// 005192a8  c7864401000000000000 mov dword ptr [esi + 0x144], 0
// 005192b2  5b                   pop ebx
// 005192b3  83c408               add esp, 8
// 005192b6  c3                   ret 
// 005192b7  33ff                 xor edi, edi
// 005192b9  3bc7                 cmp eax, edi
// 005192bb  7e05                 jle 0x5192c2
// 005192bd  83f804               cmp eax, 4
// 005192c0  7e27                 jle 0x5192e9
// 005192c2  8b0e                 mov ecx, dword ptr [esi]
// 005192c4  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 005192cb  8b16                 mov edx, dword ptr [esi]
// 005192cd  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 005192d3  894218               mov dword ptr [edx + 0x18], eax
// 005192d6  8b0e                 mov ecx, dword ptr [esi]
// 005192d8  c7411c04000000       mov dword ptr [ecx + 0x1c], 4
// 005192df  8b16                 mov edx, dword ptr [esi]
// 005192e1  8b02                 mov eax, dword ptr [edx]
// 005192e3  56                   push esi
// 005192e4  ffd0                 call eax
// 005192e6  83c404               add esp, 4
// 005192e9  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 005192ef  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005192f2  03c9                 add ecx, ecx
// 005192f4  03c9                 add ecx, ecx
// 005192f6  03c9                 add ecx, ecx
// 005192f8  51                   push ecx
// 005192f9  52                   push edx
// 005192fa  e811b3ffff           call 0x514610
// 005192ff  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00519302  898638010000         mov dword ptr [esi + 0x138], eax
// 00519308  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 0051930e  03c0                 add eax, eax
// 00519310  03c0                 add eax, eax
// 00519312  03c0                 add eax, eax
// 00519314  50                   push eax
// 00519315  51                   push ecx
// 00519316  e8f5b2ffff           call 0x514610
// 0051931b  83c410               add esp, 0x10
// 0051931e  39be24010000         cmp dword ptr [esi + 0x124], edi
// 00519324  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0051932a  89be40010000         mov dword ptr [esi + 0x140], edi
// 00519330  897c2408             mov dword ptr [esp + 8], edi
// 00519334  0f8eb2000000         jle 0x5193ec
// 0051933a  8d9628010000         lea edx, [esi + 0x128]
// 00519340  8954240c             mov dword ptr [esp + 0xc], edx
// 00519344  55                   push ebp
// 00519345  8b442410             mov eax, dword ptr [esp + 0x10]
// 00519349  8b08                 mov ecx, dword ptr [eax]
// 0051934b  8b7908               mov edi, dword ptr [ecx + 8]
// 0051934e  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00519351  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00519354  0fafd7               imul edx, edi
// 00519357  8b690c               mov ebp, dword ptr [ecx + 0xc]
// 0051935a  895140               mov dword ptr [ecx + 0x40], edx
// 0051935d  33d2                 xor edx, edx
// 0051935f  f7f7                 div edi
// 00519361  8bdd                 mov ebx, ebp
// 00519363  0fafdf               imul ebx, edi
// 00519366  897934               mov dword ptr [ecx + 0x34], edi
// 00519369  896938               mov dword ptr [ecx + 0x38], ebp
// 0051936c  89593c               mov dword ptr [ecx + 0x3c], ebx
// 0051936f  85d2                 test edx, edx
// 00519371  7502                 jne 0x519375
// 00519373  8bd7                 mov edx, edi
// 00519375  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00519378  895144               mov dword ptr [ecx + 0x44], edx
// 0051937b  33d2                 xor edx, edx
// 0051937d  f7f5                 div ebp
// 0051937f  85d2                 test edx, edx
// 00519381  7502                 jne 0x519385
// 00519383  8bd5                 mov edx, ebp
// 00519385  895148               mov dword ptr [ecx + 0x48], edx
// 00519388  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 0051938e  8bfb                 mov edi, ebx
// 00519390  03c7                 add eax, edi
// 00519392  83f80a               cmp eax, 0xa
// 00519395  7e13                 jle 0x5193aa
// 00519397  8b0e                 mov ecx, dword ptr [esi]
// 00519399  c741140d000000       mov dword ptr [ecx + 0x14], 0xd
// 005193a0  8b16                 mov edx, dword ptr [esi]
// 005193a2  8b02                 mov eax, dword ptr [edx]
// 005193a4  56                   push esi
// 005193a5  ffd0                 call eax
// 005193a7  83c404               add esp, 4
// 005193aa  85ff                 test edi, edi
// 005193ac  7e21                 jle 0x5193cf
// 005193ae  8bff                 mov edi, edi
// 005193b0  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 005193b6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005193ba  83ef01               sub edi, 1
// 005193bd  89948e44010000       mov dword ptr [esi + ecx*4 + 0x144], edx
// 005193c4  83864001000001       add dword ptr [esi + 0x140], 1
// 005193cb  85ff                 test edi, edi
// 005193cd  7fe1                 jg 0x5193b0
// 005193cf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005193d3  8344241004           add dword ptr [esp + 0x10], 4
// 005193d8  83c001               add eax, 1
// 005193db  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 005193e1  8944240c             mov dword ptr [esp + 0xc], eax
// 005193e5  0f8c5affffff         jl 0x519345
// 005193eb  5d                   pop ebp
// 005193ec  5f                   pop edi
// 005193ed  5b                   pop ebx
// 005193ee  83c408               add esp, 8
// 005193f1  c3                   ret 
// library jpeg-6b/jdinput.c (function _per_scan_setup)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c

// roc 2009-12 00805290  unit: CXTPCommandBar  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00805290
//
// 00805290  56                   push esi
// 00805291  8bf1                 mov esi, ecx
// 00805293  e898ebfeff           call 0x7f3e30
// 00805298  8b442408             mov eax, dword ptr [esp + 8]
// 0080529c  3dcacc0000           cmp eax, 0xccca
// 008052a1  755a                 jne 0x8052fd
// 008052a3  8bce                 mov ecx, esi
// 008052a5  e826f2ffff           call 0x8044d0
// 008052aa  8bc8                 mov ecx, eax
// 008052ac  e8bf080100           call 0x815b70
// 008052b1  8b4810               mov ecx, dword ptr [eax + 0x10]
// 008052b4  85c9                 test ecx, ecx
// 008052b6  7e17                 jle 0x8052cf
// 008052b8  83c1ff               add ecx, -1
// 008052bb  780d                 js 0x8052ca
// 008052bd  3b4810               cmp ecx, dword ptr [eax + 0x10]
// 008052c0  7d08                 jge 0x8052ca
// 008052c2  8b400c               mov eax, dword ptr [eax + 0xc]
// 008052c5  8b0c88               mov ecx, dword ptr [eax + ecx*4]
// 008052c8  eb07                 jmp 0x8052d1
// 008052ca  e83de8feff           call 0x7f3b0c
// 008052cf  33c9                 xor ecx, ecx
// 008052d1  3bce                 cmp ecx, esi
// 008052d3  0f85db000000         jne 0x8053b4
// 008052d9  8bce                 mov ecx, esi
// 008052db  e8a0f00000           call 0x814380
// 008052e0  85c0                 test eax, eax
// 008052e2  0f85cc000000         jne 0x8053b4
// 008052e8  6a01                 push 1
// 008052ea  56                   push esi
// 008052eb  8bce                 mov ecx, esi
// 008052ed  e8def1ffff           call 0x8044d0
// 008052f2  8bc8                 mov ecx, eax
// 008052f4  e8e71b0100           call 0x816ee0
// 008052f9  5e                   pop esi
// 008052fa  c20400               ret 4
// 008052fd  3d43cd0a00           cmp eax, 0xacd43
// 00805302  750f                 jne 0x805313
// 00805304  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0080530a  e831830800           call 0x88d640
// 0080530f  5e                   pop esi
// 00805310  c20400               ret 4
// 00805313  3d5fb60100           cmp eax, 0x1b65f
// 00805318  753b                 jne 0x805355
// 0080531a  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 00805321  0f858d000000         jne 0x8053b4
// 00805327  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0080532a  50                   push eax
// 0080532b  51                   push ecx
// 0080532c  ff15d0cb9800         call dword ptr [0x98cbd0]
// 00805332  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00805338  83f8ff               cmp eax, -1
// 0080533b  7477                 je 0x8053b4
// 0080533d  50                   push eax
// 0080533e  8bce                 mov ecx, esi
// 00805340  e81bffffff           call 0x805260
// 00805345  8b10                 mov edx, dword ptr [eax]
// 00805347  8bc8                 mov ecx, eax
// 00805349  8b8200010000         mov eax, dword ptr [edx + 0x100]
// 0080534f  ffd0                 call eax
// 00805351  5e                   pop esi
// 00805352  c20400               ret 4
// 00805355  3d60b60100           cmp eax, 0x1b660
// 0080535a  7558                 jne 0x8053b4
// 0080535c  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 00805363  754f                 jne 0x8053b4
// 00805365  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00805368  50                   push eax
// 00805369  51                   push ecx
// 0080536a  ff15d0cb9800         call dword ptr [0x98cbd0]
// 00805370  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00805376  83f9ff               cmp ecx, -1
// 00805379  7439                 je 0x8053b4
// 0080537b  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00805381  3bc1                 cmp eax, ecx
// 00805383  752f                 jne 0x8053b4
// 00805385  50                   push eax
// 00805386  8bce                 mov ecx, esi
// 00805388  e8d3feffff           call 0x805260
// 0080538d  50                   push eax
// 0080538e  e82d570300           call 0x83aac0
// 00805393  50                   push eax
// 00805394  e8a5e8feff           call 0x7f3c3e
// 00805399  8bf0                 mov esi, eax
// 0080539b  83c408               add esp, 8
// 0080539e  85f6                 test esi, esi
// 008053a0  7412                 je 0x8053b4
// 008053a2  8bce                 mov ecx, esi
// 008053a4  e84715ffff           call 0x7f68f0
// 008053a9  85c0                 test eax, eax
// 008053ab  7407                 je 0x8053b4
// 008053ad  8bce                 mov ecx, esi
// 008053af  e86c5a0300           call 0x83ae20
// 008053b4  5e                   pop esi
// 008053b5  c20400               ret 4
// copied from an identical function in another client (function ?OnTimer@CXTPCommandBar@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp
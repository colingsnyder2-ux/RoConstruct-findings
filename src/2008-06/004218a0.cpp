// roc 2008-06 004218a0  unit: RBX::VInstance::?$MarshaledListener  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004218a0
//
// 004218a0  83ec18               sub esp, 0x18
// 004218a3  8b4114               mov eax, dword ptr [ecx + 0x14]
// 004218a6  55                   push ebp
// 004218a7  8b2d90288000         mov ebp, dword ptr [0x802890]
// 004218ad  56                   push esi
// 004218ae  8d7104               lea esi, [ecx + 4]
// 004218b1  894c240c             mov dword ptr [esp + 0xc], ecx
// 004218b5  89442408             mov dword ptr [esp + 8], eax
// 004218b9  39460c               cmp dword ptr [esi + 0xc], eax
// 004218bc  7602                 jbe 0x4218c0
// 004218be  ffd5                 call ebp
// 004218c0  8b06                 mov eax, dword ptr [esi]
// 004218c2  53                   push ebx
// 004218c3  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 004218c6  57                   push edi
// 004218c7  89442418             mov dword ptr [esp + 0x18], eax
// 004218cb  395e0c               cmp dword ptr [esi + 0xc], ebx
// 004218ce  7602                 jbe 0x4218d2
// 004218d0  ffd5                 call ebp
// 004218d2  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004218d5  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 004218d8  7602                 jbe 0x4218dc
// 004218da  ffd5                 call ebp
// 004218dc  8b06                 mov eax, dword ptr [esi]
// 004218de  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 004218e2  897c2424             mov dword ptr [esp + 0x24], edi
// 004218e6  3bfb                 cmp edi, ebx
// 004218e8  7411                 je 0x4218fb
// 004218ea  8d9b00000000         lea ebx, [ebx]
// 004218f0  392f                 cmp dword ptr [edi], ebp
// 004218f2  7407                 je 0x4218fb
// 004218f4  83c704               add edi, 4
// 004218f7  3bfb                 cmp edi, ebx
// 004218f9  75f5                 jne 0x4218f0
// 004218fb  85c0                 test eax, eax
// 004218fd  7406                 je 0x421905
// 004218ff  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00421903  7406                 je 0x42190b
// 00421905  ff1590288000         call dword ptr [0x802890]
// 0042190b  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0042190f  5f                   pop edi
// 00421910  5b                   pop ebx
// 00421911  7518                 jne 0x42192b
// 00421913  8d4c2424             lea ecx, [esp + 0x24]
// 00421917  51                   push ecx
// 00421918  8bce                 mov ecx, esi
// 0042191a  e881faffff           call 0x4213a0
// 0042191f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00421923  8b11                 mov edx, dword ptr [ecx]
// 00421925  8b4204               mov eax, dword ptr [edx + 4]
// 00421928  55                   push ebp
// 00421929  ffd0                 call eax
// 0042192b  5e                   pop esi
// 0042192c  5d                   pop ebp
// 0042192d  83c418               add esp, 0x18
// 00421930  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ?addListener@?$Notifier@VRunService@RBX@@VHeartbeat@2@@RBX@@QBEXPAV?$Listener@VRunService@RBX@@VHeartbeat@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp

// roc 2009-06 005693f0  unit: RBX::RbxG3D::RenderScene  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005693f0
//
// 005693f0  83ec50               sub esp, 0x50
// 005693f3  53                   push ebx
// 005693f4  55                   push ebp
// 005693f5  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 005693f9  56                   push esi
// 005693fa  8b742464             mov esi, dword ptr [esp + 0x64]
// 005693fe  57                   push edi
// 005693ff  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 00569403  57                   push edi
// 00569404  56                   push esi
// 00569405  ffd5                 call ebp
// 00569407  83c408               add esp, 8
// 0056940a  84c0                 test al, al
// 0056940c  7422                 je 0x569430
// 0056940e  3bf7                 cmp esi, edi
// 00569410  741e                 je 0x569430
// 00569412  56                   push esi
// 00569413  8d4c2414             lea ecx, [esp + 0x14]
// 00569417  e8a45ef3ff           call 0x49f2c0
// 0056941c  57                   push edi
// 0056941d  8bce                 mov ecx, esi
// 0056941f  e8ec4bf3ff           call 0x49e010
// 00569424  8d442410             lea eax, [esp + 0x10]
// 00569428  50                   push eax
// 00569429  8bcf                 mov ecx, edi
// 0056942b  e8e04bf3ff           call 0x49e010
// 00569430  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 00569434  56                   push esi
// 00569435  53                   push ebx
// 00569436  ffd5                 call ebp
// 00569438  83c408               add esp, 8
// 0056943b  84c0                 test al, al
// 0056943d  7422                 je 0x569461
// 0056943f  3bde                 cmp ebx, esi
// 00569441  741e                 je 0x569461
// 00569443  53                   push ebx
// 00569444  8d4c2414             lea ecx, [esp + 0x14]
// 00569448  e8735ef3ff           call 0x49f2c0
// 0056944d  56                   push esi
// 0056944e  8bcb                 mov ecx, ebx
// 00569450  e8bb4bf3ff           call 0x49e010
// 00569455  8d4c2410             lea ecx, [esp + 0x10]
// 00569459  51                   push ecx
// 0056945a  8bce                 mov ecx, esi
// 0056945c  e8af4bf3ff           call 0x49e010
// 00569461  57                   push edi
// 00569462  56                   push esi
// 00569463  ffd5                 call ebp
// 00569465  83c408               add esp, 8
// 00569468  84c0                 test al, al
// 0056946a  7422                 je 0x56948e
// 0056946c  3bf7                 cmp esi, edi
// 0056946e  741e                 je 0x56948e
// 00569470  56                   push esi
// 00569471  8d4c2414             lea ecx, [esp + 0x14]
// 00569475  e8465ef3ff           call 0x49f2c0
// 0056947a  57                   push edi
// 0056947b  8bce                 mov ecx, esi
// 0056947d  e88e4bf3ff           call 0x49e010
// 00569482  8d542410             lea edx, [esp + 0x10]
// 00569486  52                   push edx
// 00569487  8bcf                 mov ecx, edi
// 00569489  e8824bf3ff           call 0x49e010
// 0056948e  5f                   pop edi
// 0056948f  5e                   pop esi
// 00569490  5d                   pop ebp
// 00569491  5b                   pop ebx
// 00569492  83c450               add esp, 0x50
// 00569495  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Med3@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp

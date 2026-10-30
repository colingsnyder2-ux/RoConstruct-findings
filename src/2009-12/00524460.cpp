// roc 2009-12 00524460  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00524460
//
// 00524460  55                   push ebp
// 00524461  8bec                 mov ebp, esp
// 00524463  83ec0c               sub esp, 0xc
// 00524466  8b4508               mov eax, dword ptr [ebp + 8]
// 00524469  8945f8               mov dword ptr [ebp - 8], eax
// 0052446c  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0052446f  894dfc               mov dword ptr [ebp - 4], ecx
// 00524472  837dfc00             cmp dword ptr [ebp - 4], 0
// 00524476  740f                 je 0x524487
// 00524478  6a01                 push 1
// 0052447a  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0052447d  e87efdffff           call 0x524200
// 00524482  8945f4               mov dword ptr [ebp - 0xc], eax
// 00524485  eb07                 jmp 0x52448e
// 00524487  c745f400000000       mov dword ptr [ebp - 0xc], 0
// 0052448e  8be5                 mov esp, ebp
// 00524490  5d                   pop ebp
// 00524491  c3                   ret 
// copied from an identical function in another client (function ??$checked_delete@Uchain_impl@?$chain_base@V?$chain@Uinput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@@boost@@YAXPAUchain_impl@?$chain_base@V?$chain@Uinput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_boost_finish_239abb6d60853838.cpp
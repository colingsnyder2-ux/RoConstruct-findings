// roc 2012-06 008333b0  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008333b0
//
// 008333b0  53                   push ebx
// 008333b1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008333b5  85db                 test ebx, ebx
// 008333b7  7c4a                 jl 0x833403
// 008333b9  56                   push esi
// 008333ba  8b742410             mov esi, dword ptr [esp + 0x10]
// 008333be  8d860f270000         lea eax, [esi + 0x270f]
// 008333c4  57                   push edi
// 008333c5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008333c9  3d0f270000           cmp eax, 0x270f
// 008333ce  770d                 ja 0x8333dd
// 008333d0  57                   push edi
// 008333d1  e81ae7ffff           call 0x831af0
// 008333d6  83c404               add esp, 4
// 008333d9  8d740601             lea esi, [esi + eax + 1]
// 008333dd  6a00                 push 0
// 008333df  56                   push esi
// 008333e0  57                   push edi
// 008333e1  e8faefffff           call 0x8323e0
// 008333e6  53                   push ebx
// 008333e7  56                   push esi
// 008333e8  57                   push edi
// 008333e9  e872f2ffff           call 0x832660
// 008333ee  53                   push ebx
// 008333ef  57                   push edi
// 008333f0  e8dbecffff           call 0x8320d0
// 008333f5  6a00                 push 0
// 008333f7  56                   push esi
// 008333f8  57                   push edi
// 008333f9  e862f2ffff           call 0x832660
// 008333fe  83c42c               add esp, 0x2c
// 00833401  5f                   pop edi
// 00833402  5e                   pop esi
// 00833403  5b                   pop ebx
// 00833404  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_unref)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c

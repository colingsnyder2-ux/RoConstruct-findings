// roc 2007-03 005e1910  unit: seg_005e0000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e1910
//
// 005e1910  6aff                 push -1
// 005e1912  686bc37500           push 0x75c36b
// 005e1917  64a100000000         mov eax, dword ptr fs:[0]
// 005e191d  50                   push eax
// 005e191e  64892500000000       mov dword ptr fs:[0], esp
// 005e1925  51                   push ecx
// 005e1926  56                   push esi
// 005e1927  6a28                 push 0x28
// 005e1929  8bf1                 mov esi, ecx
// 005e192b  e8d8c70300           call 0x61e108
// 005e1930  83c404               add esp, 4
// 005e1933  89442404             mov dword ptr [esp + 4], eax
// 005e1937  85c0                 test eax, eax
// 005e1939  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e1941  741f                 je 0x5e1962
// 005e1943  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005e1947  56                   push esi
// 005e1948  51                   push ecx
// 005e1949  8bc8                 mov ecx, eax
// 005e194b  e860f4ffff           call 0x5e0db0
// 005e1950  5e                   pop esi
// 005e1951  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e1955  64890d00000000       mov dword ptr fs:[0], ecx
// 005e195c  83c410               add esp, 0x10
// 005e195f  c20400               ret 4
// 005e1962  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e1966  33c0                 xor eax, eax
// 005e1968  5e                   pop esi
// 005e1969  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1970  83c410               add esp, 0x10
// 005e1973  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp

// roc 2008-06 005e2100  unit: RBX::Lighting  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e2100
//
// 005e2100  56                   push esi
// 005e2101  8bf1                 mov esi, ecx
// 005e2103  8b86d4020000         mov eax, dword ptr [esi + 0x2d4]
// 005e2109  8d8ed4020000         lea ecx, [esi + 0x2d4]
// 005e210f  3b442408             cmp eax, dword ptr [esp + 8]
// 005e2113  753a                 jne 0x5e214f
// 005e2115  e8664de7ff           call 0x456e80
// 005e211a  8d4614               lea eax, [esi + 0x14]
// 005e211d  50                   push eax
// 005e211e  b98ca89700           mov ecx, 0x97a88c
// 005e2123  e8f894f8ff           call 0x56b620
// 005e2128  85c0                 test eax, eax
// 005e212a  740f                 je 0x5e213b
// 005e212c  6a01                 push 1
// 005e212e  8d4c240c             lea ecx, [esp + 0xc]
// 005e2132  51                   push ecx
// 005e2133  8d4810               lea ecx, [eax + 0x10]
// 005e2136  e8c5fdffff           call 0x5e1f00
// 005e213b  56                   push esi
// 005e213c  e87f30e8ff           call 0x4651c0
// 005e2141  83c404               add esp, 4
// 005e2144  85c0                 test eax, eax
// 005e2146  7407                 je 0x5e214f
// 005e2148  8bc8                 mov ecx, eax
// 005e214a  e80132f7ff           call 0x555350
// 005e214f  5e                   pop esi
// 005e2150  c20400               ret 4
// library rbxgs/roc_unit_00fd3441d97d4838.cpp (function ?onChildRemoving@Lighting@RBX@@MAEXPAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_00fd3441d97d4838.cpp

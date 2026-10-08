// roc 2008-06 005df7e0  unit: RBX::Lighting  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005df7e0
//
// 005df7e0  83793000             cmp dword ptr [ecx + 0x30], 0
// 005df7e4  742c                 je 0x5df812
// 005df7e6  8a442404             mov al, byte ptr [esp + 4]
// 005df7ea  6a01                 push 1
// 005df7ec  6a00                 push 0
// 005df7ee  8d54240c             lea edx, [esp + 0xc]
// 005df7f2  52                   push edx
// 005df7f3  83c11c               add ecx, 0x1c
// 005df7f6  88442410             mov byte ptr [esp + 0x10], al
// 005df7fa  ff1598248000         call dword ptr [0x802498]
// 005df800  8b15e8238000         mov edx, dword ptr [0x8023e8]
// 005df806  33c9                 xor ecx, ecx
// 005df808  3b02                 cmp eax, dword ptr [edx]
// 005df80a  0f95c1               setne cl
// 005df80d  8ac1                 mov al, cl
// 005df80f  c20400               ret 4
// 005df812  80793900             cmp byte ptr [ecx + 0x39], 0
// 005df816  7418                 je 0x5df830
// 005df818  0fbe442404           movsx eax, byte ptr [esp + 4]
// 005df81d  50                   push eax
// 005df81e  ff1584278000         call dword ptr [0x802784]
// 005df824  83c404               add esp, 4
// 005df827  f7d8                 neg eax
// 005df829  1bc0                 sbb eax, eax
// 005df82b  f7d8                 neg eax
// 005df82d  c20400               ret 4
// 005df830  32c0                 xor al, al
// 005df832  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?is_dropped@?$char_separator@DU?$char_traits@D@std@@@boost@@ABE_ND@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp

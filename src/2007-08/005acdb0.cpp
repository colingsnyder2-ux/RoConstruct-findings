// roc 2007-08 005acdb0  unit: RBX::Lighting  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005acdb0
//
// 005acdb0  83793000             cmp dword ptr [ecx + 0x30], 0
// 005acdb4  742c                 je 0x5acde2
// 005acdb6  8a442404             mov al, byte ptr [esp + 4]
// 005acdba  6a01                 push 1
// 005acdbc  6a00                 push 0
// 005acdbe  8d54240c             lea edx, [esp + 0xc]
// 005acdc2  52                   push edx
// 005acdc3  83c11c               add ecx, 0x1c
// 005acdc6  88442410             mov byte ptr [esp + 0x10], al
// 005acdca  ff157ce57700         call dword ptr [0x77e57c]
// 005acdd0  8b153ce67700         mov edx, dword ptr [0x77e63c]
// 005acdd6  33c9                 xor ecx, ecx
// 005acdd8  3b02                 cmp eax, dword ptr [edx]
// 005acdda  0f95c1               setne cl
// 005acddd  8ac1                 mov al, cl
// 005acddf  c20400               ret 4
// 005acde2  80793900             cmp byte ptr [ecx + 0x39], 0
// 005acde6  7418                 je 0x5ace00
// 005acde8  0fbe442404           movsx eax, byte ptr [esp + 4]
// 005acded  50                   push eax
// 005acdee  ff159ce97700         call dword ptr [0x77e99c]
// 005acdf4  83c404               add esp, 4
// 005acdf7  f7d8                 neg eax
// 005acdf9  1bc0                 sbb eax, eax
// 005acdfb  f7d8                 neg eax
// 005acdfd  c20400               ret 4
// 005ace00  32c0                 xor al, al
// 005ace02  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?is_dropped@?$char_separator@DU?$char_traits@D@std@@@boost@@ABE_ND@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp

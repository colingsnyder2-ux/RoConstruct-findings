// roc 2008-06 005df780  unit: RBX::Lighting  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005df780
//
// 005df780  83791400             cmp dword ptr [ecx + 0x14], 0
// 005df784  7429                 je 0x5df7af
// 005df786  8a442404             mov al, byte ptr [esp + 4]
// 005df78a  6a01                 push 1
// 005df78c  6a00                 push 0
// 005df78e  8d54240c             lea edx, [esp + 0xc]
// 005df792  52                   push edx
// 005df793  88442410             mov byte ptr [esp + 0x10], al
// 005df797  ff1598248000         call dword ptr [0x802498]
// 005df79d  8b15e8238000         mov edx, dword ptr [0x8023e8]
// 005df7a3  33c9                 xor ecx, ecx
// 005df7a5  3b02                 cmp eax, dword ptr [edx]
// 005df7a7  0f95c1               setne cl
// 005df7aa  8ac1                 mov al, cl
// 005df7ac  c20400               ret 4
// 005df7af  80793800             cmp byte ptr [ecx + 0x38], 0
// 005df7b3  7418                 je 0x5df7cd
// 005df7b5  0fbe442404           movsx eax, byte ptr [esp + 4]
// 005df7ba  50                   push eax
// 005df7bb  ff1520278000         call dword ptr [0x802720]
// 005df7c1  83c404               add esp, 4
// 005df7c4  f7d8                 neg eax
// 005df7c6  1bc0                 sbb eax, eax
// 005df7c8  f7d8                 neg eax
// 005df7ca  c20400               ret 4
// 005df7cd  32c0                 xor al, al
// 005df7cf  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?is_kept@?$char_separator@DU?$char_traits@D@std@@@boost@@ABE_ND@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp

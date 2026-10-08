// roc 2007-08 005acd50  unit: RBX::Lighting  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005acd50
//
// 005acd50  83791400             cmp dword ptr [ecx + 0x14], 0
// 005acd54  7429                 je 0x5acd7f
// 005acd56  8a442404             mov al, byte ptr [esp + 4]
// 005acd5a  6a01                 push 1
// 005acd5c  6a00                 push 0
// 005acd5e  8d54240c             lea edx, [esp + 0xc]
// 005acd62  52                   push edx
// 005acd63  88442410             mov byte ptr [esp + 0x10], al
// 005acd67  ff157ce57700         call dword ptr [0x77e57c]
// 005acd6d  8b153ce67700         mov edx, dword ptr [0x77e63c]
// 005acd73  33c9                 xor ecx, ecx
// 005acd75  3b02                 cmp eax, dword ptr [edx]
// 005acd77  0f95c1               setne cl
// 005acd7a  8ac1                 mov al, cl
// 005acd7c  c20400               ret 4
// 005acd7f  80793800             cmp byte ptr [ecx + 0x38], 0
// 005acd83  7418                 je 0x5acd9d
// 005acd85  0fbe442404           movsx eax, byte ptr [esp + 4]
// 005acd8a  50                   push eax
// 005acd8b  ff154ce87700         call dword ptr [0x77e84c]
// 005acd91  83c404               add esp, 4
// 005acd94  f7d8                 neg eax
// 005acd96  1bc0                 sbb eax, eax
// 005acd98  f7d8                 neg eax
// 005acd9a  c20400               ret 4
// 005acd9d  32c0                 xor al, al
// 005acd9f  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?is_kept@?$char_separator@DU?$char_traits@D@std@@@boost@@ABE_ND@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp

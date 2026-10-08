// roc 2007-03 00592100  unit: seg_00590000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00592100
//
// 00592100  83791400             cmp dword ptr [ecx + 0x14], 0
// 00592104  7429                 je 0x59212f
// 00592106  8a442404             mov al, byte ptr [esp + 4]
// 0059210a  6a01                 push 1
// 0059210c  6a00                 push 0
// 0059210e  8d54240c             lea edx, [esp + 0xc]
// 00592112  52                   push edx
// 00592113  88442410             mov byte ptr [esp + 0x10], al
// 00592117  ff1540e67700         call dword ptr [0x77e640]
// 0059211d  8b15fce67700         mov edx, dword ptr [0x77e6fc]
// 00592123  33c9                 xor ecx, ecx
// 00592125  3b02                 cmp eax, dword ptr [edx]
// 00592127  0f95c1               setne cl
// 0059212a  8ac1                 mov al, cl
// 0059212c  c20400               ret 4
// 0059212f  80793800             cmp byte ptr [ecx + 0x38], 0
// 00592133  7418                 je 0x59214d
// 00592135  0fbe442404           movsx eax, byte ptr [esp + 4]
// 0059213a  50                   push eax
// 0059213b  ff1588e87700         call dword ptr [0x77e888]
// 00592141  83c404               add esp, 4
// 00592144  f7d8                 neg eax
// 00592146  1bc0                 sbb eax, eax
// 00592148  f7d8                 neg eax
// 0059214a  c20400               ret 4
// 0059214d  32c0                 xor al, al
// 0059214f  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?is_kept@?$char_separator@DU?$char_traits@D@std@@@boost@@ABE_ND@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp

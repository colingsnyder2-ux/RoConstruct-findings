// roc 2007-03 00592160  unit: seg_00590000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00592160
//
// 00592160  83793000             cmp dword ptr [ecx + 0x30], 0
// 00592164  742c                 je 0x592192
// 00592166  8a442404             mov al, byte ptr [esp + 4]
// 0059216a  6a01                 push 1
// 0059216c  6a00                 push 0
// 0059216e  8d54240c             lea edx, [esp + 0xc]
// 00592172  52                   push edx
// 00592173  83c11c               add ecx, 0x1c
// 00592176  88442410             mov byte ptr [esp + 0x10], al
// 0059217a  ff1540e67700         call dword ptr [0x77e640]
// 00592180  8b15fce67700         mov edx, dword ptr [0x77e6fc]
// 00592186  33c9                 xor ecx, ecx
// 00592188  3b02                 cmp eax, dword ptr [edx]
// 0059218a  0f95c1               setne cl
// 0059218d  8ac1                 mov al, cl
// 0059218f  c20400               ret 4
// 00592192  80793900             cmp byte ptr [ecx + 0x39], 0
// 00592196  7418                 je 0x5921b0
// 00592198  0fbe442404           movsx eax, byte ptr [esp + 4]
// 0059219d  50                   push eax
// 0059219e  ff159ce97700         call dword ptr [0x77e99c]
// 005921a4  83c404               add esp, 4
// 005921a7  f7d8                 neg eax
// 005921a9  1bc0                 sbb eax, eax
// 005921ab  f7d8                 neg eax
// 005921ad  c20400               ret 4
// 005921b0  32c0                 xor al, al
// 005921b2  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?is_dropped@?$char_separator@DU?$char_traits@D@std@@@boost@@ABE_ND@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp

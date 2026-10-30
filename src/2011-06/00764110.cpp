// from server: 100% by auto
// roc 2011-06 00764110  unit: seg_00760000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00764110
//
// 00764110  56                   push esi
// 00764111  8b742408             mov esi, dword ptr [esp + 8]
// 00764115  57                   push edi
// 00764116  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0076411a  57                   push edi
// 0076411b  56                   push esi
// 0076411c  e82fe4ffff           call 0x762550
// 00764121  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00764125  83c408               add esp, 8
// 00764128  3bc1                 cmp eax, ecx
// 0076412a  7431                 je 0x76415d
// 0076412c  53                   push ebx
// 0076412d  51                   push ecx
// 0076412e  56                   push esi
// 0076412f  e83ce4ffff           call 0x762570
// 00764134  57                   push edi
// 00764135  56                   push esi
// 00764136  8bd8                 mov ebx, eax
// 00764138  e813e4ffff           call 0x762550
// 0076413d  50                   push eax
// 0076413e  56                   push esi
// 0076413f  e82ce4ffff           call 0x762570
// 00764144  50                   push eax
// 00764145  53                   push ebx
// 00764146  68b065ab00           push 0xab65b0
// 0076414b  56                   push esi
// 0076414c  e8efe8ffff           call 0x762a40
// 00764151  50                   push eax
// 00764152  57                   push edi
// 00764153  56                   push esi
// 00764154  e847feffff           call 0x763fa0
// 00764159  83c434               add esp, 0x34
// 0076415c  5b                   pop ebx
// 0076415d  5f                   pop edi
// 0076415e  5e                   pop esi
// 0076415f  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checktype)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c

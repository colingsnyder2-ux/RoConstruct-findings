// from server: 100% by auto
// roc 2009-06 006baea0  unit: RBX::UniversalTool  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006baea0
//
// 006baea0  53                   push ebx
// 006baea1  55                   push ebp
// 006baea2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006baea6  56                   push esi
// 006baea7  8b742410             mov esi, dword ptr [esp + 0x10]
// 006baeab  57                   push edi
// 006baeac  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006baeb0  85ed                 test ebp, ebp
// 006baeb2  0f8498000000         je 0x6baf50
// 006baeb8  33db                 xor ebx, ebx
// 006baeba  8bc7                 mov eax, edi
// 006baebc  391f                 cmp dword ptr [edi], ebx
// 006baebe  7409                 je 0x6baec9
// 006baec0  83c008               add eax, 8
// 006baec3  43                   inc ebx
// 006baec4  833800               cmp dword ptr [eax], 0
// 006baec7  75f7                 jne 0x6baec0
// 006baec9  6a01                 push 1
// 006baecb  68f0af8e00           push 0x8eaff0
// 006baed0  68f0d8ffff           push 0xffffd8f0
// 006baed5  56                   push esi
// 006baed6  e8e5f4ffff           call 0x6ba3c0
// 006baedb  55                   push ebp
// 006baedc  6aff                 push -1
// 006baede  56                   push esi
// 006baedf  e8ece6ffff           call 0x6b95d0
// 006baee4  6aff                 push -1
// 006baee6  56                   push esi
// 006baee7  e884e0ffff           call 0x6b8f70
// 006baeec  83c424               add esp, 0x24
// 006baeef  83f805               cmp eax, 5
// 006baef2  743f                 je 0x6baf33
// 006baef4  6afe                 push -2
// 006baef6  56                   push esi
// 006baef7  e894deffff           call 0x6b8d90
// 006baefc  53                   push ebx
// 006baefd  55                   push ebp
// 006baefe  68eed8ffff           push 0xffffd8ee
// 006baf03  56                   push esi
// 006baf04  e8b7f4ffff           call 0x6ba3c0
// 006baf09  83c418               add esp, 0x18
// 006baf0c  85c0                 test eax, eax
// 006baf0e  740f                 je 0x6baf1f
// 006baf10  55                   push ebp
// 006baf11  68d0af8e00           push 0x8eafd0
// 006baf16  56                   push esi
// 006baf17  e824f3ffff           call 0x6ba240
// 006baf1c  83c40c               add esp, 0xc
// 006baf1f  6aff                 push -1
// 006baf21  56                   push esi
// 006baf22  e819e0ffff           call 0x6b8f40
// 006baf27  55                   push ebp
// 006baf28  6afd                 push -3
// 006baf2a  56                   push esi
// 006baf2b  e8e0e8ffff           call 0x6b9810
// 006baf30  83c414               add esp, 0x14
// 006baf33  6afe                 push -2
// 006baf35  56                   push esi
// 006baf36  e8a5deffff           call 0x6b8de0
// 006baf3b  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 006baf3f  83c8ff               or eax, 0xffffffff
// 006baf42  2bc5                 sub eax, ebp
// 006baf44  50                   push eax
// 006baf45  56                   push esi
// 006baf46  e8e5deffff           call 0x6b8e30
// 006baf4b  83c410               add esp, 0x10
// 006baf4e  eb04                 jmp 0x6baf54
// 006baf50  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 006baf54  833f00               cmp dword ptr [edi], 0
// 006baf57  744e                 je 0x6bafa7
// 006baf59  b8feffffff           mov eax, 0xfffffffe
// 006baf5e  2bc5                 sub eax, ebp
// 006baf60  89442418             mov dword ptr [esp + 0x18], eax
// 006baf64  85ed                 test ebp, ebp
// 006baf66  7e1b                 jle 0x6baf83
// 006baf68  8bdd                 mov ebx, ebp
// 006baf6a  f7db                 neg ebx
// 006baf6c  8d642400             lea esp, [esp]
// 006baf70  53                   push ebx
// 006baf71  56                   push esi
// 006baf72  e8c9dfffff           call 0x6b8f40
// 006baf77  83c408               add esp, 8
// 006baf7a  83ed01               sub ebp, 1
// 006baf7d  75f1                 jne 0x6baf70
// 006baf7f  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 006baf83  8b4f04               mov ecx, dword ptr [edi + 4]
// 006baf86  55                   push ebp
// 006baf87  51                   push ecx
// 006baf88  56                   push esi
// 006baf89  e802e5ffff           call 0x6b9490
// 006baf8e  8b17                 mov edx, dword ptr [edi]
// 006baf90  8b442424             mov eax, dword ptr [esp + 0x24]
// 006baf94  52                   push edx
// 006baf95  50                   push eax
// 006baf96  56                   push esi
// 006baf97  e874e8ffff           call 0x6b9810
// 006baf9c  83c708               add edi, 8
// 006baf9f  83c418               add esp, 0x18
// 006bafa2  833f00               cmp dword ptr [edi], 0
// 006bafa5  75bd                 jne 0x6baf64
// 006bafa7  83c9ff               or ecx, 0xffffffff
// 006bafaa  2bcd                 sub ecx, ebp
// 006bafac  51                   push ecx
// 006bafad  56                   push esi
// 006bafae  e8ddddffff           call 0x6b8d90
// 006bafb3  83c408               add esp, 8
// 006bafb6  5f                   pop edi
// 006bafb7  5e                   pop esi
// 006bafb8  5d                   pop ebp
// 006bafb9  5b                   pop ebx
// 006bafba  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_openlib)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c

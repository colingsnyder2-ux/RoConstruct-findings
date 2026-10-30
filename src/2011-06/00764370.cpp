// from server: 100% by auto
// roc 2011-06 00764370  unit: seg_00760000  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00764370
//
// 00764370  53                   push ebx
// 00764371  55                   push ebp
// 00764372  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00764376  56                   push esi
// 00764377  8b742410             mov esi, dword ptr [esp + 0x10]
// 0076437b  57                   push edi
// 0076437c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00764380  85ed                 test ebp, ebp
// 00764382  0f8498000000         je 0x764420
// 00764388  33db                 xor ebx, ebx
// 0076438a  8bc7                 mov eax, edi
// 0076438c  391f                 cmp dword ptr [edi], ebx
// 0076438e  7409                 je 0x764399
// 00764390  83c008               add eax, 8
// 00764393  43                   inc ebx
// 00764394  833800               cmp dword ptr [eax], 0
// 00764397  75f7                 jne 0x764390
// 00764399  6a01                 push 1
// 0076439b  68f465ab00           push 0xab65f4
// 007643a0  68f0d8ffff           push 0xffffd8f0
// 007643a5  56                   push esi
// 007643a6  e8e5f4ffff           call 0x763890
// 007643ab  55                   push ebp
// 007643ac  6aff                 push -1
// 007643ae  56                   push esi
// 007643af  e8fce7ffff           call 0x762bb0
// 007643b4  6aff                 push -1
// 007643b6  56                   push esi
// 007643b7  e894e1ffff           call 0x762550
// 007643bc  83c424               add esp, 0x24
// 007643bf  83f805               cmp eax, 5
// 007643c2  743f                 je 0x764403
// 007643c4  6afe                 push -2
// 007643c6  56                   push esi
// 007643c7  e8a4dfffff           call 0x762370
// 007643cc  53                   push ebx
// 007643cd  55                   push ebp
// 007643ce  68eed8ffff           push 0xffffd8ee
// 007643d3  56                   push esi
// 007643d4  e8b7f4ffff           call 0x763890
// 007643d9  83c418               add esp, 0x18
// 007643dc  85c0                 test eax, eax
// 007643de  740f                 je 0x7643ef
// 007643e0  55                   push ebp
// 007643e1  68d465ab00           push 0xab65d4
// 007643e6  56                   push esi
// 007643e7  e824f3ffff           call 0x763710
// 007643ec  83c40c               add esp, 0xc
// 007643ef  6aff                 push -1
// 007643f1  56                   push esi
// 007643f2  e829e1ffff           call 0x762520
// 007643f7  55                   push ebp
// 007643f8  6afd                 push -3
// 007643fa  56                   push esi
// 007643fb  e8f0e9ffff           call 0x762df0
// 00764400  83c414               add esp, 0x14
// 00764403  6afe                 push -2
// 00764405  56                   push esi
// 00764406  e8b5dfffff           call 0x7623c0
// 0076440b  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0076440f  83c8ff               or eax, 0xffffffff
// 00764412  2bc5                 sub eax, ebp
// 00764414  50                   push eax
// 00764415  56                   push esi
// 00764416  e8f5dfffff           call 0x762410
// 0076441b  83c410               add esp, 0x10
// 0076441e  eb04                 jmp 0x764424
// 00764420  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00764424  833f00               cmp dword ptr [edi], 0
// 00764427  744e                 je 0x764477
// 00764429  b8feffffff           mov eax, 0xfffffffe
// 0076442e  2bc5                 sub eax, ebp
// 00764430  89442418             mov dword ptr [esp + 0x18], eax
// 00764434  85ed                 test ebp, ebp
// 00764436  7e1b                 jle 0x764453
// 00764438  8bdd                 mov ebx, ebp
// 0076443a  f7db                 neg ebx
// 0076443c  8d642400             lea esp, [esp]
// 00764440  53                   push ebx
// 00764441  56                   push esi
// 00764442  e8d9e0ffff           call 0x762520
// 00764447  83c408               add esp, 8
// 0076444a  83ed01               sub ebp, 1
// 0076444d  75f1                 jne 0x764440
// 0076444f  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00764453  8b4f04               mov ecx, dword ptr [edi + 4]
// 00764456  55                   push ebp
// 00764457  51                   push ecx
// 00764458  56                   push esi
// 00764459  e812e6ffff           call 0x762a70
// 0076445e  8b17                 mov edx, dword ptr [edi]
// 00764460  8b442424             mov eax, dword ptr [esp + 0x24]
// 00764464  52                   push edx
// 00764465  50                   push eax
// 00764466  56                   push esi
// 00764467  e884e9ffff           call 0x762df0
// 0076446c  83c708               add edi, 8
// 0076446f  83c418               add esp, 0x18
// 00764472  833f00               cmp dword ptr [edi], 0
// 00764475  75bd                 jne 0x764434
// 00764477  83c9ff               or ecx, 0xffffffff
// 0076447a  2bcd                 sub ecx, ebp
// 0076447c  51                   push ecx
// 0076447d  56                   push esi
// 0076447e  e8eddeffff           call 0x762370
// 00764483  83c408               add esp, 8
// 00764486  5f                   pop edi
// 00764487  5e                   pop esi
// 00764488  5d                   pop ebp
// 00764489  5b                   pop ebx
// 0076448a  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_openlib)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c

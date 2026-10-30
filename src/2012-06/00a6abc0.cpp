// roc 2012-06 00a6abc0  unit: CXTColorSelectorCtrl  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6abc0
//
// 00a6abc0  83ec20               sub esp, 0x20
// 00a6abc3  56                   push esi
// 00a6abc4  8bf1                 mov esi, ecx
// 00a6abc6  e815fbffff           call 0xa6a6e0
// 00a6abcb  3c07                 cmp al, 7
// 00a6abcd  747a                 je 0xa6ac49
// 00a6abcf  8bce                 mov ecx, esi
// 00a6abd1  e8087bf1ff           call 0x9826de
// 00a6abd6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a6abd9  8d442414             lea eax, [esp + 0x14]
// 00a6abdd  50                   push eax
// 00a6abde  51                   push ecx
// 00a6abdf  ff15d83ab200         call dword ptr [0xb23ad8]
// 00a6abe5  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a6abe9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a6abed  52                   push edx
// 00a6abee  50                   push eax
// 00a6abef  8d4c241c             lea ecx, [esp + 0x1c]
// 00a6abf3  51                   push ecx
// 00a6abf4  ff15483bb200         call dword ptr [0xb23b48]
// 00a6abfa  3b86a0000000         cmp eax, dword ptr [esi + 0xa0]
// 00a6ac00  7447                 je 0xa6ac49
// 00a6ac02  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a6ac05  6a00                 push 0
// 00a6ac07  6a00                 push 0
// 00a6ac09  52                   push edx
// 00a6ac0a  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 00a6ac10  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a6ac16  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00a6ac1d  742a                 je 0xa6ac49
// 00a6ac1f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a6ac22  8d4c2404             lea ecx, [esp + 4]
// 00a6ac26  51                   push ecx
// 00a6ac27  c744240810000000     mov dword ptr [esp + 8], 0x10
// 00a6ac2f  c744240c02000000     mov dword ptr [esp + 0xc], 2
// 00a6ac37  89442410             mov dword ptr [esp + 0x10], eax
// 00a6ac3b  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00a6ac43  ff156420b200         call dword ptr [0xb22064]
// 00a6ac49  5e                   pop esi
// 00a6ac4a  83c420               add esp, 0x20
// 00a6ac4d  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTButton@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp
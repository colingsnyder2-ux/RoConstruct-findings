// roc 2012-06 00a198a0  unit: CXTPShortcutManager  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a198a0
//
// 00a198a0  6aff                 push -1
// 00a198a2  68f83eae00           push 0xae3ef8
// 00a198a7  64a100000000         mov eax, dword ptr fs:[0]
// 00a198ad  50                   push eax
// 00a198ae  83ec28               sub esp, 0x28
// 00a198b1  53                   push ebx
// 00a198b2  55                   push ebp
// 00a198b3  56                   push esi
// 00a198b4  57                   push edi
// 00a198b5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a198ba  33c4                 xor eax, esp
// 00a198bc  50                   push eax
// 00a198bd  8d44243c             lea eax, [esp + 0x3c]
// 00a198c1  64a300000000         mov dword ptr fs:[0], eax
// 00a198c7  8be9                 mov ebp, ecx
// 00a198c9  c7450800000000       mov dword ptr [ebp + 8], 0
// 00a198d0  e8f78df6ff           call 0x9826cc
// 00a198d5  8b742450             mov esi, dword ptr [esp + 0x50]
// 00a198d9  85f6                 test esi, esi
// 00a198db  7462                 je 0xa1993f
// 00a198dd  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00a198e1  56                   push esi
// 00a198e2  57                   push edi
// 00a198e3  ff158821b200         call dword ptr [0xb22188]
// 00a198e9  56                   push esi
// 00a198ea  57                   push edi
// 00a198eb  8bd8                 mov ebx, eax
// 00a198ed  ff158421b200         call dword ptr [0xb22184]
// 00a198f3  85c0                 test eax, eax
// 00a198f5  7448                 je 0xa1993f
// 00a198f7  50                   push eax
// 00a198f8  ff15d422b200         call dword ptr [0xb222d4]
// 00a198fe  85c0                 test eax, eax
// 00a19900  743d                 je 0xa1993f
// 00a19902  83fb0a               cmp ebx, 0xa
// 00a19905  7238                 jb 0xa1993f
// 00a19907  6a00                 push 0
// 00a19909  53                   push ebx
// 00a1990a  50                   push eax
// 00a1990b  8d4c2420             lea ecx, [esp + 0x20]
// 00a1990f  e89a96f6ff           call 0x982fae
// 00a19914  8d442414             lea eax, [esp + 0x14]
// 00a19918  50                   push eax
// 00a19919  8bcd                 mov ecx, ebp
// 00a1991b  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00a19923  e8e8fdffff           call 0xa19710
// 00a19928  8d4c2414             lea ecx, [esp + 0x14]
// 00a1992c  8bf0                 mov esi, eax
// 00a1992e  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 00a19936  e86796f6ff           call 0x982fa2
// 00a1993b  8bc6                 mov eax, esi
// 00a1993d  eb02                 jmp 0xa19941
// 00a1993f  33c0                 xor eax, eax
// 00a19941  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a19945  64890d00000000       mov dword ptr fs:[0], ecx
// 00a1994c  59                   pop ecx
// 00a1994d  5f                   pop edi
// 00a1994e  5e                   pop esi
// 00a1994f  5d                   pop ebp
// 00a19950  5b                   pop ebx
// 00a19951  83c434               add esp, 0x34
// 00a19954  c20800               ret 8
// copied from an identical function in another client (function ?LoadFromResource@CXTPGraphicBitmapPng@@QAEHPAUHINSTANCE__@@PAUHRSRC__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\GraphicLibrary\XTPGraphicBitmapPng.cpp
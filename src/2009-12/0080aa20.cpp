// roc 2009-12 0080aa20  unit: CXTPImageManagerResource::CBitmapDC  size: 301 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080aa20
//
// 0080aa20  6aff                 push -1
// 0080aa22  68d8979500           push 0x9597d8
// 0080aa27  64a100000000         mov eax, dword ptr fs:[0]
// 0080aa2d  50                   push eax
// 0080aa2e  83ec20               sub esp, 0x20
// 0080aa31  53                   push ebx
// 0080aa32  55                   push ebp
// 0080aa33  56                   push esi
// 0080aa34  57                   push edi
// 0080aa35  a10052b600           mov eax, dword ptr [0xb65200]
// 0080aa3a  33c4                 xor eax, esp
// 0080aa3c  50                   push eax
// 0080aa3d  8d442434             lea eax, [esp + 0x34]
// 0080aa41  64a300000000         mov dword ptr fs:[0], eax
// 0080aa47  8d4c2424             lea ecx, [esp + 0x24]
// 0080aa4b  e85eba1100           call 0x9264ae
// 0080aa50  33ed                 xor ebp, ebp
// 0080aa52  55                   push ebp
// 0080aa53  896c2440             mov dword ptr [esp + 0x40], ebp
// 0080aa57  ff1554b19800         call dword ptr [0x98b154]
// 0080aa5d  50                   push eax
// 0080aa5e  8d4c2428             lea ecx, [esp + 0x28]
// 0080aa62  e835ba1100           call 0x92649c
// 0080aa67  8d442420             lea eax, [esp + 0x20]
// 0080aa6b  50                   push eax
// 0080aa6c  8b442448             mov eax, dword ptr [esp + 0x48]
// 0080aa70  8d4c2420             lea ecx, [esp + 0x20]
// 0080aa74  51                   push ecx
// 0080aa75  8d542420             lea edx, [esp + 0x20]
// 0080aa79  52                   push edx
// 0080aa7a  50                   push eax
// 0080aa7b  8d4c2434             lea ecx, [esp + 0x34]
// 0080aa7f  51                   push ecx
// 0080aa80  896c2430             mov dword ptr [esp + 0x30], ebp
// 0080aa84  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0080aa88  e843feffff           call 0x80a8d0
// 0080aa8d  83c414               add esp, 0x14
// 0080aa90  85c0                 test eax, eax
// 0080aa92  7527                 jne 0x80aabb
// 0080aa94  8d4c2424             lea ecx, [esp + 0x24]
// 0080aa98  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0080aaa0  e803ba1100           call 0x9264a8
// 0080aaa5  33c0                 xor eax, eax
// 0080aaa7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0080aaab  64890d00000000       mov dword ptr fs:[0], ecx
// 0080aab2  59                   pop ecx
// 0080aab3  5f                   pop edi
// 0080aab4  5e                   pop esi
// 0080aab5  5d                   pop ebp
// 0080aab6  5b                   pop ebx
// 0080aab7  83c42c               add esp, 0x2c
// 0080aaba  c3                   ret 
// 0080aabb  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0080aabf  8b442428             mov eax, dword ptr [esp + 0x28]
// 0080aac3  55                   push ebp
// 0080aac4  55                   push ebp
// 0080aac5  8d54241c             lea edx, [esp + 0x1c]
// 0080aac9  52                   push edx
// 0080aaca  55                   push ebp
// 0080aacb  53                   push ebx
// 0080aacc  50                   push eax
// 0080aacd  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0080aad1  ff1560b19800         call dword ptr [0x98b160]
// 0080aad7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080aadb  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0080aadf  89442418             mov dword ptr [esp + 0x18], eax
// 0080aae3  3bcd                 cmp ecx, ebp
// 0080aae5  7415                 je 0x80aafc
// 0080aae7  3bc5                 cmp eax, ebp
// 0080aae9  7411                 je 0x80aafc
// 0080aaeb  8b442420             mov eax, dword ptr [esp + 0x20]
// 0080aaef  50                   push eax
// 0080aaf0  56                   push esi
// 0080aaf1  50                   push eax
// 0080aaf2  51                   push ecx
// 0080aaf3  ff157cb79800         call dword ptr [0x98b77c]
// 0080aaf9  83c410               add esp, 0x10
// 0080aafc  8b3d40b79800         mov edi, dword ptr [0x98b740]
// 0080ab02  3bf5                 cmp esi, ebp
// 0080ab04  7406                 je 0x80ab0c
// 0080ab06  56                   push esi
// 0080ab07  ffd7                 call edi
// 0080ab09  83c404               add esp, 4
// 0080ab0c  3bdd                 cmp ebx, ebp
// 0080ab0e  7406                 je 0x80ab16
// 0080ab10  53                   push ebx
// 0080ab11  ffd7                 call edi
// 0080ab13  83c404               add esp, 4
// 0080ab16  8b442448             mov eax, dword ptr [esp + 0x48]
// 0080ab1a  3bc5                 cmp eax, ebp
// 0080ab1c  7406                 je 0x80ab24
// 0080ab1e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080ab22  8908                 mov dword ptr [eax], ecx
// 0080ab24  8d4c2424             lea ecx, [esp + 0x24]
// 0080ab28  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0080ab30  e873b91100           call 0x9264a8
// 0080ab35  8b442418             mov eax, dword ptr [esp + 0x18]
// 0080ab39  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0080ab3d  64890d00000000       mov dword ptr fs:[0], ecx
// 0080ab44  59                   pop ecx
// 0080ab45  5f                   pop edi
// 0080ab46  5e                   pop esi
// 0080ab47  5d                   pop ebp
// 0080ab48  5b                   pop ebx
// 0080ab49  83c42c               add esp, 0x2c
// 0080ab4c  c3                   ret 
// copied from an identical function in another client (function ?CopyAlphaBitmap@CXTPImageManagerIcon@@SAPAUHBITMAP__@@PAU2@PAPAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
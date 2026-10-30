// from server: 100% by colin
// roc 2008-06 006badf0  unit: CXTPImageManagerResource::CBitmapDC  size: 376 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006badf0
//
// 006badf0  6aff                 push -1
// 006badf2  6848ff7d00           push 0x7dff48
// 006badf7  64a100000000         mov eax, dword ptr fs:[0]
// 006badfd  50                   push eax
// 006badfe  83ec1c               sub esp, 0x1c
// 006bae01  53                   push ebx
// 006bae02  55                   push ebp
// 006bae03  56                   push esi
// 006bae04  57                   push edi
// 006bae05  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006bae0a  33c4                 xor eax, esp
// 006bae0c  50                   push eax
// 006bae0d  8d442430             lea eax, [esp + 0x30]
// 006bae11  64a300000000         mov dword ptr fs:[0], eax
// 006bae17  8b442444             mov eax, dword ptr [esp + 0x44]
// 006bae1b  8b742440             mov esi, dword ptr [esp + 0x40]
// 006bae1f  6a02                 push 2
// 006bae21  50                   push eax
// 006bae22  56                   push esi
// 006bae23  ff1590218000         call dword ptr [0x802190]
// 006bae29  8be8                 mov ebp, eax
// 006bae2b  85ed                 test ebp, ebp
// 006bae2d  0f849a000000         je 0x6baecd
// 006bae33  55                   push ebp
// 006bae34  56                   push esi
// 006bae35  ff15a8218000         call dword ptr [0x8021a8]
// 006bae3b  8bd8                 mov ebx, eax
// 006bae3d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 006bae41  85db                 test ebx, ebx
// 006bae43  0f8484000000         je 0x6baecd
// 006bae49  53                   push ebx
// 006bae4a  ff1510228000         call dword ptr [0x802210]
// 006bae50  8bf8                 mov edi, eax
// 006bae52  85ff                 test edi, edi
// 006bae54  7477                 je 0x6baecd
// 006bae56  8b7708               mov esi, dword ptr [edi + 8]
// 006bae59  0faf7704             imul esi, dword ptr [edi + 4]
// 006bae5d  03f6                 add esi, esi
// 006bae5f  03f6                 add esi, esi
// 006bae61  66837f0e20           cmp word ptr [edi + 0xe], 0x20
// 006bae66  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006bae6e  0f85d5000000         jne 0x6baf49
// 006bae74  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006bae78  55                   push ebp
// 006bae79  51                   push ecx
// 006bae7a  ff15c8218000         call dword ptr [0x8021c8]
// 006bae80  8d5628               lea edx, [esi + 0x28]
// 006bae83  3bc2                 cmp eax, edx
// 006bae85  0f82be000000         jb 0x6baf49
// 006bae8b  8d4c2420             lea ecx, [esp + 0x20]
// 006bae8f  e8c4111000           call 0x7bc058
// 006bae94  33ed                 xor ebp, ebp
// 006bae96  55                   push ebp
// 006bae97  896c243c             mov dword ptr [esp + 0x3c], ebp
// 006bae9b  ff15d0208000         call dword ptr [0x8020d0]
// 006baea1  50                   push eax
// 006baea2  8d4c2424             lea ecx, [esp + 0x24]
// 006baea6  e89b111000           call 0x7bc046
// 006baeab  6a34                 push 0x34
// 006baead  ff15b0288000         call dword ptr [0x8028b0]
// 006baeb3  8bd8                 mov ebx, eax
// 006baeb5  83c404               add esp, 4
// 006baeb8  3bdd                 cmp ebx, ebp
// 006baeba  7527                 jne 0x6baee3
// 006baebc  8d4c2420             lea ecx, [esp + 0x20]
// 006baec0  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 006baec8  e885111000           call 0x7bc052
// 006baecd  33c0                 xor eax, eax
// 006baecf  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006baed3  64890d00000000       mov dword ptr fs:[0], ecx
// 006baeda  59                   pop ecx
// 006baedb  5f                   pop edi
// 006baedc  5e                   pop esi
// 006baedd  5d                   pop ebp
// 006baede  5b                   pop ebx
// 006baedf  83c428               add esp, 0x28
// 006baee2  c3                   ret 
// 006baee3  6a28                 push 0x28
// 006baee5  57                   push edi
// 006baee6  53                   push ebx
// 006baee7  e834e0ffff           call 0x6b8f20
// 006baeec  83c40c               add esp, 0xc
// 006baeef  55                   push ebp
// 006baef0  55                   push ebp
// 006baef1  8d44241c             lea eax, [esp + 0x1c]
// 006baef5  50                   push eax
// 006baef6  55                   push ebp
// 006baef7  897314               mov dword ptr [ebx + 0x14], esi
// 006baefa  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006baefe  53                   push ebx
// 006baeff  51                   push ecx
// 006baf00  896c242c             mov dword ptr [esp + 0x2c], ebp
// 006baf04  ff154c218000         call dword ptr [0x80214c]
// 006baf0a  8be8                 mov ebp, eax
// 006baf0c  85ed                 test ebp, ebp
// 006baf0e  741a                 je 0x6baf2a
// 006baf10  8b442414             mov eax, dword ptr [esp + 0x14]
// 006baf14  85c0                 test eax, eax
// 006baf16  7412                 je 0x6baf2a
// 006baf18  56                   push esi
// 006baf19  83c728               add edi, 0x28
// 006baf1c  57                   push edi
// 006baf1d  50                   push eax
// 006baf1e  e8fddfffff           call 0x6b8f20
// 006baf23  83c40c               add esp, 0xc
// 006baf26  896c2418             mov dword ptr [esp + 0x18], ebp
// 006baf2a  53                   push ebx
// 006baf2b  ff15c0288000         call dword ptr [0x8028c0]
// 006baf31  83c404               add esp, 4
// 006baf34  8d4c2420             lea ecx, [esp + 0x20]
// 006baf38  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 006baf40  e80d111000           call 0x7bc052
// 006baf45  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006baf49  53                   push ebx
// 006baf4a  ff150c228000         call dword ptr [0x80220c]
// 006baf50  8b442418             mov eax, dword ptr [esp + 0x18]
// 006baf54  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006baf58  64890d00000000       mov dword ptr fs:[0], ecx
// 006baf5f  59                   pop ecx
// 006baf60  5f                   pop edi
// 006baf61  5e                   pop esi
// 006baf62  5d                   pop ebp
// 006baf63  5b                   pop ebx
// 006baf64  83c428               add esp, 0x28
// 006baf67  c3                   ret 

// from server: 75% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports Source\Common\XTPImageManager.cpp

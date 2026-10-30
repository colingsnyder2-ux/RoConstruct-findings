// roc 2009-12 0080cdf0  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 584 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080cdf0
//
// 0080cdf0  6aff                 push -1
// 0080cdf2  68489b9500           push 0x959b48
// 0080cdf7  64a100000000         mov eax, dword ptr fs:[0]
// 0080cdfd  50                   push eax
// 0080cdfe  83ec14               sub esp, 0x14
// 0080ce01  53                   push ebx
// 0080ce02  55                   push ebp
// 0080ce03  56                   push esi
// 0080ce04  57                   push edi
// 0080ce05  a10052b600           mov eax, dword ptr [0xb65200]
// 0080ce0a  33c4                 xor eax, esp
// 0080ce0c  50                   push eax
// 0080ce0d  8d442428             lea eax, [esp + 0x28]
// 0080ce11  64a300000000         mov dword ptr fs:[0], eax
// 0080ce17  8bf9                 mov edi, ecx
// 0080ce19  897c2414             mov dword ptr [esp + 0x14], edi
// 0080ce1d  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0080ce21  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0080ce25  8b2decb19800         mov ebp, dword ptr [0x98b1ec]
// 0080ce2b  6a0e                 push 0xe
// 0080ce2d  56                   push esi
// 0080ce2e  53                   push ebx
// 0080ce2f  ffd5                 call ebp
// 0080ce31  85c0                 test eax, eax
// 0080ce33  0f8493000000         je 0x80cecc
// 0080ce39  837c244800           cmp dword ptr [esp + 0x48], 0
// 0080ce3e  0f8488000000         je 0x80cecc
// 0080ce44  50                   push eax
// 0080ce45  53                   push ebx
// 0080ce46  ff15f0b19800         call dword ptr [0x98b1f0]
// 0080ce4c  85c0                 test eax, eax
// 0080ce4e  0f849b010000         je 0x80cfef
// 0080ce54  50                   push eax
// 0080ce55  ff157cb29800         call dword ptr [0x98b27c]
// 0080ce5b  85c0                 test eax, eax
// 0080ce5d  0f848c010000         je 0x80cfef
// 0080ce63  0fb77804             movzx edi, word ptr [eax + 4]
// 0080ce67  83ef01               sub edi, 1
// 0080ce6a  0f887f010000         js 0x80cfef
// 0080ce70  8d0cfd00000000       lea ecx, [edi*8]
// 0080ce77  2bcf                 sub ecx, edi
// 0080ce79  8d744807             lea esi, [eax + ecx*2 + 7]
// 0080ce7d  8b442444             mov eax, dword ptr [esp + 0x44]
// 0080ce81  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0080ce85  0fb656ff             movzx edx, byte ptr [esi - 1]
// 0080ce89  3bd1                 cmp edx, ecx
// 0080ce8b  7526                 jne 0x80ceb3
// 0080ce8d  0fb616               movzx edx, byte ptr [esi]
// 0080ce90  3bd0                 cmp edx, eax
// 0080ce92  751f                 jne 0x80ceb3
// 0080ce94  6a00                 push 0
// 0080ce96  50                   push eax
// 0080ce97  0fb7460b             movzx eax, word ptr [esi + 0xb]
// 0080ce9b  51                   push ecx
// 0080ce9c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080cea0  50                   push eax
// 0080cea1  53                   push ebx
// 0080cea2  e849ffffff           call 0x80cdf0
// 0080cea7  85c0                 test eax, eax
// 0080cea9  7517                 jne 0x80cec2
// 0080ceab  8b442444             mov eax, dword ptr [esp + 0x44]
// 0080ceaf  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0080ceb3  4f                   dec edi
// 0080ceb4  83ee0e               sub esi, 0xe
// 0080ceb7  85ff                 test edi, edi
// 0080ceb9  7dca                 jge 0x80ce85
// 0080cebb  33c0                 xor eax, eax
// 0080cebd  e960010000           jmp 0x80d022
// 0080cec2  b801000000           mov eax, 1
// 0080cec7  e956010000           jmp 0x80d022
// 0080cecc  6a03                 push 3
// 0080cece  56                   push esi
// 0080cecf  53                   push ebx
// 0080ced0  ffd5                 call ebp
// 0080ced2  8bf0                 mov esi, eax
// 0080ced4  85f6                 test esi, esi
// 0080ced6  0f8413010000         je 0x80cfef
// 0080cedc  56                   push esi
// 0080cedd  53                   push ebx
// 0080cede  ff15f0b19800         call dword ptr [0x98b1f0]
// 0080cee4  85c0                 test eax, eax
// 0080cee6  0f8403010000         je 0x80cfef
// 0080ceec  50                   push eax
// 0080ceed  ff157cb29800         call dword ptr [0x98b27c]
// 0080cef3  8be8                 mov ebp, eax
// 0080cef5  85ed                 test ebp, ebp
// 0080cef7  0f84f2000000         je 0x80cfef
// 0080cefd  56                   push esi
// 0080cefe  53                   push ebx
// 0080ceff  ff15f4b19800         call dword ptr [0x98b1f4]
// 0080cf05  66837d0e20           cmp word ptr [ebp + 0xe], 0x20
// 0080cf0a  0f85e3000000         jne 0x80cff3
// 0080cf10  8d4c2418             lea ecx, [esp + 0x18]
// 0080cf14  e895951100           call 0x9264ae
// 0080cf19  6a00                 push 0
// 0080cf1b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0080cf23  ff1554b19800         call dword ptr [0x98b154]
// 0080cf29  50                   push eax
// 0080cf2a  8d4c241c             lea ecx, [esp + 0x1c]
// 0080cf2e  e869951100           call 0x92649c
// 0080cf33  6a34                 push 0x34
// 0080cf35  ff1578b79800         call dword ptr [0x98b778]
// 0080cf3b  8bd8                 mov ebx, eax
// 0080cf3d  83c404               add esp, 4
// 0080cf40  85db                 test ebx, ebx
// 0080cf42  0f8496000000         je 0x80cfde
// 0080cf48  b90a000000           mov ecx, 0xa
// 0080cf4d  8bf5                 mov esi, ebp
// 0080cf4f  8bfb                 mov edi, ebx
// 0080cf51  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0080cf53  8b4308               mov eax, dword ptr [ebx + 8]
// 0080cf56  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0080cf59  99                   cdq 
// 0080cf5a  2bc2                 sub eax, edx
// 0080cf5c  d1f8                 sar eax, 1
// 0080cf5e  0fafc8               imul ecx, eax
// 0080cf61  6a00                 push 0
// 0080cf63  6a00                 push 0
// 0080cf65  8d542444             lea edx, [esp + 0x44]
// 0080cf69  52                   push edx
// 0080cf6a  03c9                 add ecx, ecx
// 0080cf6c  03c9                 add ecx, ecx
// 0080cf6e  6a00                 push 0
// 0080cf70  894308               mov dword ptr [ebx + 8], eax
// 0080cf73  894b14               mov dword ptr [ebx + 0x14], ecx
// 0080cf76  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0080cf7a  53                   push ebx
// 0080cf7b  50                   push eax
// 0080cf7c  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0080cf84  ff1560b19800         call dword ptr [0x98b160]
// 0080cf8a  8bf0                 mov esi, eax
// 0080cf8c  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0080cf90  85c0                 test eax, eax
// 0080cf92  7440                 je 0x80cfd4
// 0080cf94  85f6                 test esi, esi
// 0080cf96  743c                 je 0x80cfd4
// 0080cf98  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 0080cf9b  51                   push ecx
// 0080cf9c  83c528               add ebp, 0x28
// 0080cf9f  55                   push ebp
// 0080cfa0  50                   push eax
// 0080cfa1  e86ab6ffff           call 0x808610
// 0080cfa6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080cfaa  83c40c               add esp, 0xc
// 0080cfad  56                   push esi
// 0080cfae  e8edfdffff           call 0x80cda0
// 0080cfb3  53                   push ebx
// 0080cfb4  ff1540b79800         call dword ptr [0x98b740]
// 0080cfba  83c404               add esp, 4
// 0080cfbd  8d4c2418             lea ecx, [esp + 0x18]
// 0080cfc1  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0080cfc9  e8da941100           call 0x9264a8
// 0080cfce  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0080cfd2  eb42                 jmp 0x80d016
// 0080cfd4  53                   push ebx
// 0080cfd5  ff1540b79800         call dword ptr [0x98b740]
// 0080cfdb  83c404               add esp, 4
// 0080cfde  8d4c2418             lea ecx, [esp + 0x18]
// 0080cfe2  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0080cfea  e8b9941100           call 0x9264a8
// 0080cfef  33c0                 xor eax, eax
// 0080cff1  eb2f                 jmp 0x80d022
// 0080cff3  8b542444             mov edx, dword ptr [esp + 0x44]
// 0080cff7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0080cffb  6a00                 push 0
// 0080cffd  52                   push edx
// 0080cffe  51                   push ecx
// 0080cfff  6800000300           push 0x30000
// 0080d004  6a01                 push 1
// 0080d006  50                   push eax
// 0080d007  55                   push ebp
// 0080d008  ff1510cb9800         call dword ptr [0x98cb10]
// 0080d00e  50                   push eax
// 0080d00f  8bcf                 mov ecx, edi
// 0080d011  e84afdffff           call 0x80cd60
// 0080d016  8bcf                 mov ecx, edi
// 0080d018  e883d8ffff           call 0x80a8a0
// 0080d01d  f7d8                 neg eax
// 0080d01f  1bc0                 sbb eax, eax
// 0080d021  40                   inc eax
// 0080d022  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0080d026  64890d00000000       mov dword ptr fs:[0], ecx
// 0080d02d  59                   pop ecx
// 0080d02e  5f                   pop edi
// 0080d02f  5e                   pop esi
// 0080d030  5d                   pop ebp
// 0080d031  5b                   pop ebx
// 0080d032  83c420               add esp, 0x20
// 0080d035  c21400               ret 0x14
// copied from an identical function in another client (function ?CreateIconFromResource@CXTPImageManagerIconHandle@@QAEHPAUHINSTANCE__@@PBDVCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
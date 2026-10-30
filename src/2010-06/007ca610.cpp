// roc 2010-06 007ca610  unit: CXTPCommandBar  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ca610
//
// 007ca610  56                   push esi
// 007ca611  8b742408             mov esi, dword ptr [esp + 8]
// 007ca615  57                   push edi
// 007ca616  33ff                 xor edi, edi
// 007ca618  3bf7                 cmp esi, edi
// 007ca61a  7505                 jne 0x7ca621
// 007ca61c  5f                   pop edi
// 007ca61d  33c0                 xor eax, eax
// 007ca61f  5e                   pop esi
// 007ca620  c3                   ret 
// 007ca621  e8ba281b00           call 0x97cee0
// 007ca626  83c058               add eax, 0x58
// 007ca629  8378047b             cmp dword ptr [eax + 4], 0x7b
// 007ca62d  7521                 jne 0x7ca650
// 007ca62f  83780cff             cmp dword ptr [eax + 0xc], -1
// 007ca633  751b                 jne 0x7ca650
// 007ca635  8bce                 mov ecx, esi
// 007ca637  e894dffeff           call 0x7b85d0
// 007ca63c  85c0                 test eax, eax
// 007ca63e  7410                 je 0x7ca650
// 007ca640  6a01                 push 1
// 007ca642  8bce                 mov ecx, esi
// 007ca644  e887dffeff           call 0x7b85d0
// 007ca649  8bc8                 mov ecx, eax
// 007ca64b  e8c0f5ffff           call 0x7c9c10
// 007ca650  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007ca654  3bc7                 cmp eax, edi
// 007ca656  7507                 jne 0x7ca65f
// 007ca658  8bce                 mov ecx, esi
// 007ca65a  e8a10bffff           call 0x7bb200
// 007ca65f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007ca663  8986e4000000         mov dword ptr [esi + 0xe4], eax
// 007ca669  898e08010000         mov dword ptr [esi + 0x108], ecx
// 007ca66f  3bc7                 cmp eax, edi
// 007ca671  7417                 je 0x7ca68a
// 007ca673  8bc8                 mov ecx, eax
// 007ca675  e86a271b00           call 0x97cde4
// 007ca67a  a900104000           test eax, 0x401000
// 007ca67f  7409                 je 0x7ca68a
// 007ca681  8b442410             mov eax, dword ptr [esp + 0x10]
// 007ca685  83c808               or eax, 8
// 007ca688  eb04                 jmp 0x7ca68e
// 007ca68a  8b442410             mov eax, dword ptr [esp + 0x10]
// 007ca68e  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 007ca696  89be54010000         mov dword ptr [esi + 0x154], edi
// 007ca69c  a900010000           test eax, 0x100
// 007ca6a1  740e                 je 0x7ca6b1
// 007ca6a3  8d54240c             lea edx, [esp + 0xc]
// 007ca6a7  899654010000         mov dword ptr [esi + 0x154], edx
// 007ca6ad  897c240c             mov dword ptr [esp + 0xc], edi
// 007ca6b1  8bc8                 mov ecx, eax
// 007ca6b3  83e102               and ecx, 2
// 007ca6b6  898e20010000         mov dword ptr [esi + 0x120], ecx
// 007ca6bc  8bc8                 mov ecx, eax
// 007ca6be  83e108               and ecx, 8
// 007ca6c1  83c910               or ecx, 0x10
// 007ca6c4  8bd0                 mov edx, eax
// 007ca6c6  c1e903               shr ecx, 3
// 007ca6c9  53                   push ebx
// 007ca6ca  83e001               and eax, 1
// 007ca6cd  81e280000000         and edx, 0x80
// 007ca6d3  898e9c010000         mov dword ptr [esi + 0x19c], ecx
// 007ca6d9  8bd8                 mov ebx, eax
// 007ca6db  68e0a57a00           push 0x7aa5e0
// 007ca6e0  b90062c200           mov ecx, 0xc26200
// 007ca6e5  899624010000         mov dword ptr [esi + 0x124], edx
// 007ca6eb  899e28010000         mov dword ptr [esi + 0x128], ebx
// 007ca6f1  e882261b00           call 0x97cd78
// 007ca6f6  8bf8                 mov edi, eax
// 007ca6f8  85ff                 test edi, edi
// 007ca6fa  7505                 jne 0x7ca701
// 007ca6fc  e84bd5fdff           call 0x7a7c4c
// 007ca701  8bcf                 mov ecx, edi
// 007ca703  85db                 test ebx, ebx
// 007ca705  750d                 jne 0x7ca714
// 007ca707  e8248a0500           call 0x823130
// 007ca70c  ff158cbc9e00         call dword ptr [0x9ebc8c]
// 007ca712  eb0e                 jmp 0x7ca722
// 007ca714  e8978a0500           call 0x8231b0
// 007ca719  6a01                 push 1
// 007ca71b  8bcf                 mov ecx, edi
// 007ca71d  e83e8a0500           call 0x823160
// 007ca722  8b542424             mov edx, dword ptr [esp + 0x24]
// 007ca726  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007ca72a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ca72e  52                   push edx
// 007ca72f  50                   push eax
// 007ca730  51                   push ecx
// 007ca731  8bce                 mov ecx, esi
// 007ca733  c7474001000000       mov dword ptr [edi + 0x40], 1
// 007ca73a  e831cf0200           call 0x7f7670
// 007ca73f  85c0                 test eax, eax
// 007ca741  7504                 jne 0x7ca747
// 007ca743  5b                   pop ebx
// 007ca744  5f                   pop edi
// 007ca745  5e                   pop esi
// 007ca746  c3                   ret 
// 007ca747  8bce                 mov ecx, esi
// 007ca749  e862ddffff           call 0x7c84b0
// 007ca74e  85db                 test ebx, ebx
// 007ca750  7409                 je 0x7ca75b
// 007ca752  6a00                 push 0
// 007ca754  8bcf                 mov ecx, edi
// 007ca756  e8058a0500           call 0x823160
// 007ca75b  8b442410             mov eax, dword ptr [esp + 0x10]
// 007ca75f  5b                   pop ebx
// 007ca760  5f                   pop edi
// 007ca761  5e                   pop esi
// 007ca762  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?TrackPopupMenu@CXTPCommandBars@@SAHPAVCXTPPopupBar@@IHHPAVCWnd@@PBUtagRECT@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp

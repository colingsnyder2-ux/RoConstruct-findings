// roc 2009-12 00816540  unit: CXTPCommandBar  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00816540
//
// 00816540  56                   push esi
// 00816541  8b742408             mov esi, dword ptr [esp + 8]
// 00816545  57                   push edi
// 00816546  33ff                 xor edi, edi
// 00816548  3bf7                 cmp esi, edi
// 0081654a  7505                 jne 0x816551
// 0081654c  5f                   pop edi
// 0081654d  33c0                 xor eax, eax
// 0081654f  5e                   pop esi
// 00816550  c3                   ret 
// 00816551  e84e001100           call 0x9265a4
// 00816556  83c058               add eax, 0x58
// 00816559  8378047b             cmp dword ptr [eax + 4], 0x7b
// 0081655d  7521                 jne 0x816580
// 0081655f  83780cff             cmp dword ptr [eax + 0xc], -1
// 00816563  751b                 jne 0x816580
// 00816565  8bce                 mov ecx, esi
// 00816567  e864dffeff           call 0x8044d0
// 0081656c  85c0                 test eax, eax
// 0081656e  7410                 je 0x816580
// 00816570  6a01                 push 1
// 00816572  8bce                 mov ecx, esi
// 00816574  e857dffeff           call 0x8044d0
// 00816579  8bc8                 mov ecx, eax
// 0081657b  e8c0f5ffff           call 0x815b40
// 00816580  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00816584  3bc7                 cmp eax, edi
// 00816586  7507                 jne 0x81658f
// 00816588  8bce                 mov ecx, esi
// 0081658a  e8010bffff           call 0x807090
// 0081658f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00816593  8986e4000000         mov dword ptr [esi + 0xe4], eax
// 00816599  898e08010000         mov dword ptr [esi + 0x108], ecx
// 0081659f  3bc7                 cmp eax, edi
// 008165a1  7417                 je 0x8165ba
// 008165a3  8bc8                 mov ecx, eax
// 008165a5  e8cefe1000           call 0x926478
// 008165aa  a900104000           test eax, 0x401000
// 008165af  7409                 je 0x8165ba
// 008165b1  8b442410             mov eax, dword ptr [esp + 0x10]
// 008165b5  83c808               or eax, 8
// 008165b8  eb04                 jmp 0x8165be
// 008165ba  8b442410             mov eax, dword ptr [esp + 0x10]
// 008165be  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 008165c6  89be54010000         mov dword ptr [esi + 0x154], edi
// 008165cc  a900010000           test eax, 0x100
// 008165d1  740e                 je 0x8165e1
// 008165d3  8d54240c             lea edx, [esp + 0xc]
// 008165d7  899654010000         mov dword ptr [esi + 0x154], edx
// 008165dd  897c240c             mov dword ptr [esp + 0xc], edi
// 008165e1  8bc8                 mov ecx, eax
// 008165e3  83e102               and ecx, 2
// 008165e6  898e20010000         mov dword ptr [esi + 0x120], ecx
// 008165ec  8bc8                 mov ecx, eax
// 008165ee  83e108               and ecx, 8
// 008165f1  83c910               or ecx, 0x10
// 008165f4  8bd0                 mov edx, eax
// 008165f6  c1e903               shr ecx, 3
// 008165f9  53                   push ebx
// 008165fa  83e001               and eax, 1
// 008165fd  81e280000000         and edx, 0x80
// 00816603  898e9c010000         mov dword ptr [esi + 0x19c], ecx
// 00816609  8bd8                 mov ebx, eax
// 0081660b  68b0647f00           push 0x7f64b0
// 00816610  b9d0bab900           mov ecx, 0xb9bad0
// 00816615  899624010000         mov dword ptr [esi + 0x124], edx
// 0081661b  899e28010000         mov dword ptr [esi + 0x128], ebx
// 00816621  e816fe1000           call 0x92643c
// 00816626  8bf8                 mov edi, eax
// 00816628  85ff                 test edi, edi
// 0081662a  7505                 jne 0x816631
// 0081662c  e8dbd4fdff           call 0x7f3b0c
// 00816631  8bcf                 mov ecx, edi
// 00816633  85db                 test ebx, ebx
// 00816635  750d                 jne 0x816644
// 00816637  e8e48a0500           call 0x86f120
// 0081663c  ff1520cc9800         call dword ptr [0x98cc20]
// 00816642  eb0e                 jmp 0x816652
// 00816644  e8578b0500           call 0x86f1a0
// 00816649  6a01                 push 1
// 0081664b  8bcf                 mov ecx, edi
// 0081664d  e8fe8a0500           call 0x86f150
// 00816652  8b542424             mov edx, dword ptr [esp + 0x24]
// 00816656  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0081665a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081665e  52                   push edx
// 0081665f  50                   push eax
// 00816660  51                   push ecx
// 00816661  8bce                 mov ecx, esi
// 00816663  c7474001000000       mov dword ptr [edi + 0x40], 1
// 0081666a  e851cf0200           call 0x8435c0
// 0081666f  85c0                 test eax, eax
// 00816671  7504                 jne 0x816677
// 00816673  5b                   pop ebx
// 00816674  5f                   pop edi
// 00816675  5e                   pop esi
// 00816676  c3                   ret 
// 00816677  8bce                 mov ecx, esi
// 00816679  e852ddffff           call 0x8143d0
// 0081667e  85db                 test ebx, ebx
// 00816680  7409                 je 0x81668b
// 00816682  6a00                 push 0
// 00816684  8bcf                 mov ecx, edi
// 00816686  e8c58a0500           call 0x86f150
// 0081668b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0081668f  5b                   pop ebx
// 00816690  5f                   pop edi
// 00816691  5e                   pop esi
// 00816692  c3                   ret 
// copied from an identical function in another client (function ?TrackPopupMenu@CXTPCommandBars@@SAHPAVCXTPPopupBar@@IHHPAVCWnd@@PBUtagRECT@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp
// roc 2009-12 00859650  unit: CXTPTabClientWnd  size: 394 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00859650
//
// 00859650  53                   push ebx
// 00859651  55                   push ebp
// 00859652  56                   push esi
// 00859653  b801000000           mov eax, 1
// 00859658  8bf1                 mov esi, ecx
// 0085965a  894664               mov dword ptr [esi + 0x64], eax
// 0085965d  89465c               mov dword ptr [esi + 0x5c], eax
// 00859660  8b442418             mov eax, dword ptr [esp + 0x18]
// 00859664  33db                 xor ebx, ebx
// 00859666  57                   push edi
// 00859667  83f802               cmp eax, 2
// 0085966a  0f84b6000000         je 0x859726
// 00859670  0f8e42010000         jle 0x8597b8
// 00859676  83f804               cmp eax, 4
// 00859679  0f8f39010000         jg 0x8597b8
// 0085967f  e89ce7ffff           call 0x857e20
// 00859684  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00859688  85ed                 test ebp, ebp
// 0085968a  0f8443010000         je 0x8597d3
// 00859690  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00859694  8b4760               mov eax, dword ptr [edi + 0x60]
// 00859697  8d4f04               lea ecx, [edi + 4]
// 0085969a  51                   push ecx
// 0085969b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0085969f  ff150cb29800         call dword ptr [0x98b20c]
// 008596a5  8bcf                 mov ecx, edi
// 008596a7  e874700700           call 0x8d0720
// 008596ac  8b575c               mov edx, dword ptr [edi + 0x5c]
// 008596af  55                   push ebp
// 008596b0  8bce                 mov ecx, esi
// 008596b2  89542418             mov dword ptr [esp + 0x18], edx
// 008596b6  e8d5efffff           call 0x858690
// 008596bb  8b16                 mov edx, dword ptr [esi]
// 008596bd  40                   inc eax
// 008596be  50                   push eax
// 008596bf  8b826c010000         mov eax, dword ptr [edx + 0x16c]
// 008596c5  8bce                 mov ecx, esi
// 008596c7  ffd0                 call eax
// 008596c9  8bd8                 mov ebx, eax
// 008596cb  57                   push edi
// 008596cc  6aff                 push -1
// 008596ce  8bcb                 mov ecx, ebx
// 008596d0  e80b5e0700           call 0x8cf4e0
// 008596d5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008596d9  894f5c               mov dword ptr [edi + 0x5c], ecx
// 008596dc  8b13                 mov edx, dword ptr [ebx]
// 008596de  8b4220               mov eax, dword ptr [edx + 0x20]
// 008596e1  57                   push edi
// 008596e2  8bcb                 mov ecx, ebx
// 008596e4  ffd0                 call eax
// 008596e6  db86d0000000         fild dword ptr [esi + 0xd0]
// 008596ec  33c9                 xor ecx, ecx
// 008596ee  837c241c03           cmp dword ptr [esp + 0x1c], 3
// 008596f3  dcad98000000         fsubr qword ptr [ebp + 0x98]
// 008596f9  0f94c1               sete cl
// 008596fc  dc0d10329b00         fmul qword ptr [0x9b3210]
// 00859702  dd9398000000         fst qword ptr [ebx + 0x98]
// 00859708  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0085970c  dcad98000000         fsubr qword ptr [ebp + 0x98]
// 00859712  daa6d0000000         fisub dword ptr [esi + 0xd0]
// 00859718  dd9d98000000         fstp qword ptr [ebp + 0x98]
// 0085971e  898e9c000000         mov dword ptr [esi + 0x9c], ecx
// 00859724  eb4b                 jmp 0x859771
// 00859726  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0085972a  85ed                 test ebp, ebp
// 0085972c  0f84a1000000         je 0x8597d3
// 00859732  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00859736  8b4760               mov eax, dword ptr [edi + 0x60]
// 00859739  3be8                 cmp ebp, eax
// 0085973b  7429                 je 0x859766
// 0085973d  8d5704               lea edx, [edi + 4]
// 00859740  52                   push edx
// 00859741  8944241c             mov dword ptr [esp + 0x1c], eax
// 00859745  ff150cb29800         call dword ptr [0x98b20c]
// 0085974b  8bcf                 mov ecx, edi
// 0085974d  e8ce6f0700           call 0x8d0720
// 00859752  8b5f5c               mov ebx, dword ptr [edi + 0x5c]
// 00859755  57                   push edi
// 00859756  6aff                 push -1
// 00859758  8bcd                 mov ecx, ebp
// 0085975a  e8815d0700           call 0x8cf4e0
// 0085975f  895f5c               mov dword ptr [edi + 0x5c], ebx
// 00859762  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00859766  8b4500               mov eax, dword ptr [ebp]
// 00859769  8b5020               mov edx, dword ptr [eax + 0x20]
// 0085976c  57                   push edi
// 0085976d  8bcd                 mov ecx, ebp
// 0085976f  ffd2                 call edx
// 00859771  85db                 test ebx, ebx
// 00859773  7443                 je 0x8597b8
// 00859775  837b5c01             cmp dword ptr [ebx + 0x5c], 1
// 00859779  7e3d                 jle 0x8597b8
// 0085977b  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085977e  8b2dfccb9800         mov ebp, dword ptr [0x98cbfc]
// 00859784  6a05                 push 5
// 00859786  50                   push eax
// 00859787  ffd5                 call ebp
// 00859789  8bf8                 mov edi, eax
// 0085978b  85ff                 test edi, edi
// 0085978d  7429                 je 0x8597b8
// 0085978f  90                   nop 
// 00859790  57                   push edi
// 00859791  8bce                 mov ecx, esi
// 00859793  e898f6ffff           call 0x858e30
// 00859798  85c0                 test eax, eax
// 0085979a  7405                 je 0x8597a1
// 0085979c  395860               cmp dword ptr [eax + 0x60], ebx
// 0085979f  740d                 je 0x8597ae
// 008597a1  6a02                 push 2
// 008597a3  57                   push edi
// 008597a4  ffd5                 call ebp
// 008597a6  8bf8                 mov edi, eax
// 008597a8  85ff                 test edi, edi
// 008597aa  75e4                 jne 0x859790
// 008597ac  eb0a                 jmp 0x8597b8
// 008597ae  8b13                 mov edx, dword ptr [ebx]
// 008597b0  50                   push eax
// 008597b1  8b4220               mov eax, dword ptr [edx + 0x20]
// 008597b4  8bcb                 mov ecx, ebx
// 008597b6  ffd0                 call eax
// 008597b8  8b16                 mov edx, dword ptr [esi]
// 008597ba  33c0                 xor eax, eax
// 008597bc  894664               mov dword ptr [esi + 0x64], eax
// 008597bf  89465c               mov dword ptr [esi + 0x5c], eax
// 008597c2  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 008597c8  8bce                 mov ecx, esi
// 008597ca  c7466001000000       mov dword ptr [esi + 0x60], 1
// 008597d1  ffd0                 call eax
// 008597d3  5f                   pop edi
// 008597d4  5e                   pop esi
// 008597d5  5d                   pop ebp
// 008597d6  5b                   pop ebx
// 008597d7  c20c00               ret 0xc
// copied from an identical function in another client (function ?DoWorkspaceCommand@CXTPTabClientWnd@@IAEXPAVCXTPTabManagerItem@@PAVCWorkspace@1@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
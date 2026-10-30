// roc 2012-06 00995490  unit: CXTPCommandBar  size: 440 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00995490
//
// 00995490  6aff                 push -1
// 00995492  68a2caad00           push 0xadcaa2
// 00995497  64a100000000         mov eax, dword ptr fs:[0]
// 0099549d  50                   push eax
// 0099549e  83ec08               sub esp, 8
// 009954a1  53                   push ebx
// 009954a2  55                   push ebp
// 009954a3  56                   push esi
// 009954a4  57                   push edi
// 009954a5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009954aa  33c4                 xor eax, esp
// 009954ac  50                   push eax
// 009954ad  8d44241c             lea eax, [esp + 0x1c]
// 009954b1  64a300000000         mov dword ptr fs:[0], eax
// 009954b7  894c2418             mov dword ptr [esp + 0x18], ecx
// 009954bb  e830d8ffff           call 0x992cf0
// 009954c0  8bf8                 mov edi, eax
// 009954c2  85ff                 test edi, edi
// 009954c4  7475                 je 0x99553b
// 009954c6  33f6                 xor esi, esi
// 009954c8  397734               cmp dword ptr [edi + 0x34], esi
// 009954cb  7e58                 jle 0x995525
// 009954cd  85f6                 test esi, esi
// 009954cf  0f8c50010000         jl 0x995625
// 009954d5  3b7734               cmp esi, dword ptr [edi + 0x34]
// 009954d8  0f8d47010000         jge 0x995625
// 009954de  8b4730               mov eax, dword ptr [edi + 0x30]
// 009954e1  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 009954e4  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 009954e7  8d04b0               lea eax, [eax + esi*4]
// 009954ea  8d6b54               lea ebp, [ebx + 0x54]
// 009954ed  894c2414             mov dword ptr [esp + 0x14], ecx
// 009954f1  8bcd                 mov ecx, ebp
// 009954f3  ff155846b200         call dword ptr [0xb24658]
// 009954f9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009954fd  3bc1                 cmp eax, ecx
// 009954ff  7e1e                 jle 0x99551f
// 00995501  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00995505  52                   push edx
// 00995506  51                   push ecx
// 00995507  8bcd                 mov ecx, ebp
// 00995509  ff15e844b200         call dword ptr [0xb244e8]
// 0099550f  0fb6c0               movzx eax, al
// 00995512  50                   push eax
// 00995513  e838300800           call 0xa18550
// 00995518  83c408               add esp, 8
// 0099551b  85c0                 test eax, eax
// 0099551d  7532                 jne 0x995551
// 0099551f  46                   inc esi
// 00995520  3b7734               cmp esi, dword ptr [edi + 0x34]
// 00995523  7ca8                 jl 0x9954cd
// 00995525  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00995529  83f810               cmp eax, 0x10
// 0099552c  740d                 je 0x99553b
// 0099552e  83f811               cmp eax, 0x11
// 00995531  7408                 je 0x99553b
// 00995533  6a00                 push 0
// 00995535  ff15683bb200         call dword ptr [0xb23b68]
// 0099553b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0099553f  64890d00000000       mov dword ptr fs:[0], ecx
// 00995546  59                   pop ecx
// 00995547  5f                   pop edi
// 00995548  5e                   pop esi
// 00995549  5d                   pop ebp
// 0099554a  5b                   pop ebx
// 0099554b  83c414               add esp, 0x14
// 0099554e  c20400               ret 4
// 00995551  8b6f48               mov ebp, dword ptr [edi + 0x48]
// 00995554  8d7354               lea esi, [ebx + 0x54]
// 00995557  8bce                 mov ecx, esi
// 00995559  ff155846b200         call dword ptr [0xb24658]
// 0099555f  48                   dec eax
// 00995560  3bc5                 cmp eax, ebp
// 00995562  0f8ec2000000         jle 0x99562a
// 00995568  8d4501               lea eax, [ebp + 1]
// 0099556b  50                   push eax
// 0099556c  8d4c2430             lea ecx, [esp + 0x30]
// 00995570  51                   push ecx
// 00995571  8bce                 mov ecx, esi
// 00995573  894748               mov dword ptr [edi + 0x48], eax
// 00995576  ff152850b200         call dword ptr [0xb25028]
// 0099557c  8b6f34               mov ebp, dword ptr [edi + 0x34]
// 0099557f  83c5ff               add ebp, -1
// 00995582  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0099558a  0f8886000000         js 0x995616
// 00995590  85ed                 test ebp, ebp
// 00995592  0f8c8d000000         jl 0x995625
// 00995598  3b6f34               cmp ebp, dword ptr [edi + 0x34]
// 0099559b  0f8d84000000         jge 0x995625
// 009955a1  8b5730               mov edx, dword ptr [edi + 0x30]
// 009955a4  8b34aa               mov esi, dword ptr [edx + ebp*4]
// 009955a7  8d04aa               lea eax, [edx + ebp*4]
// 009955aa  8b4748               mov eax, dword ptr [edi + 0x48]
// 009955ad  50                   push eax
// 009955ae  8d4c2418             lea ecx, [esp + 0x18]
// 009955b2  51                   push ecx
// 009955b3  8d4e54               lea ecx, [esi + 0x54]
// 009955b6  ff152850b200         call dword ptr [0xb25028]
// 009955bc  8bd8                 mov ebx, eax
// 009955be  8d4c242c             lea ecx, [esp + 0x2c]
// 009955c2  c644242401           mov byte ptr [esp + 0x24], 1
// 009955c7  ff159847b200         call dword ptr [0xb24798]
// 009955cd  50                   push eax
// 009955ce  8bcb                 mov ecx, ebx
// 009955d0  ff159c47b200         call dword ptr [0xb2479c]
// 009955d6  85c0                 test eax, eax
// 009955d8  8d4c2414             lea ecx, [esp + 0x14]
// 009955dc  0f95c3               setne bl
// 009955df  c644242400           mov byte ptr [esp + 0x24], 0
// 009955e4  ff15d047b200         call dword ptr [0xb247d0]
// 009955ea  84db                 test bl, bl
// 009955ec  741f                 je 0x99560d
// 009955ee  6a01                 push 1
// 009955f0  55                   push ebp
// 009955f1  8d4f2c               lea ecx, [edi + 0x2c]
// 009955f4  e877dbffff           call 0x993170
// 009955f9  8b16                 mov edx, dword ptr [esi]
// 009955fb  8b4268               mov eax, dword ptr [edx + 0x68]
// 009955fe  8bce                 mov ecx, esi
// 00995600  ffd0                 call eax
// 00995602  8b16                 mov edx, dword ptr [esi]
// 00995604  8b4204               mov eax, dword ptr [edx + 4]
// 00995607  6a01                 push 1
// 00995609  8bce                 mov ecx, esi
// 0099560b  ffd0                 call eax
// 0099560d  83ed01               sub ebp, 1
// 00995610  0f897affffff         jns 0x995590
// 00995616  8d4c242c             lea ecx, [esp + 0x2c]
// 0099561a  ff15d047b200         call dword ptr [0xb247d0]
// 00995620  e916ffffff           jmp 0x99553b
// 00995625  e896cdfeff           call 0x9823c0
// 0099562a  837b6c00             cmp dword ptr [ebx + 0x6c], 0
// 0099562e  0f84fffeffff         je 0x995533
// 00995634  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00995638  8b11                 mov edx, dword ptr [ecx]
// 0099563a  8b82c8010000         mov eax, dword ptr [edx + 0x1c8]
// 00995640  53                   push ebx
// 00995641  ffd0                 call eax
// 00995643  e9f3feffff           jmp 0x99553b
// copied from an identical function in another client (function ?OnKeyboardTipChar@CXTPCommandBar@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBar.cpp
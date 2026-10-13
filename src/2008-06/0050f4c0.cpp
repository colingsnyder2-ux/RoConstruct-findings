// roc 2008-06 0050f4c0  unit: seg_00500000  size: 2603 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050f4c0
//
// 0050f4c0  6aff                 push -1
// 0050f4c2  68c3c27c00           push 0x7cc2c3
// 0050f4c7  64a100000000         mov eax, dword ptr fs:[0]
// 0050f4cd  50                   push eax
// 0050f4ce  64892500000000       mov dword ptr fs:[0], esp
// 0050f4d5  81ecc8000000         sub esp, 0xc8
// 0050f4db  53                   push ebx
// 0050f4dc  8b9c24dc000000       mov ebx, dword ptr [esp + 0xdc]
// 0050f4e3  55                   push ebp
// 0050f4e4  56                   push esi
// 0050f4e5  8bf1                 mov esi, ecx
// 0050f4e7  8bcb                 mov ecx, ebx
// 0050f4e9  e8c2b5ffff           call 0x50aab0
// 0050f4ee  8bcb                 mov ecx, ebx
// 0050f4f0  e8bbb5ffff           call 0x50aab0
// 0050f4f5  8bcb                 mov ecx, ebx
// 0050f4f7  e8b4b5ffff           call 0x50aab0
// 0050f4fc  0fb7e8               movzx ebp, ax
// 0050f4ff  c7461004000000       mov dword ptr [esi + 0x10], 4
// 0050f506  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050f509  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0050f50d  85c9                 test ecx, ecx
// 0050f50f  7626                 jbe 0x50f537
// 0050f511  8d44241c             lea eax, [esp + 0x1c]
// 0050f515  50                   push eax
// 0050f516  8d4c242c             lea ecx, [esp + 0x2c]
// 0050f51a  c7442420680c8200     mov dword ptr [esp + 0x20], 0x820c68
// 0050f522  ff15a4288000         call dword ptr [0x8028a4]
// 0050f528  687c998d00           push 0x8d997c
// 0050f52d  8d4c242c             lea ecx, [esp + 0x2c]
// 0050f531  51                   push ecx
// 0050f532  e855201900           call 0x6a158c
// 0050f537  8b5344               mov edx, dword ptr [ebx + 0x44]
// 0050f53a  8b4340               mov eax, dword ptr [ebx + 0x40]
// 0050f53d  03d1                 add edx, ecx
// 0050f53f  57                   push edi
// 0050f540  33c9                 xor ecx, ecx
// 0050f542  8d3c02               lea edi, [edx + eax]
// 0050f545  33c0                 xor eax, eax
// 0050f547  89542428             mov dword ptr [esp + 0x28], edx
// 0050f54b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0050f54f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0050f553  85ed                 test ebp, ebp
// 0050f555  7e44                 jle 0x50f59b
// 0050f557  897c2424             mov dword ptr [esp + 0x24], edi
// 0050f55b  eb03                 jmp 0x50f560
// 0050f55d  8d4900               lea ecx, [ecx]
// 0050f560  0fb617               movzx edx, byte ptr [edi]
// 0050f563  0fb67f01             movzx edi, byte ptr [edi + 1]
// 0050f567  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0050f56b  0faffa               imul edi, edx
// 0050f56e  0faf6c2418           imul ebp, dword ptr [esp + 0x18]
// 0050f573  3bfd                 cmp edi, ebp
// 0050f575  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0050f579  7e0e                 jle 0x50f589
// 0050f57b  0fb64f01             movzx ecx, byte ptr [edi + 1]
// 0050f57f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0050f583  89542418             mov dword ptr [esp + 0x18], edx
// 0050f587  8bc8                 mov ecx, eax
// 0050f589  40                   inc eax
// 0050f58a  83c710               add edi, 0x10
// 0050f58d  3b442420             cmp eax, dword ptr [esp + 0x20]
// 0050f591  897c2424             mov dword ptr [esp + 0x24], edi
// 0050f595  7cc9                 jl 0x50f560
// 0050f597  8b542428             mov edx, dword ptr [esp + 0x28]
// 0050f59b  8b4334               mov eax, dword ptr [ebx + 0x34]
// 0050f59e  c1e104               shl ecx, 4
// 0050f5a1  03ca                 add ecx, edx
// 0050f5a3  2bc8                 sub ecx, eax
// 0050f5a5  894b44               mov dword ptr [ebx + 0x44], ecx
// 0050f5a8  7805                 js 0x50f5af
// 0050f5aa  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 0050f5ad  7e0f                 jle 0x50f5be
// 0050f5af  33ed                 xor ebp, ebp
// 0050f5b1  03c8                 add ecx, eax
// 0050f5b3  55                   push ebp
// 0050f5b4  51                   push ecx
// 0050f5b5  8bcb                 mov ecx, ebx
// 0050f5b7  e814620000           call 0x5157d0
// 0050f5bc  eb02                 jmp 0x50f5c0
// 0050f5be  33ed                 xor ebp, ebp
// 0050f5c0  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050f5c3  8d4801               lea ecx, [eax + 1]
// 0050f5c6  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 0050f5c9  7e0f                 jle 0x50f5da
// 0050f5cb  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0050f5ce  6a01                 push 1
// 0050f5d0  03d0                 add edx, eax
// 0050f5d2  52                   push edx
// 0050f5d3  8bcb                 mov ecx, ebx
// 0050f5d5  e8f6610000           call 0x5157d0
// 0050f5da  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050f5dd  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 0050f5e0  8a0c08               mov cl, byte ptr [eax + ecx]
// 0050f5e3  40                   inc eax
// 0050f5e4  0fb6d1               movzx edx, cl
// 0050f5e7  894344               mov dword ptr [ebx + 0x44], eax
// 0050f5ea  895608               mov dword ptr [esi + 8], edx
// 0050f5ed  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050f5f0  8d4801               lea ecx, [eax + 1]
// 0050f5f3  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 0050f5f6  7e0f                 jle 0x50f607
// 0050f5f8  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0050f5fb  6a01                 push 1
// 0050f5fd  03d0                 add edx, eax
// 0050f5ff  52                   push edx
// 0050f600  8bcb                 mov ecx, ebx
// 0050f602  e8c9610000           call 0x5157d0
// 0050f607  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050f60a  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 0050f60d  8a0c08               mov cl, byte ptr [eax + ecx]
// 0050f610  40                   inc eax
// 0050f611  0fb6d1               movzx edx, cl
// 0050f614  894344               mov dword ptr [ebx + 0x44], eax
// 0050f617  89560c               mov dword ptr [esi + 0xc], edx
// 0050f61a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050f61d  8d4801               lea ecx, [eax + 1]
// 0050f620  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 0050f623  7e0f                 jle 0x50f634
// 0050f625  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0050f628  6a01                 push 1
// 0050f62a  03d0                 add edx, eax
// 0050f62c  52                   push edx
// 0050f62d  8bcb                 mov ecx, ebx
// 0050f62f  e89c610000           call 0x5157d0
// 0050f634  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050f637  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 0050f63a  8a0c08               mov cl, byte ptr [eax + ecx]
// 0050f63d  40                   inc eax
// 0050f63e  894344               mov dword ptr [ebx + 0x44], eax
// 0050f641  8b560c               mov edx, dword ptr [esi + 0xc]
// 0050f644  0faf5610             imul edx, dword ptr [esi + 0x10]
// 0050f648  0faf5608             imul edx, dword ptr [esi + 8]
// 0050f64c  0fb6f9               movzx edi, cl
// 0050f64f  52                   push edx
// 0050f650  897c241c             mov dword ptr [esp + 0x1c], edi
// 0050f654  e8d78effff           call 0x508530
// 0050f659  894604               mov dword ptr [esi + 4], eax
// 0050f65c  8bc7                 mov eax, edi
// 0050f65e  83c404               add esp, 4
// 0050f661  2bc5                 sub eax, ebp
// 0050f663  7469                 je 0x50f6ce
// 0050f665  83e802               sub eax, 2
// 0050f668  745a                 je 0x50f6c4
// 0050f66a  83e80e               sub eax, 0xe
// 0050f66d  744b                 je 0x50f6ba
// 0050f66f  6858828200           push 0x828258
// 0050f674  8d4c2444             lea ecx, [esp + 0x44]
// 0050f678  ff1558248000         call dword ptr [0x802458]
// 0050f67e  8d44245c             lea eax, [esp + 0x5c]
// 0050f682  50                   push eax
// 0050f683  8bcb                 mov ecx, ebx
// 0050f685  89ac24e4000000       mov dword ptr [esp + 0xe4], ebp
// 0050f68c  e89fb3ffff           call 0x50aa30
// 0050f691  50                   push eax
// 0050f692  8d4c2444             lea ecx, [esp + 0x44]
// 0050f696  51                   push ecx
// 0050f697  8d8c2480000000       lea ecx, [esp + 0x80]
// 0050f69e  c68424e800000001     mov byte ptr [esp + 0xe8], 1
// 0050f6a6  e80532f6ff           call 0x4728b0
// 0050f6ab  6878c48d00           push 0x8dc478
// 0050f6b0  8d54247c             lea edx, [esp + 0x7c]
// 0050f6b4  52                   push edx
// 0050f6b5  e8d21e1900           call 0x6a158c
// 0050f6ba  c744241004000000     mov dword ptr [esp + 0x10], 4
// 0050f6c2  eb1b                 jmp 0x50f6df
// 0050f6c4  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0050f6cc  eb11                 jmp 0x50f6df
// 0050f6ce  bf00010000           mov edi, 0x100
// 0050f6d3  897c2418             mov dword ptr [esp + 0x18], edi
// 0050f6d7  c744241008000000     mov dword ptr [esp + 0x10], 8
// 0050f6df  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050f6e2  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050f6e5  8d440105             lea eax, [ecx + eax + 5]
// 0050f6e9  2bc1                 sub eax, ecx
// 0050f6eb  894344               mov dword ptr [ebx + 0x44], eax
// 0050f6ee  7805                 js 0x50f6f5
// 0050f6f0  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0050f6f3  7e0b                 jle 0x50f700
// 0050f6f5  03c1                 add eax, ecx
// 0050f6f7  55                   push ebp
// 0050f6f8  50                   push eax
// 0050f6f9  8bcb                 mov ecx, ebx
// 0050f6fb  e8d0600000           call 0x5157d0
// 0050f700  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050f703  8b5344               mov edx, dword ptr [ebx + 0x44]
// 0050f706  8d441104             lea eax, [ecx + edx + 4]
// 0050f70a  2bc1                 sub eax, ecx
// 0050f70c  894344               mov dword ptr [ebx + 0x44], eax
// 0050f70f  7805                 js 0x50f716
// 0050f711  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0050f714  7e0b                 jle 0x50f721
// 0050f716  03c1                 add eax, ecx
// 0050f718  55                   push ebp
// 0050f719  50                   push eax
// 0050f71a  8bcb                 mov ecx, ebx
// 0050f71c  e8af600000           call 0x5157d0
// 0050f721  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050f724  8d4804               lea ecx, [eax + 4]
// 0050f727  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 0050f72a  7e0f                 jle 0x50f73b
// 0050f72c  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0050f72f  6a04                 push 4
// 0050f731  03d0                 add edx, eax
// 0050f733  52                   push edx
// 0050f734  8bcb                 mov ecx, ebx
// 0050f736  e895600000           call 0x5157d0
// 0050f73b  83434404             add dword ptr [ebx + 0x44], 4
// 0050f73f  807b2400             cmp byte ptr [ebx + 0x24], 0
// 0050f743  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050f746  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 0050f749  7427                 je 0x50f772
// 0050f74b  0fb65408ff           movzx edx, byte ptr [eax + ecx - 1]
// 0050f750  03c1                 add eax, ecx
// 0050f752  8a48fe               mov cl, byte ptr [eax - 2]
// 0050f755  8854241c             mov byte ptr [esp + 0x1c], dl
// 0050f759  0fb650fd             movzx edx, byte ptr [eax - 3]
// 0050f75d  8a40fc               mov al, byte ptr [eax - 4]
// 0050f760  884c241d             mov byte ptr [esp + 0x1d], cl
// 0050f764  8854241e             mov byte ptr [esp + 0x1e], dl
// 0050f768  8844241f             mov byte ptr [esp + 0x1f], al
// 0050f76c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050f770  eb04                 jmp 0x50f776
// 0050f772  8b4401fc             mov eax, dword ptr [ecx + eax - 4]
// 0050f776  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050f779  2bc1                 sub eax, ecx
// 0050f77b  894344               mov dword ptr [ebx + 0x44], eax
// 0050f77e  7805                 js 0x50f785
// 0050f780  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0050f783  7e0b                 jle 0x50f790
// 0050f785  03c1                 add eax, ecx
// 0050f787  55                   push ebp
// 0050f788  50                   push eax
// 0050f789  8bcb                 mov ecx, ebx
// 0050f78b  e840600000           call 0x5157d0
// 0050f790  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050f793  8b5344               mov edx, dword ptr [ebx + 0x44]
// 0050f796  8d441128             lea eax, [ecx + edx + 0x28]
// 0050f79a  2bc1                 sub eax, ecx
// 0050f79c  894344               mov dword ptr [ebx + 0x44], eax
// 0050f79f  7805                 js 0x50f7a6
// 0050f7a1  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0050f7a4  7e0b                 jle 0x50f7b1
// 0050f7a6  03c1                 add eax, ecx
// 0050f7a8  55                   push ebp
// 0050f7a9  50                   push eax
// 0050f7aa  8bcb                 mov ecx, ebx
// 0050f7ac  e81f600000           call 0x5157d0
// 0050f7b1  896c2430             mov dword ptr [esp + 0x30], ebp
// 0050f7b5  896c2434             mov dword ptr [esp + 0x34], ebp
// 0050f7b9  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0050f7bd  6a01                 push 1
// 0050f7bf  57                   push edi
// 0050f7c0  8d4c2434             lea ecx, [esp + 0x34]
// 0050f7c4  c78424e800000002000000 mov dword ptr [esp + 0xe8], 2
// 0050f7cf  e8ccefffff           call 0x50e7a0
// 0050f7d4  3bfd                 cmp edi, ebp
// 0050f7d6  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0050f7da  0f8ec5000000         jle 0x50f8a5
// 0050f7e0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0050f7e4  8d7d01               lea edi, [ebp + 1]
// 0050f7e7  89442418             mov dword ptr [esp + 0x18], eax
// 0050f7eb  eb03                 jmp 0x50f7f0
// 0050f7ed  8d4900               lea ecx, [ecx]
// 0050f7f0  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050f7f3  8d4801               lea ecx, [eax + 1]
// 0050f7f6  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 0050f7f9  7e0f                 jle 0x50f80a
// 0050f7fb  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0050f7fe  6a01                 push 1
// 0050f800  03d0                 add edx, eax
// 0050f802  52                   push edx
// 0050f803  8bcb                 mov ecx, ebx
// 0050f805  e8c65f0000           call 0x5157d0
// 0050f80a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050f80d  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 0050f810  8a0c08               mov cl, byte ptr [eax + ecx]
// 0050f813  40                   inc eax
// 0050f814  894344               mov dword ptr [ebx + 0x44], eax
// 0050f817  884f01               mov byte ptr [edi + 1], cl
// 0050f81a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050f81d  8d5001               lea edx, [eax + 1]
// 0050f820  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0050f823  7e0f                 jle 0x50f834
// 0050f825  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050f828  03c8                 add ecx, eax
// 0050f82a  6a01                 push 1
// 0050f82c  51                   push ecx
// 0050f82d  8bcb                 mov ecx, ebx
// 0050f82f  e89c5f0000           call 0x5157d0
// 0050f834  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050f837  8b5340               mov edx, dword ptr [ebx + 0x40]
// 0050f83a  8a0c10               mov cl, byte ptr [eax + edx]
// 0050f83d  40                   inc eax
// 0050f83e  894344               mov dword ptr [ebx + 0x44], eax
// 0050f841  880f                 mov byte ptr [edi], cl
// 0050f843  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050f846  8d4801               lea ecx, [eax + 1]
// 0050f849  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 0050f84c  7e0f                 jle 0x50f85d
// 0050f84e  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0050f851  6a01                 push 1
// 0050f853  03d0                 add edx, eax
// 0050f855  52                   push edx
// 0050f856  8bcb                 mov ecx, ebx
// 0050f858  e8735f0000           call 0x5157d0
// 0050f85d  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050f860  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 0050f863  8a0c08               mov cl, byte ptr [eax + ecx]
// 0050f866  40                   inc eax
// 0050f867  894344               mov dword ptr [ebx + 0x44], eax
// 0050f86a  884fff               mov byte ptr [edi - 1], cl
// 0050f86d  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050f870  8d5001               lea edx, [eax + 1]
// 0050f873  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0050f876  7e0f                 jle 0x50f887
// 0050f878  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050f87b  03c8                 add ecx, eax
// 0050f87d  6a01                 push 1
// 0050f87f  51                   push ecx
// 0050f880  8bcb                 mov ecx, ebx
// 0050f882  e8495f0000           call 0x5157d0
// 0050f887  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050f88a  8b5340               mov edx, dword ptr [ebx + 0x40]
// 0050f88d  8a0c10               mov cl, byte ptr [eax + edx]
// 0050f890  40                   inc eax
// 0050f891  894344               mov dword ptr [ebx + 0x44], eax
// 0050f894  884f02               mov byte ptr [edi + 2], cl
// 0050f897  83c704               add edi, 4
// 0050f89a  836c241801           sub dword ptr [esp + 0x18], 1
// 0050f89f  0f854bffffff         jne 0x50f7f0
// 0050f8a5  8b460c               mov eax, dword ptr [esi + 0xc]
// 0050f8a8  83caff               or edx, 0xffffffff
// 0050f8ab  85c0                 test eax, eax
// 0050f8ad  7d15                 jge 0x50f8c4
// 0050f8af  f7d8                 neg eax
// 0050f8b1  89460c               mov dword ptr [esi + 0xc], eax
// 0050f8b4  33c9                 xor ecx, ecx
// 0050f8b6  89442428             mov dword ptr [esp + 0x28], eax
// 0050f8ba  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0050f8c2  eb0b                 jmp 0x50f8cf
// 0050f8c4  8d48ff               lea ecx, [eax - 1]
// 0050f8c7  89542428             mov dword ptr [esp + 0x28], edx
// 0050f8cb  89542424             mov dword ptr [esp + 0x24], edx
// 0050f8cf  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050f8d3  83f801               cmp eax, 1
// 0050f8d6  0f8506030000         jne 0x50fbe2
// 0050f8dc  8b4608               mov eax, dword ptr [esi + 8]
// 0050f8df  83c007               add eax, 7
// 0050f8e2  c1f803               sar eax, 3
// 0050f8e5  8bd0                 mov edx, eax
// 0050f8e7  83e203               and edx, 3
// 0050f8ea  8944241c             mov dword ptr [esp + 0x1c], eax
// 0050f8ee  740d                 je 0x50f8fd
// 0050f8f0  bf04000000           mov edi, 4
// 0050f8f5  2bfa                 sub edi, edx
// 0050f8f7  03c7                 add eax, edi
// 0050f8f9  8944241c             mov dword ptr [esp + 0x1c], eax
// 0050f8fd  894c2418             mov dword ptr [esp + 0x18], ecx
// 0050f901  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 0050f905  0f84cd040000         je 0x50fdd8
// 0050f90b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0050f90f  90                   nop 
// 0050f910  8b7e08               mov edi, dword ptr [esi + 8]
// 0050f913  0faff9               imul edi, ecx
// 0050f916  33c0                 xor eax, eax
// 0050f918  89442410             mov dword ptr [esp + 0x10], eax
// 0050f91c  8d3c7f               lea edi, [edi + edi*2]
// 0050f91f  85d2                 test edx, edx
// 0050f921  0f8ea4020000         jle 0x50fbcb
// 0050f927  89542420             mov dword ptr [esp + 0x20], edx
// 0050f92b  eb03                 jmp 0x50f930
// 0050f92d  8d4900               lea ecx, [ecx]
// 0050f930  8b4b44               mov ecx, dword ptr [ebx + 0x44]
// 0050f933  8d5101               lea edx, [ecx + 1]
// 0050f936  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0050f939  7e13                 jle 0x50f94e
// 0050f93b  8b4334               mov eax, dword ptr [ebx + 0x34]
// 0050f93e  03c1                 add eax, ecx
// 0050f940  6a01                 push 1
// 0050f942  50                   push eax
// 0050f943  8bcb                 mov ecx, ebx
// 0050f945  e8865e0000           call 0x5157d0
// 0050f94a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050f94e  8b5344               mov edx, dword ptr [ebx + 0x44]
// 0050f951  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 0050f954  8a0c0a               mov cl, byte ptr [edx + ecx]
// 0050f957  42                   inc edx
// 0050f958  895344               mov dword ptr [ebx + 0x44], edx
// 0050f95b  3b4608               cmp eax, dword ptr [esi + 8]
// 0050f95e  884c2417             mov byte ptr [esp + 0x17], cl
// 0050f962  0f8d50020000         jge 0x50fbb8
// 0050f968  8b5604               mov edx, dword ptr [esi + 4]
// 0050f96b  0fb6c9               movzx ecx, cl
// 0050f96e  c1e907               shr ecx, 7
// 0050f971  894c2410             mov dword ptr [esp + 0x10], ecx
// 0050f975  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 0050f97a  880c17               mov byte ptr [edi + edx], cl
// 0050f97d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050f981  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 0050f986  8b5604               mov edx, dword ptr [esi + 4]
// 0050f989  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0050f98d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050f991  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 0050f996  8b5604               mov edx, dword ptr [esi + 4]
// 0050f999  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0050f99d  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 0050f9a1  40                   inc eax
// 0050f9a2  83c704               add edi, 4
// 0050f9a5  3b4608               cmp eax, dword ptr [esi + 8]
// 0050f9a8  89442410             mov dword ptr [esp + 0x10], eax
// 0050f9ac  0f8d06020000         jge 0x50fbb8
// 0050f9b2  8b5604               mov edx, dword ptr [esi + 4]
// 0050f9b5  0fb6c9               movzx ecx, cl
// 0050f9b8  c1e906               shr ecx, 6
// 0050f9bb  83e101               and ecx, 1
// 0050f9be  894c2410             mov dword ptr [esp + 0x10], ecx
// 0050f9c2  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 0050f9c7  880c17               mov byte ptr [edi + edx], cl
// 0050f9ca  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050f9ce  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 0050f9d3  8b5604               mov edx, dword ptr [esi + 4]
// 0050f9d6  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0050f9da  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050f9de  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 0050f9e3  8b5604               mov edx, dword ptr [esi + 4]
// 0050f9e6  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0050f9ea  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 0050f9ee  40                   inc eax
// 0050f9ef  83c704               add edi, 4
// 0050f9f2  3b4608               cmp eax, dword ptr [esi + 8]
// 0050f9f5  89442410             mov dword ptr [esp + 0x10], eax
// 0050f9f9  0f8db9010000         jge 0x50fbb8
// 0050f9ff  8b5604               mov edx, dword ptr [esi + 4]
// 0050fa02  0fb6c9               movzx ecx, cl
// 0050fa05  c1e905               shr ecx, 5
// 0050fa08  83e101               and ecx, 1
// 0050fa0b  894c2410             mov dword ptr [esp + 0x10], ecx
// 0050fa0f  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 0050fa14  880c17               mov byte ptr [edi + edx], cl
// 0050fa17  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050fa1b  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 0050fa20  8b5604               mov edx, dword ptr [esi + 4]
// 0050fa23  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0050fa27  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050fa2b  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 0050fa30  8b5604               mov edx, dword ptr [esi + 4]
// 0050fa33  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0050fa37  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 0050fa3b  40                   inc eax
// 0050fa3c  83c704               add edi, 4
// 0050fa3f  3b4608               cmp eax, dword ptr [esi + 8]
// 0050fa42  89442410             mov dword ptr [esp + 0x10], eax
// 0050fa46  0f8d6c010000         jge 0x50fbb8
// 0050fa4c  8b5604               mov edx, dword ptr [esi + 4]
// 0050fa4f  0fb6c9               movzx ecx, cl
// 0050fa52  c1e904               shr ecx, 4
// 0050fa55  83e101               and ecx, 1
// 0050fa58  894c2410             mov dword ptr [esp + 0x10], ecx
// 0050fa5c  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 0050fa61  880c17               mov byte ptr [edi + edx], cl
// 0050fa64  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050fa68  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 0050fa6d  8b5604               mov edx, dword ptr [esi + 4]
// 0050fa70  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0050fa74  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050fa78  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 0050fa7d  8b5604               mov edx, dword ptr [esi + 4]
// 0050fa80  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0050fa84  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 0050fa88  40                   inc eax
// 0050fa89  83c704               add edi, 4
// 0050fa8c  3b4608               cmp eax, dword ptr [esi + 8]
// 0050fa8f  89442410             mov dword ptr [esp + 0x10], eax
// 0050fa93  0f8d1f010000         jge 0x50fbb8
// 0050fa99  8b5604               mov edx, dword ptr [esi + 4]
// 0050fa9c  0fb6c9               movzx ecx, cl
// 0050fa9f  c1e903               shr ecx, 3
// 0050faa2  83e101               and ecx, 1
// 0050faa5  894c2410             mov dword ptr [esp + 0x10], ecx
// 0050faa9  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 0050faae  880c17               mov byte ptr [edi + edx], cl
// 0050fab1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050fab5  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 0050faba  8b5604               mov edx, dword ptr [esi + 4]
// 0050fabd  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0050fac1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050fac5  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 0050faca  8b5604               mov edx, dword ptr [esi + 4]
// 0050facd  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0050fad1  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 0050fad5  40                   inc eax
// 0050fad6  83c704               add edi, 4
// 0050fad9  3b4608               cmp eax, dword ptr [esi + 8]
// 0050fadc  89442410             mov dword ptr [esp + 0x10], eax
// 0050fae0  0f8dd2000000         jge 0x50fbb8
// 0050fae6  8b5604               mov edx, dword ptr [esi + 4]
// 0050fae9  0fb6c9               movzx ecx, cl
// 0050faec  c1e902               shr ecx, 2
// 0050faef  83e101               and ecx, 1
// 0050faf2  894c2410             mov dword ptr [esp + 0x10], ecx
// 0050faf6  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 0050fafb  880c17               mov byte ptr [edi + edx], cl
// 0050fafe  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050fb02  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 0050fb07  8b5604               mov edx, dword ptr [esi + 4]
// 0050fb0a  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0050fb0e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050fb12  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 0050fb17  8b5604               mov edx, dword ptr [esi + 4]
// 0050fb1a  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0050fb1e  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 0050fb22  40                   inc eax
// 0050fb23  83c704               add edi, 4
// 0050fb26  3b4608               cmp eax, dword ptr [esi + 8]
// 0050fb29  89442410             mov dword ptr [esp + 0x10], eax
// 0050fb2d  0f8d85000000         jge 0x50fbb8
// 0050fb33  8b5604               mov edx, dword ptr [esi + 4]
// 0050fb36  0fb6c9               movzx ecx, cl
// 0050fb39  d1e9                 shr ecx, 1
// 0050fb3b  83e101               and ecx, 1
// 0050fb3e  894c2410             mov dword ptr [esp + 0x10], ecx
// 0050fb42  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 0050fb47  880c17               mov byte ptr [edi + edx], cl
// 0050fb4a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050fb4e  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 0050fb53  8b5604               mov edx, dword ptr [esi + 4]
// 0050fb56  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0050fb5a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050fb5e  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 0050fb63  8b5604               mov edx, dword ptr [esi + 4]
// 0050fb66  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0050fb6a  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 0050fb6e  40                   inc eax
// 0050fb6f  83c704               add edi, 4
// 0050fb72  3b4608               cmp eax, dword ptr [esi + 8]
// 0050fb75  89442410             mov dword ptr [esp + 0x10], eax
// 0050fb79  7d3d                 jge 0x50fbb8
// 0050fb7b  8b5604               mov edx, dword ptr [esi + 4]
// 0050fb7e  0fb6c9               movzx ecx, cl
// 0050fb81  83e101               and ecx, 1
// 0050fb84  894c2410             mov dword ptr [esp + 0x10], ecx
// 0050fb88  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 0050fb8d  880c17               mov byte ptr [edi + edx], cl
// 0050fb90  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050fb94  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 0050fb99  8b5604               mov edx, dword ptr [esi + 4]
// 0050fb9c  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0050fba0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050fba4  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 0050fba9  8b5604               mov edx, dword ptr [esi + 4]
// 0050fbac  40                   inc eax
// 0050fbad  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0050fbb1  89442410             mov dword ptr [esp + 0x10], eax
// 0050fbb5  83c704               add edi, 4
// 0050fbb8  836c242001           sub dword ptr [esp + 0x20], 1
// 0050fbbd  0f856dfdffff         jne 0x50f930
// 0050fbc3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0050fbc7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0050fbcb  034c2424             add ecx, dword ptr [esp + 0x24]
// 0050fbcf  894c2418             mov dword ptr [esp + 0x18], ecx
// 0050fbd3  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 0050fbd7  0f8533fdffff         jne 0x50f910
// 0050fbdd  e9f6010000           jmp 0x50fdd8
// 0050fbe2  83f804               cmp eax, 4
// 0050fbe5  0f8521010000         jne 0x50fd0c
// 0050fbeb  8b4608               mov eax, dword ptr [esi + 8]
// 0050fbee  40                   inc eax
// 0050fbef  d1f8                 sar eax, 1
// 0050fbf1  8bd0                 mov edx, eax
// 0050fbf3  83e203               and edx, 3
// 0050fbf6  89442420             mov dword ptr [esp + 0x20], eax
// 0050fbfa  740d                 je 0x50fc09
// 0050fbfc  bf04000000           mov edi, 4
// 0050fc01  2bfa                 sub edi, edx
// 0050fc03  03c7                 add eax, edi
// 0050fc05  89442420             mov dword ptr [esp + 0x20], eax
// 0050fc09  894c2418             mov dword ptr [esp + 0x18], ecx
// 0050fc0d  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 0050fc11  0f84c1010000         je 0x50fdd8
// 0050fc17  eb07                 jmp 0x50fc20
// 0050fc19  8da42400000000       lea esp, [esp]
// 0050fc20  8b7e08               mov edi, dword ptr [esi + 8]
// 0050fc23  8b442418             mov eax, dword ptr [esp + 0x18]
// 0050fc27  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0050fc2b  0faff8               imul edi, eax
// 0050fc2e  03ff                 add edi, edi
// 0050fc30  03ff                 add edi, edi
// 0050fc32  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0050fc3a  85c9                 test ecx, ecx
// 0050fc3c  0f8eb3000000         jle 0x50fcf5
// 0050fc42  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0050fc46  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050fc49  8d5001               lea edx, [eax + 1]
// 0050fc4c  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0050fc4f  7e0f                 jle 0x50fc60
// 0050fc51  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0050fc54  03c8                 add ecx, eax
// 0050fc56  6a01                 push 1
// 0050fc58  51                   push ecx
// 0050fc59  8bcb                 mov ecx, ebx
// 0050fc5b  e8705b0000           call 0x5157d0
// 0050fc60  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050fc63  8b5340               mov edx, dword ptr [ebx + 0x40]
// 0050fc66  8a0c10               mov cl, byte ptr [eax + edx]
// 0050fc69  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050fc6d  40                   inc eax
// 0050fc6e  0fb6c9               movzx ecx, cl
// 0050fc71  894344               mov dword ptr [ebx + 0x44], eax
// 0050fc74  8bc1                 mov eax, ecx
// 0050fc76  83e10f               and ecx, 0xf
// 0050fc79  c1e804               shr eax, 4
// 0050fc7c  3b5608               cmp edx, dword ptr [esi + 8]
// 0050fc7f  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0050fc83  7d2e                 jge 0x50fcb3
// 0050fc85  0fb6548500           movzx edx, byte ptr [ebp + eax*4]
// 0050fc8a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050fc8d  ff442410             inc dword ptr [esp + 0x10]
// 0050fc91  88140f               mov byte ptr [edi + ecx], dl
// 0050fc94  0fb6548501           movzx edx, byte ptr [ebp + eax*4 + 1]
// 0050fc99  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050fc9c  88543901             mov byte ptr [ecx + edi + 1], dl
// 0050fca0  0fb6548502           movzx edx, byte ptr [ebp + eax*4 + 2]
// 0050fca5  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050fca8  88543902             mov byte ptr [ecx + edi + 2], dl
// 0050fcac  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0050fcb0  83c704               add edi, 4
// 0050fcb3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050fcb7  3b4608               cmp eax, dword ptr [esi + 8]
// 0050fcba  7d2a                 jge 0x50fce6
// 0050fcbc  0fb6448d00           movzx eax, byte ptr [ebp + ecx*4]
// 0050fcc1  8b5604               mov edx, dword ptr [esi + 4]
// 0050fcc4  ff442410             inc dword ptr [esp + 0x10]
// 0050fcc8  880417               mov byte ptr [edi + edx], al
// 0050fccb  0fb6448d01           movzx eax, byte ptr [ebp + ecx*4 + 1]
// 0050fcd0  8b5604               mov edx, dword ptr [esi + 4]
// 0050fcd3  88443a01             mov byte ptr [edx + edi + 1], al
// 0050fcd7  0fb6448d02           movzx eax, byte ptr [ebp + ecx*4 + 2]
// 0050fcdc  8b5604               mov edx, dword ptr [esi + 4]
// 0050fcdf  88443a02             mov byte ptr [edx + edi + 2], al
// 0050fce3  83c704               add edi, 4
// 0050fce6  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0050fceb  0f8555ffffff         jne 0x50fc46
// 0050fcf1  8b442418             mov eax, dword ptr [esp + 0x18]
// 0050fcf5  03442424             add eax, dword ptr [esp + 0x24]
// 0050fcf9  89442418             mov dword ptr [esp + 0x18], eax
// 0050fcfd  3b442428             cmp eax, dword ptr [esp + 0x28]
// 0050fd01  0f8519ffffff         jne 0x50fc20
// 0050fd07  e9cc000000           jmp 0x50fdd8
// 0050fd0c  83f808               cmp eax, 8
// 0050fd0f  0f85c3000000         jne 0x50fdd8
// 0050fd15  8b7e08               mov edi, dword ptr [esi + 8]
// 0050fd18  8bc7                 mov eax, edi
// 0050fd1a  83e003               and eax, 3
// 0050fd1d  897c241c             mov dword ptr [esp + 0x1c], edi
// 0050fd21  740d                 je 0x50fd30
// 0050fd23  ba04000000           mov edx, 4
// 0050fd28  2bd0                 sub edx, eax
// 0050fd2a  03fa                 add edi, edx
// 0050fd2c  897c241c             mov dword ptr [esp + 0x1c], edi
// 0050fd30  894c2418             mov dword ptr [esp + 0x18], ecx
// 0050fd34  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 0050fd38  0f849a000000         je 0x50fdd8
// 0050fd3e  8bff                 mov edi, edi
// 0050fd40  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0050fd48  85ff                 test edi, edi
// 0050fd4a  7e76                 jle 0x50fdc2
// 0050fd4c  897c2420             mov dword ptr [esp + 0x20], edi
// 0050fd50  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050fd53  8d4801               lea ecx, [eax + 1]
// 0050fd56  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 0050fd59  7e0f                 jle 0x50fd6a
// 0050fd5b  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0050fd5e  6a01                 push 1
// 0050fd60  03d0                 add edx, eax
// 0050fd62  52                   push edx
// 0050fd63  8bcb                 mov ecx, ebx
// 0050fd65  e8665a0000           call 0x5157d0
// 0050fd6a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050fd6d  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 0050fd70  8a0c08               mov cl, byte ptr [eax + ecx]
// 0050fd73  40                   inc eax
// 0050fd74  894344               mov dword ptr [ebx + 0x44], eax
// 0050fd77  8b4608               mov eax, dword ptr [esi + 8]
// 0050fd7a  39442410             cmp dword ptr [esp + 0x10], eax
// 0050fd7e  7d3b                 jge 0x50fdbb
// 0050fd80  0faf442418           imul eax, dword ptr [esp + 0x18]
// 0050fd85  03442410             add eax, dword ptr [esp + 0x10]
// 0050fd89  8b5604               mov edx, dword ptr [esi + 4]
// 0050fd8c  0fb6f9               movzx edi, cl
// 0050fd8f  0fb64cbd00           movzx ecx, byte ptr [ebp + edi*4]
// 0050fd94  03c0                 add eax, eax
// 0050fd96  03c0                 add eax, eax
// 0050fd98  ff442410             inc dword ptr [esp + 0x10]
// 0050fd9c  880c10               mov byte ptr [eax + edx], cl
// 0050fd9f  0fb64cbd01           movzx ecx, byte ptr [ebp + edi*4 + 1]
// 0050fda4  8b5604               mov edx, dword ptr [esi + 4]
// 0050fda7  884c0201             mov byte ptr [edx + eax + 1], cl
// 0050fdab  0fb64cbd02           movzx ecx, byte ptr [ebp + edi*4 + 2]
// 0050fdb0  8b5604               mov edx, dword ptr [esi + 4]
// 0050fdb3  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0050fdb7  884c0202             mov byte ptr [edx + eax + 2], cl
// 0050fdbb  836c242001           sub dword ptr [esp + 0x20], 1
// 0050fdc0  758e                 jne 0x50fd50
// 0050fdc2  8b442418             mov eax, dword ptr [esp + 0x18]
// 0050fdc6  03442424             add eax, dword ptr [esp + 0x24]
// 0050fdca  89442418             mov dword ptr [esp + 0x18], eax
// 0050fdce  3b442428             cmp eax, dword ptr [esp + 0x28]
// 0050fdd2  0f8568ffffff         jne 0x50fd40
// 0050fdd8  8b5608               mov edx, dword ptr [esi + 8]
// 0050fddb  89542420             mov dword ptr [esp + 0x20], edx
// 0050fddf  db442420             fild dword ptr [esp + 0x20]
// 0050fde3  83ec08               sub esp, 8
// 0050fde6  dc0d50828200         fmul qword ptr [0x828250]
// 0050fdec  dd1c24               fstp qword ptr [esp]
// 0050fdef  ff15ec278000         call dword ptr [0x8027ec]
// 0050fdf5  83c408               add esp, 8
// 0050fdf8  e8f3191900           call 0x6a17f0
// 0050fdfd  8bc8                 mov ecx, eax
// 0050fdff  83e103               and ecx, 3
// 0050fe02  89442418             mov dword ptr [esp + 0x18], eax
// 0050fe06  740d                 je 0x50fe15
// 0050fe08  ba04000000           mov edx, 4
// 0050fe0d  2bd1                 sub edx, ecx
// 0050fe0f  03c2                 add eax, edx
// 0050fe11  89442418             mov dword ptr [esp + 0x18], eax
// 0050fe15  8b460c               mov eax, dword ptr [esi + 0xc]
// 0050fe18  83e801               sub eax, 1
// 0050fe1b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0050fe1f  0f8897000000         js 0x50febc
// 0050fe25  eb09                 jmp 0x50fe30
// 0050fe27  8da42400000000       lea esp, [esp]
// 0050fe2e  8bff                 mov edi, edi
// 0050fe30  837c241800           cmp dword ptr [esp + 0x18], 0
// 0050fe35  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0050fe3d  7e72                 jle 0x50feb1
// 0050fe3f  8b442418             mov eax, dword ptr [esp + 0x18]
// 0050fe43  89442420             mov dword ptr [esp + 0x20], eax
// 0050fe47  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050fe4a  8d4801               lea ecx, [eax + 1]
// 0050fe4d  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 0050fe50  7e0f                 jle 0x50fe61
// 0050fe52  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0050fe55  6a01                 push 1
// 0050fe57  03d0                 add edx, eax
// 0050fe59  52                   push edx
// 0050fe5a  8bcb                 mov ecx, ebx
// 0050fe5c  e86f590000           call 0x5157d0
// 0050fe61  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0050fe64  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 0050fe67  8a1408               mov dl, byte ptr [eax + ecx]
// 0050fe6a  40                   inc eax
// 0050fe6b  88542417             mov byte ptr [esp + 0x17], dl
// 0050fe6f  894344               mov dword ptr [ebx + 0x44], eax
// 0050fe72  33d2                 xor edx, edx
// 0050fe74  8b7e08               mov edi, dword ptr [esi + 8]
// 0050fe77  397c2424             cmp dword ptr [esp + 0x24], edi
// 0050fe7b  7d2d                 jge 0x50feaa
// 0050fe7d  0faf7c241c           imul edi, dword ptr [esp + 0x1c]
// 0050fe82  0fb6442417           movzx eax, byte ptr [esp + 0x17]
// 0050fe87  037c2424             add edi, dword ptr [esp + 0x24]
// 0050fe8b  ff442424             inc dword ptr [esp + 0x24]
// 0050fe8f  b907000000           mov ecx, 7
// 0050fe94  2aca                 sub cl, dl
// 0050fe96  d3e8                 shr eax, cl
// 0050fe98  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050fe9b  42                   inc edx
// 0050fe9c  83e001               and eax, 1
// 0050fe9f  fec8                 dec al
// 0050fea1  83fa08               cmp edx, 8
// 0050fea4  8844b903             mov byte ptr [ecx + edi*4 + 3], al
// 0050fea8  7cca                 jl 0x50fe74
// 0050feaa  836c242001           sub dword ptr [esp + 0x20], 1
// 0050feaf  7596                 jne 0x50fe47
// 0050feb1  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0050feb6  0f8974ffffff         jns 0x50fe30
// 0050febc  55                   push ebp
// 0050febd  c78424e4000000ffffffff mov dword ptr [esp + 0xe4], 0xffffffff
// 0050fec8  e8537effff           call 0x507d20
// 0050fecd  8b8c24dc000000       mov ecx, dword ptr [esp + 0xdc]
// 0050fed4  83c404               add esp, 4
// 0050fed7  5f                   pop edi
// 0050fed8  5e                   pop esi
// 0050fed9  5d                   pop ebp
// 0050feda  5b                   pop ebx
// 0050fedb  64890d00000000       mov dword ptr fs:[0], ecx
// 0050fee2  81c4d4000000         add esp, 0xd4
// 0050fee8  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\GImage_bmp.cpp (function ?decodeICO@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_bmp.cpp

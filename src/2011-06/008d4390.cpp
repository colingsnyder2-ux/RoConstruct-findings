// roc 2011-06 008d4390  unit: CXTPTabManagerItem  size: 250 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d4390
//
// 008d4390  6aff                 push -1
// 008d4392  68c9d1a000           push 0xa0d1c9
// 008d4397  64a100000000         mov eax, dword ptr fs:[0]
// 008d439d  50                   push eax
// 008d439e  51                   push ecx
// 008d439f  53                   push ebx
// 008d43a0  56                   push esi
// 008d43a1  57                   push edi
// 008d43a2  a12058c900           mov eax, dword ptr [0xc95820]
// 008d43a7  33c4                 xor eax, esp
// 008d43a9  50                   push eax
// 008d43aa  8d442414             lea eax, [esp + 0x14]
// 008d43ae  64a300000000         mov dword ptr fs:[0], eax
// 008d43b4  8bf1                 mov esi, ecx
// 008d43b6  89742410             mov dword ptr [esp + 0x10], esi
// 008d43ba  c706147aad00         mov dword ptr [esi], 0xad7a14
// 008d43c0  8b465c               mov eax, dword ptr [esi + 0x5c]
// 008d43c3  33ff                 xor edi, edi
// 008d43c5  c744241c03000000     mov dword ptr [esp + 0x1c], 3
// 008d43cd  85c0                 test eax, eax
// 008d43cf  7e30                 jle 0x8d4401
// 008d43d1  85ff                 test edi, edi
// 008d43d3  0f8cac000000         jl 0x8d4485
// 008d43d9  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 008d43dc  0f8da3000000         jge 0x8d4485
// 008d43e2  8b4658               mov eax, dword ptr [esi + 0x58]
// 008d43e5  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 008d43e8  8b13                 mov edx, dword ptr [ebx]
// 008d43ea  8d04b8               lea eax, [eax + edi*4]
// 008d43ed  8b425c               mov eax, dword ptr [edx + 0x5c]
// 008d43f0  8bcb                 mov ecx, ebx
// 008d43f2  ffd0                 call eax
// 008d43f4  8bcb                 mov ecx, ebx
// 008d43f6  e8df61f3ff           call 0x80a5da
// 008d43fb  47                   inc edi
// 008d43fc  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 008d43ff  7cd0                 jl 0x8d43d1
// 008d4401  33ff                 xor edi, edi
// 008d4403  397e70               cmp dword ptr [esi + 0x70], edi
// 008d4406  7e23                 jle 0x8d442b
// 008d4408  85ff                 test edi, edi
// 008d440a  7c79                 jl 0x8d4485
// 008d440c  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 008d440f  7d74                 jge 0x8d4485
// 008d4411  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008d4414  8d04b9               lea eax, [ecx + edi*4]
// 008d4417  8b08                 mov ecx, dword ptr [eax]
// 008d4419  85c9                 test ecx, ecx
// 008d441b  7408                 je 0x8d4425
// 008d441d  8b11                 mov edx, dword ptr [ecx]
// 008d441f  8b02                 mov eax, dword ptr [edx]
// 008d4421  6a01                 push 1
// 008d4423  ffd0                 call eax
// 008d4425  47                   inc edi
// 008d4426  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 008d4429  7cdd                 jl 0x8d4408
// 008d442b  8bbe88000000         mov edi, dword ptr [esi + 0x88]
// 008d4431  85ff                 test edi, edi
// 008d4433  7410                 je 0x8d4445
// 008d4435  8bcf                 mov ecx, edi
// 008d4437  e824eeffff           call 0x8d3260
// 008d443c  57                   push edi
// 008d443d  e8165cf3ff           call 0x80a058
// 008d4442  83c404               add esp, 4
// 008d4445  8d4e7c               lea ecx, [esi + 0x7c]
// 008d4448  c644241c02           mov byte ptr [esp + 0x1c], 2
// 008d444d  e8ce93faff           call 0x87d820
// 008d4452  8d4e68               lea ecx, [esi + 0x68]
// 008d4455  c644241c01           mov byte ptr [esp + 0x1c], 1
// 008d445a  e871fbffff           call 0x8d3fd0
// 008d445f  8d4e54               lea ecx, [esi + 0x54]
// 008d4462  c644241c00           mov byte ptr [esp + 0x1c], 0
// 008d4467  e8641af9ff           call 0x865ed0
// 008d446c  c70620acac00         mov dword ptr [esi], 0xacac20
// 008d4472  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d4476  64890d00000000       mov dword ptr fs:[0], ecx
// 008d447d  59                   pop ecx
// 008d447e  5f                   pop edi
// 008d447f  5e                   pop esi
// 008d4480  5b                   pop ebx
// 008d4481  83c410               add esp, 0x10
// 008d4484  c3                   ret 
// 008d4485  e8805ef3ff           call 0x80a30a
// copied from an identical function in another client (function ??1CXTPTabManager@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp
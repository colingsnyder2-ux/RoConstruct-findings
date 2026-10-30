// roc 2009-06 007f4710  unit: CXTPTabManagerItem  size: 250 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f4710
//
// 007f4710  6aff                 push -1
// 007f4712  68f90d8800           push 0x880df9
// 007f4717  64a100000000         mov eax, dword ptr fs:[0]
// 007f471d  50                   push eax
// 007f471e  51                   push ecx
// 007f471f  53                   push ebx
// 007f4720  56                   push esi
// 007f4721  57                   push edi
// 007f4722  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007f4727  33c4                 xor eax, esp
// 007f4729  50                   push eax
// 007f472a  8d442414             lea eax, [esp + 0x14]
// 007f472e  64a300000000         mov dword ptr fs:[0], eax
// 007f4734  8bf1                 mov esi, ecx
// 007f4736  89742410             mov dword ptr [esp + 0x10], esi
// 007f473a  c70654a39000         mov dword ptr [esi], 0x90a354
// 007f4740  8b465c               mov eax, dword ptr [esi + 0x5c]
// 007f4743  33ff                 xor edi, edi
// 007f4745  c744241c03000000     mov dword ptr [esp + 0x1c], 3
// 007f474d  85c0                 test eax, eax
// 007f474f  7e30                 jle 0x7f4781
// 007f4751  85ff                 test edi, edi
// 007f4753  0f8cac000000         jl 0x7f4805
// 007f4759  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 007f475c  0f8da3000000         jge 0x7f4805
// 007f4762  8b4658               mov eax, dword ptr [esi + 0x58]
// 007f4765  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 007f4768  8b13                 mov edx, dword ptr [ebx]
// 007f476a  8d04b8               lea eax, [eax + edi*4]
// 007f476d  8b425c               mov eax, dword ptr [edx + 0x5c]
// 007f4770  8bcb                 mov ecx, ebx
// 007f4772  ffd0                 call eax
// 007f4774  8bcb                 mov ecx, ebx
// 007f4776  e82d48f2ff           call 0x718fa8
// 007f477b  47                   inc edi
// 007f477c  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 007f477f  7cd0                 jl 0x7f4751
// 007f4781  33ff                 xor edi, edi
// 007f4783  397e70               cmp dword ptr [esi + 0x70], edi
// 007f4786  7e23                 jle 0x7f47ab
// 007f4788  85ff                 test edi, edi
// 007f478a  7c79                 jl 0x7f4805
// 007f478c  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 007f478f  7d74                 jge 0x7f4805
// 007f4791  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 007f4794  8d04b9               lea eax, [ecx + edi*4]
// 007f4797  8b08                 mov ecx, dword ptr [eax]
// 007f4799  85c9                 test ecx, ecx
// 007f479b  7408                 je 0x7f47a5
// 007f479d  8b11                 mov edx, dword ptr [ecx]
// 007f479f  8b02                 mov eax, dword ptr [edx]
// 007f47a1  6a01                 push 1
// 007f47a3  ffd0                 call eax
// 007f47a5  47                   inc edi
// 007f47a6  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 007f47a9  7cdd                 jl 0x7f4788
// 007f47ab  8bbe88000000         mov edi, dword ptr [esi + 0x88]
// 007f47b1  85ff                 test edi, edi
// 007f47b3  7410                 je 0x7f47c5
// 007f47b5  8bcf                 mov ecx, edi
// 007f47b7  e804eeffff           call 0x7f35c0
// 007f47bc  57                   push edi
// 007f47bd  e87042f2ff           call 0x718a32
// 007f47c2  83c404               add esp, 4
// 007f47c5  8d4e7c               lea ecx, [esi + 0x7c]
// 007f47c8  c644241c02           mov byte ptr [esp + 0x1c], 2
// 007f47cd  e81ec9f9ff           call 0x7910f0
// 007f47d2  8d4e68               lea ecx, [esi + 0x68]
// 007f47d5  c644241c01           mov byte ptr [esp + 0x1c], 1
// 007f47da  e871fbffff           call 0x7f4350
// 007f47df  8d4e54               lea ecx, [esi + 0x54]
// 007f47e2  c644241c00           mov byte ptr [esp + 0x1c], 0
// 007f47e7  e88474f8ff           call 0x77bc70
// 007f47ec  c70618c28f00         mov dword ptr [esi], 0x8fc218
// 007f47f2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f47f6  64890d00000000       mov dword ptr fs:[0], ecx
// 007f47fd  59                   pop ecx
// 007f47fe  5f                   pop edi
// 007f47ff  5e                   pop esi
// 007f4800  5b                   pop ebx
// 007f4801  83c410               add esp, 0x10
// 007f4804  c3                   ret 
// 007f4805  e8da44f2ff           call 0x718ce4
// copied from an identical function in another client (function ??1CXTPTabManager@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp
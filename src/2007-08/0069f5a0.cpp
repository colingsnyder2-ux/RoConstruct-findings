// roc 2007-08 0069f5a0  unit: CXTColorSelectorCtrl  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069f5a0
//
// 0069f5a0  6aff                 push -1
// 0069f5a2  68ae417600           push 0x7641ae
// 0069f5a7  64a100000000         mov eax, dword ptr fs:[0]
// 0069f5ad  50                   push eax
// 0069f5ae  51                   push ecx
// 0069f5af  53                   push ebx
// 0069f5b0  56                   push esi
// 0069f5b1  57                   push edi
// 0069f5b2  a188518b00           mov eax, dword ptr [0x8b5188]
// 0069f5b7  33c4                 xor eax, esp
// 0069f5b9  50                   push eax
// 0069f5ba  8d442414             lea eax, [esp + 0x14]
// 0069f5be  64a300000000         mov dword ptr fs:[0], eax
// 0069f5c4  8bf1                 mov esi, ecx
// 0069f5c6  89742410             mov dword ptr [esp + 0x10], esi
// 0069f5ca  e80b10f9ff           call 0x6305da
// 0069f5cf  c70674c67c00         mov dword ptr [esi], 0x7cc674
// 0069f5d5  33db                 xor ebx, ebx
// 0069f5d7  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0069f5db  8d7e54               lea edi, [esi + 0x54]
// 0069f5de  e8fdfbffff           call 0x69f1e0
// 0069f5e3  50                   push eax
// 0069f5e4  8bcf                 mov ecx, edi
// 0069f5e6  e8752bffff           call 0x692160
// 0069f5eb  c707842e7d00         mov dword ptr [edi], 0x7d2e84
// 0069f5f1  8dbed0000000         lea edi, [esi + 0xd0]
// 0069f5f7  8bcf                 mov ecx, edi
// 0069f5f9  c706942e7d00         mov dword ptr [esi], 0x7d2e94
// 0069f5ff  ff15acdd7700         call dword ptr [0x77ddac]
// 0069f605  8d8ed4000000         lea ecx, [esi + 0xd4]
// 0069f60b  c644241c02           mov byte ptr [esp + 0x1c], 2
// 0069f610  e8ab0ef9ff           call 0x6304c0
// 0069f615  8d8edc000000         lea ecx, [esi + 0xdc]
// 0069f61b  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0069f620  e87bfbffff           call 0x69f1a0
// 0069f625  6854597800           push 0x785954
// 0069f62a  8bcf                 mov ecx, edi
// 0069f62c  c644242004           mov byte ptr [esp + 0x20], 4
// 0069f631  889e81000000         mov byte ptr [esi + 0x81], bl
// 0069f637  889e80000000         mov byte ptr [esi + 0x80], bl
// 0069f63d  ff156cdd7700         call dword ptr [0x77dd6c]
// 0069f643  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 0069f649  899e84000000         mov dword ptr [esi + 0x84], ebx
// 0069f64f  899e88000000         mov dword ptr [esi + 0x88], ebx
// 0069f655  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 0069f65b  899e8c010000         mov dword ptr [esi + 0x18c], ebx
// 0069f661  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0069f664  895e6c               mov dword ptr [esi + 0x6c], ebx
// 0069f667  e88482ffff           call 0x6978f0
// 0069f66c  bf10000000           mov edi, 0x10
// 0069f671  39b8c0000000         cmp dword ptr [eax + 0xc0], edi
// 0069f677  7d0d                 jge 0x69f686
// 0069f679  e87282ffff           call 0x6978f0
// 0069f67e  8b80c0000000         mov eax, dword ptr [eax + 0xc0]
// 0069f684  eb02                 jmp 0x69f688
// 0069f686  8bc7                 mov eax, edi
// 0069f688  898690000000         mov dword ptr [esi + 0x90], eax
// 0069f68e  e85d82ffff           call 0x6978f0
// 0069f693  39b8c4000000         cmp dword ptr [eax + 0xc4], edi
// 0069f699  7d0d                 jge 0x69f6a8
// 0069f69b  e85082ffff           call 0x6978f0
// 0069f6a0  8b80c4000000         mov eax, dword ptr [eax + 0xc4]
// 0069f6a6  eb02                 jmp 0x69f6aa
// 0069f6a8  8bc7                 mov eax, edi
// 0069f6aa  8b3d58ee7700         mov edi, dword ptr [0x77ee58]
// 0069f6b0  6a12                 push 0x12
// 0069f6b2  898694000000         mov dword ptr [esi + 0x94], eax
// 0069f6b8  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0069f6be  ffd7                 call edi
// 0069f6c0  6a0f                 push 0xf
// 0069f6c2  894678               mov dword ptr [esi + 0x78], eax
// 0069f6c5  ffd7                 call edi
// 0069f6c7  6a0f                 push 0xf
// 0069f6c9  894670               mov dword ptr [esi + 0x70], eax
// 0069f6cc  ffd7                 call edi
// 0069f6ce  894674               mov dword ptr [esi + 0x74], eax
// 0069f6d1  8bc6                 mov eax, esi
// 0069f6d3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069f6d7  64890d00000000       mov dword ptr fs:[0], ecx
// 0069f6de  59                   pop ecx
// 0069f6df  5f                   pop edi
// 0069f6e0  5e                   pop esi
// 0069f6e1  5b                   pop ebx
// 0069f6e2  83c410               add esp, 0x10
// 0069f6e5  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaption@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp
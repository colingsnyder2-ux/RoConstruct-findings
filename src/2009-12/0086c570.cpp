// roc 2009-12 0086c570  unit: CXTCaptionButton  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086c570
//
// 0086c570  6aff                 push -1
// 0086c572  68fef79500           push 0x95f7fe
// 0086c577  64a100000000         mov eax, dword ptr fs:[0]
// 0086c57d  50                   push eax
// 0086c57e  51                   push ecx
// 0086c57f  53                   push ebx
// 0086c580  56                   push esi
// 0086c581  57                   push edi
// 0086c582  a10052b600           mov eax, dword ptr [0xb65200]
// 0086c587  33c4                 xor eax, esp
// 0086c589  50                   push eax
// 0086c58a  8d442414             lea eax, [esp + 0x14]
// 0086c58e  64a300000000         mov dword ptr fs:[0], eax
// 0086c594  8bf1                 mov esi, ecx
// 0086c596  89742410             mov dword ptr [esp + 0x10], esi
// 0086c59a  e8a97bf8ff           call 0x7f4148
// 0086c59f  c7068c939f00         mov dword ptr [esi], 0x9f938c
// 0086c5a5  33db                 xor ebx, ebx
// 0086c5a7  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0086c5ab  8d7e54               lea edi, [esi + 0x54]
// 0086c5ae  e8ddfbffff           call 0x86c190
// 0086c5b3  50                   push eax
// 0086c5b4  8bcf                 mov ecx, edi
// 0086c5b6  e875e1feff           call 0x85a730
// 0086c5bb  c707e401a000         mov dword ptr [edi], 0xa001e4
// 0086c5c1  8dbed0000000         lea edi, [esi + 0xd0]
// 0086c5c7  8bcf                 mov ecx, edi
// 0086c5c9  c706f401a000         mov dword ptr [esi], 0xa001f4
// 0086c5cf  ff1574de9800         call dword ptr [0x98de74]
// 0086c5d5  8d8ed4000000         lea ecx, [esi + 0xd4]
// 0086c5db  c644241c02           mov byte ptr [esp + 0x1c], 2
// 0086c5e0  e82b7af8ff           call 0x7f4010
// 0086c5e5  8d8edc000000         lea ecx, [esi + 0xdc]
// 0086c5eb  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0086c5f0  e85bfbffff           call 0x86c150
// 0086c5f5  6856fd9900           push 0x99fd56
// 0086c5fa  8bcf                 mov ecx, edi
// 0086c5fc  c644242004           mov byte ptr [esp + 0x20], 4
// 0086c601  889e81000000         mov byte ptr [esi + 0x81], bl
// 0086c607  889e80000000         mov byte ptr [esi + 0x80], bl
// 0086c60d  ff155cde9800         call dword ptr [0x98de5c]
// 0086c613  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 0086c619  899e84000000         mov dword ptr [esi + 0x84], ebx
// 0086c61f  899e88000000         mov dword ptr [esi + 0x88], ebx
// 0086c625  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 0086c62b  899e8c010000         mov dword ptr [esi + 0x18c], ebx
// 0086c631  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0086c634  895e6c               mov dword ptr [esi + 0x6c], ebx
// 0086c637  e8a47effff           call 0x8644e0
// 0086c63c  bf10000000           mov edi, 0x10
// 0086c641  39b8c0000000         cmp dword ptr [eax + 0xc0], edi
// 0086c647  7d0d                 jge 0x86c656
// 0086c649  e8927effff           call 0x8644e0
// 0086c64e  8b80c0000000         mov eax, dword ptr [eax + 0xc0]
// 0086c654  eb02                 jmp 0x86c658
// 0086c656  8bc7                 mov eax, edi
// 0086c658  898690000000         mov dword ptr [esi + 0x90], eax
// 0086c65e  e87d7effff           call 0x8644e0
// 0086c663  39b8c4000000         cmp dword ptr [eax + 0xc4], edi
// 0086c669  7d0d                 jge 0x86c678
// 0086c66b  e8707effff           call 0x8644e0
// 0086c670  8b80c4000000         mov eax, dword ptr [eax + 0xc4]
// 0086c676  eb02                 jmp 0x86c67a
// 0086c678  8bc7                 mov eax, edi
// 0086c67a  8b3dd8ca9800         mov edi, dword ptr [0x98cad8]
// 0086c680  6a12                 push 0x12
// 0086c682  898694000000         mov dword ptr [esi + 0x94], eax
// 0086c688  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0086c68e  ffd7                 call edi
// 0086c690  6a0f                 push 0xf
// 0086c692  894678               mov dword ptr [esi + 0x78], eax
// 0086c695  ffd7                 call edi
// 0086c697  6a0f                 push 0xf
// 0086c699  894670               mov dword ptr [esi + 0x70], eax
// 0086c69c  ffd7                 call edi
// 0086c69e  894674               mov dword ptr [esi + 0x74], eax
// 0086c6a1  8bc6                 mov eax, esi
// 0086c6a3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0086c6a7  64890d00000000       mov dword ptr fs:[0], ecx
// 0086c6ae  59                   pop ecx
// 0086c6af  5f                   pop edi
// 0086c6b0  5e                   pop esi
// 0086c6b1  5b                   pop ebx
// 0086c6b2  83c410               add esp, 0x10
// 0086c6b5  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaption@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp
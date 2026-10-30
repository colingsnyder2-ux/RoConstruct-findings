// roc 2009-06 00791550  unit: CXTCaptionButton  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00791550
//
// 00791550  6aff                 push -1
// 00791552  68beb58700           push 0x87b5be
// 00791557  64a100000000         mov eax, dword ptr fs:[0]
// 0079155d  50                   push eax
// 0079155e  51                   push ecx
// 0079155f  53                   push ebx
// 00791560  56                   push esi
// 00791561  57                   push edi
// 00791562  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00791567  33c4                 xor eax, esp
// 00791569  50                   push eax
// 0079156a  8d442414             lea eax, [esp + 0x14]
// 0079156e  64a300000000         mov dword ptr fs:[0], eax
// 00791574  8bf1                 mov esi, ecx
// 00791576  89742410             mov dword ptr [esp + 0x10], esi
// 0079157a  e8a17df8ff           call 0x719320
// 0079157f  c706e48e8f00         mov dword ptr [esi], 0x8f8ee4
// 00791585  33db                 xor ebx, ebx
// 00791587  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0079158b  8d7e54               lea edi, [esi + 0x54]
// 0079158e  e8edfbffff           call 0x791180
// 00791593  50                   push eax
// 00791594  8bcf                 mov ecx, edi
// 00791596  e8d5e0feff           call 0x77f670
// 0079159b  c7075cfd8f00         mov dword ptr [edi], 0x8ffd5c
// 007915a1  8dbed0000000         lea edi, [esi + 0xd0]
// 007915a7  8bcf                 mov ecx, edi
// 007915a9  c7066cfd8f00         mov dword ptr [esi], 0x8ffd6c
// 007915af  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007915b5  8d8ed4000000         lea ecx, [esi + 0xd4]
// 007915bb  c644241c02           mov byte ptr [esp + 0x1c], 2
// 007915c0  e8237cf8ff           call 0x7191e8
// 007915c5  8d8edc000000         lea ecx, [esi + 0xdc]
// 007915cb  c644241c03           mov byte ptr [esp + 0x1c], 3
// 007915d0  e85bfbffff           call 0x791130
// 007915d5  6816d28a00           push 0x8ad216
// 007915da  8bcf                 mov ecx, edi
// 007915dc  c644242004           mov byte ptr [esp + 0x20], 4
// 007915e1  889e81000000         mov byte ptr [esi + 0x81], bl
// 007915e7  889e80000000         mov byte ptr [esi + 0x80], bl
// 007915ed  ff15acfc8900         call dword ptr [0x89fcac]
// 007915f3  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 007915f9  899e84000000         mov dword ptr [esi + 0x84], ebx
// 007915ff  899e88000000         mov dword ptr [esi + 0x88], ebx
// 00791605  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 0079160b  899e8c010000         mov dword ptr [esi + 0x18c], ebx
// 00791611  895e7c               mov dword ptr [esi + 0x7c], ebx
// 00791614  895e6c               mov dword ptr [esi + 0x6c], ebx
// 00791617  e8c47effff           call 0x7894e0
// 0079161c  bf10000000           mov edi, 0x10
// 00791621  39b8c0000000         cmp dword ptr [eax + 0xc0], edi
// 00791627  7d0d                 jge 0x791636
// 00791629  e8b27effff           call 0x7894e0
// 0079162e  8b80c0000000         mov eax, dword ptr [eax + 0xc0]
// 00791634  eb02                 jmp 0x791638
// 00791636  8bc7                 mov eax, edi
// 00791638  898690000000         mov dword ptr [esi + 0x90], eax
// 0079163e  e89d7effff           call 0x7894e0
// 00791643  39b8c4000000         cmp dword ptr [eax + 0xc4], edi
// 00791649  7d0d                 jge 0x791658
// 0079164b  e8907effff           call 0x7894e0
// 00791650  8b80c4000000         mov eax, dword ptr [eax + 0xc4]
// 00791656  eb02                 jmp 0x79165a
// 00791658  8bc7                 mov eax, edi
// 0079165a  8b3de4ee8900         mov edi, dword ptr [0x89eee4]
// 00791660  6a12                 push 0x12
// 00791662  898694000000         mov dword ptr [esi + 0x94], eax
// 00791668  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0079166e  ffd7                 call edi
// 00791670  6a0f                 push 0xf
// 00791672  894678               mov dword ptr [esi + 0x78], eax
// 00791675  ffd7                 call edi
// 00791677  6a0f                 push 0xf
// 00791679  894670               mov dword ptr [esi + 0x70], eax
// 0079167c  ffd7                 call edi
// 0079167e  894674               mov dword ptr [esi + 0x74], eax
// 00791681  8bc6                 mov eax, esi
// 00791683  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00791687  64890d00000000       mov dword ptr fs:[0], ecx
// 0079168e  59                   pop ecx
// 0079168f  5f                   pop edi
// 00791690  5e                   pop esi
// 00791691  5b                   pop ebx
// 00791692  83c410               add esp, 0x10
// 00791695  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaption@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp
// roc 2010-06 00821240  unit: CXTCaptionButton  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00821240
//
// 00821240  6aff                 push -1
// 00821242  682e589b00           push 0x9b582e
// 00821247  64a100000000         mov eax, dword ptr fs:[0]
// 0082124d  50                   push eax
// 0082124e  51                   push ecx
// 0082124f  53                   push ebx
// 00821250  56                   push esi
// 00821251  57                   push edi
// 00821252  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00821257  33c4                 xor eax, esp
// 00821259  50                   push eax
// 0082125a  8d442414             lea eax, [esp + 0x14]
// 0082125e  64a300000000         mov dword ptr fs:[0], eax
// 00821264  8bf1                 mov esi, ecx
// 00821266  89742410             mov dword ptr [esp + 0x10], esi
// 0082126a  e81970f8ff           call 0x7a8288
// 0082126f  c7064cd6a500         mov dword ptr [esi], 0xa5d64c
// 00821275  33db                 xor ebx, ebx
// 00821277  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0082127b  8d7e54               lea edi, [esi + 0x54]
// 0082127e  e8edfbffff           call 0x820e70
// 00821283  50                   push eax
// 00821284  8bcf                 mov ecx, edi
// 00821286  e835d4feff           call 0x80e6c0
// 0082128b  c707fc45a600         mov dword ptr [edi], 0xa645fc
// 00821291  8dbed0000000         lea edi, [esi + 0xd0]
// 00821297  8bcf                 mov ecx, edi
// 00821299  c7060c46a600         mov dword ptr [esi], 0xa6460c
// 0082129f  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 008212a5  8d8ed4000000         lea ecx, [esi + 0xd4]
// 008212ab  c644241c02           mov byte ptr [esp + 0x1c], 2
// 008212b0  e89b6ef8ff           call 0x7a8150
// 008212b5  8d8edc000000         lea ecx, [esi + 0xdc]
// 008212bb  c644241c03           mov byte ptr [esp + 0x1c], 3
// 008212c0  e84bfbffff           call 0x820e10
// 008212c5  68fe08a000           push 0xa008fe
// 008212ca  8bcf                 mov ecx, edi
// 008212cc  c644242004           mov byte ptr [esp + 0x20], 4
// 008212d1  889e81000000         mov byte ptr [esi + 0x81], bl
// 008212d7  889e80000000         mov byte ptr [esi + 0x80], bl
// 008212dd  ff158cce9e00         call dword ptr [0x9ece8c]
// 008212e3  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 008212e9  899e84000000         mov dword ptr [esi + 0x84], ebx
// 008212ef  899e88000000         mov dword ptr [esi + 0x88], ebx
// 008212f5  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 008212fb  899e8c010000         mov dword ptr [esi + 0x18c], ebx
// 00821301  895e7c               mov dword ptr [esi + 0x7c], ebx
// 00821304  895e6c               mov dword ptr [esi + 0x6c], ebx
// 00821307  e8b471ffff           call 0x8184c0
// 0082130c  bf10000000           mov edi, 0x10
// 00821311  39b8c0000000         cmp dword ptr [eax + 0xc0], edi
// 00821317  7d0d                 jge 0x821326
// 00821319  e8a271ffff           call 0x8184c0
// 0082131e  8b80c0000000         mov eax, dword ptr [eax + 0xc0]
// 00821324  eb02                 jmp 0x821328
// 00821326  8bc7                 mov eax, edi
// 00821328  898690000000         mov dword ptr [esi + 0x90], eax
// 0082132e  e88d71ffff           call 0x8184c0
// 00821333  39b8c4000000         cmp dword ptr [eax + 0xc4], edi
// 00821339  7d0d                 jge 0x821348
// 0082133b  e88071ffff           call 0x8184c0
// 00821340  8b80c4000000         mov eax, dword ptr [eax + 0xc4]
// 00821346  eb02                 jmp 0x82134a
// 00821348  8bc7                 mov eax, edi
// 0082134a  8b3d04ba9e00         mov edi, dword ptr [0x9eba04]
// 00821350  6a12                 push 0x12
// 00821352  898694000000         mov dword ptr [esi + 0x94], eax
// 00821358  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0082135e  ffd7                 call edi
// 00821360  6a0f                 push 0xf
// 00821362  894678               mov dword ptr [esi + 0x78], eax
// 00821365  ffd7                 call edi
// 00821367  6a0f                 push 0xf
// 00821369  894670               mov dword ptr [esi + 0x70], eax
// 0082136c  ffd7                 call edi
// 0082136e  894674               mov dword ptr [esi + 0x74], eax
// 00821371  8bc6                 mov eax, esi
// 00821373  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00821377  64890d00000000       mov dword ptr fs:[0], ecx
// 0082137e  59                   pop ecx
// 0082137f  5f                   pop edi
// 00821380  5e                   pop esi
// 00821381  5b                   pop ebx
// 00821382  83c410               add esp, 0x10
// 00821385  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaption@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp
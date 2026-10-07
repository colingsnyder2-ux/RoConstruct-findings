// roc 2011-06 00576310  unit: seg_00570000  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00576310
//
// 00576310  53                   push ebx
// 00576311  55                   push ebp
// 00576312  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00576316  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 00576319  83bb7c01000000       cmp dword ptr [ebx + 0x17c], 0
// 00576320  56                   push esi
// 00576321  8b7500               mov esi, dword ptr [ebp]
// 00576324  57                   push edi
// 00576325  8b7d04               mov edi, dword ptr [ebp + 4]
// 00576328  0f8597000000         jne 0x5763c5
// 0057632e  837c241c19           cmp dword ptr [esp + 0x1c], 0x19
// 00576333  0f8dd7000000         jge 0x576410
// 00576339  8da42400000000       lea esp, [esp]
// 00576340  85ff                 test edi, edi
// 00576342  7518                 jne 0x57635c
// 00576344  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00576347  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0057634a  53                   push ebx
// 0057634b  ffd1                 call ecx
// 0057634d  83c404               add esp, 4
// 00576350  84c0                 test al, al
// 00576352  7464                 je 0x5763b8
// 00576354  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00576357  8b30                 mov esi, dword ptr [eax]
// 00576359  8b7804               mov edi, dword ptr [eax + 4]
// 0057635c  0fb606               movzx eax, byte ptr [esi]
// 0057635f  4f                   dec edi
// 00576360  46                   inc esi
// 00576361  3dff000000           cmp eax, 0xff
// 00576366  7531                 jne 0x576399
// 00576368  85ff                 test edi, edi
// 0057636a  7518                 jne 0x576384
// 0057636c  8b5318               mov edx, dword ptr [ebx + 0x18]
// 0057636f  8b420c               mov eax, dword ptr [edx + 0xc]
// 00576372  53                   push ebx
// 00576373  ffd0                 call eax
// 00576375  83c404               add esp, 4
// 00576378  84c0                 test al, al
// 0057637a  743c                 je 0x5763b8
// 0057637c  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0057637f  8b30                 mov esi, dword ptr [eax]
// 00576381  8b7804               mov edi, dword ptr [eax + 4]
// 00576384  0fb606               movzx eax, byte ptr [esi]
// 00576387  4f                   dec edi
// 00576388  46                   inc esi
// 00576389  3dff000000           cmp eax, 0xff
// 0057638e  74d8                 je 0x576368
// 00576390  85c0                 test eax, eax
// 00576392  752b                 jne 0x5763bf
// 00576394  b8ff000000           mov eax, 0xff
// 00576399  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057639d  c1e108               shl ecx, 8
// 005763a0  0bc8                 or ecx, eax
// 005763a2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005763a6  83c008               add eax, 8
// 005763a9  83f819               cmp eax, 0x19
// 005763ac  894c2418             mov dword ptr [esp + 0x18], ecx
// 005763b0  8944241c             mov dword ptr [esp + 0x1c], eax
// 005763b4  7c8a                 jl 0x576340
// 005763b6  eb58                 jmp 0x576410
// 005763b8  5f                   pop edi
// 005763b9  5e                   pop esi
// 005763ba  5d                   pop ebp
// 005763bb  32c0                 xor al, al
// 005763bd  5b                   pop ebx
// 005763be  c3                   ret 
// 005763bf  89837c010000         mov dword ptr [ebx + 0x17c], eax
// 005763c5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005763c9  39542420             cmp dword ptr [esp + 0x20], edx
// 005763cd  7e41                 jle 0x576410
// 005763cf  8b8398010000         mov eax, dword ptr [ebx + 0x198]
// 005763d5  80780800             cmp byte ptr [eax + 8], 0
// 005763d9  7520                 jne 0x5763fb
// 005763db  8b0b                 mov ecx, dword ptr [ebx]
// 005763dd  c7411475000000       mov dword ptr [ecx + 0x14], 0x75
// 005763e4  8b13                 mov edx, dword ptr [ebx]
// 005763e6  8b4204               mov eax, dword ptr [edx + 4]
// 005763e9  6aff                 push -1
// 005763eb  53                   push ebx
// 005763ec  ffd0                 call eax
// 005763ee  8b8b98010000         mov ecx, dword ptr [ebx + 0x198]
// 005763f4  83c408               add esp, 8
// 005763f7  c6410801             mov byte ptr [ecx + 8], 1
// 005763fb  b919000000           mov ecx, 0x19
// 00576400  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00576404  c744241c19000000     mov dword ptr [esp + 0x1c], 0x19
// 0057640c  d3642418             shl dword ptr [esp + 0x18], cl
// 00576410  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00576414  8b542418             mov edx, dword ptr [esp + 0x18]
// 00576418  897d04               mov dword ptr [ebp + 4], edi
// 0057641b  5f                   pop edi
// 0057641c  897500               mov dword ptr [ebp], esi
// 0057641f  5e                   pop esi
// 00576420  89450c               mov dword ptr [ebp + 0xc], eax
// 00576423  895508               mov dword ptr [ebp + 8], edx
// 00576426  5d                   pop ebp
// 00576427  b001                 mov al, 1
// 00576429  5b                   pop ebx
// 0057642a  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_fill_bit_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c

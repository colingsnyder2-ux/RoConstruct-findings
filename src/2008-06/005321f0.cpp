// roc 2008-06 005321f0  unit: seg_00530000  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005321f0
//
// 005321f0  53                   push ebx
// 005321f1  55                   push ebp
// 005321f2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005321f6  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 005321f9  83bb7c01000000       cmp dword ptr [ebx + 0x17c], 0
// 00532200  56                   push esi
// 00532201  8b7500               mov esi, dword ptr [ebp]
// 00532204  57                   push edi
// 00532205  8b7d04               mov edi, dword ptr [ebp + 4]
// 00532208  0f8597000000         jne 0x5322a5
// 0053220e  837c241c19           cmp dword ptr [esp + 0x1c], 0x19
// 00532213  0f8dd7000000         jge 0x5322f0
// 00532219  8da42400000000       lea esp, [esp]
// 00532220  85ff                 test edi, edi
// 00532222  7518                 jne 0x53223c
// 00532224  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00532227  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0053222a  53                   push ebx
// 0053222b  ffd1                 call ecx
// 0053222d  83c404               add esp, 4
// 00532230  84c0                 test al, al
// 00532232  7464                 je 0x532298
// 00532234  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00532237  8b30                 mov esi, dword ptr [eax]
// 00532239  8b7804               mov edi, dword ptr [eax + 4]
// 0053223c  0fb606               movzx eax, byte ptr [esi]
// 0053223f  4f                   dec edi
// 00532240  46                   inc esi
// 00532241  3dff000000           cmp eax, 0xff
// 00532246  7531                 jne 0x532279
// 00532248  85ff                 test edi, edi
// 0053224a  7518                 jne 0x532264
// 0053224c  8b5318               mov edx, dword ptr [ebx + 0x18]
// 0053224f  8b420c               mov eax, dword ptr [edx + 0xc]
// 00532252  53                   push ebx
// 00532253  ffd0                 call eax
// 00532255  83c404               add esp, 4
// 00532258  84c0                 test al, al
// 0053225a  743c                 je 0x532298
// 0053225c  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0053225f  8b30                 mov esi, dword ptr [eax]
// 00532261  8b7804               mov edi, dword ptr [eax + 4]
// 00532264  0fb606               movzx eax, byte ptr [esi]
// 00532267  4f                   dec edi
// 00532268  46                   inc esi
// 00532269  3dff000000           cmp eax, 0xff
// 0053226e  74d8                 je 0x532248
// 00532270  85c0                 test eax, eax
// 00532272  752b                 jne 0x53229f
// 00532274  b8ff000000           mov eax, 0xff
// 00532279  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053227d  c1e108               shl ecx, 8
// 00532280  0bc8                 or ecx, eax
// 00532282  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00532286  83c008               add eax, 8
// 00532289  83f819               cmp eax, 0x19
// 0053228c  894c2418             mov dword ptr [esp + 0x18], ecx
// 00532290  8944241c             mov dword ptr [esp + 0x1c], eax
// 00532294  7c8a                 jl 0x532220
// 00532296  eb58                 jmp 0x5322f0
// 00532298  5f                   pop edi
// 00532299  5e                   pop esi
// 0053229a  5d                   pop ebp
// 0053229b  32c0                 xor al, al
// 0053229d  5b                   pop ebx
// 0053229e  c3                   ret 
// 0053229f  89837c010000         mov dword ptr [ebx + 0x17c], eax
// 005322a5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005322a9  39542420             cmp dword ptr [esp + 0x20], edx
// 005322ad  7e41                 jle 0x5322f0
// 005322af  8b8398010000         mov eax, dword ptr [ebx + 0x198]
// 005322b5  80780800             cmp byte ptr [eax + 8], 0
// 005322b9  7520                 jne 0x5322db
// 005322bb  8b0b                 mov ecx, dword ptr [ebx]
// 005322bd  c7411475000000       mov dword ptr [ecx + 0x14], 0x75
// 005322c4  8b13                 mov edx, dword ptr [ebx]
// 005322c6  8b4204               mov eax, dword ptr [edx + 4]
// 005322c9  6aff                 push -1
// 005322cb  53                   push ebx
// 005322cc  ffd0                 call eax
// 005322ce  8b8b98010000         mov ecx, dword ptr [ebx + 0x198]
// 005322d4  83c408               add esp, 8
// 005322d7  c6410801             mov byte ptr [ecx + 8], 1
// 005322db  b919000000           mov ecx, 0x19
// 005322e0  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 005322e4  c744241c19000000     mov dword ptr [esp + 0x1c], 0x19
// 005322ec  d3642418             shl dword ptr [esp + 0x18], cl
// 005322f0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005322f4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005322f8  897d04               mov dword ptr [ebp + 4], edi
// 005322fb  5f                   pop edi
// 005322fc  897500               mov dword ptr [ebp], esi
// 005322ff  5e                   pop esi
// 00532300  89450c               mov dword ptr [ebp + 0xc], eax
// 00532303  895508               mov dword ptr [ebp + 8], edx
// 00532306  5d                   pop ebp
// 00532307  b001                 mov al, 1
// 00532309  5b                   pop ebx
// 0053230a  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_fill_bit_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c

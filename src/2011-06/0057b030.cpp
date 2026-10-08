// from server: 100% by auto
// roc 2011-06 0057b030  unit: seg_00570000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057b030
//
// 0057b030  56                   push esi
// 0057b031  57                   push edi
// 0057b032  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057b036  8bb740010000         mov esi, dword ptr [edi + 0x140]
// 0057b03c  8b4608               mov eax, dword ptr [esi + 8]
// 0057b03f  3b87e0000000         cmp eax, dword ptr [edi + 0xe0]
// 0057b045  0f8381000000         jae 0x57b0cc
// 0057b04b  53                   push ebx
// 0057b04c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0057b050  55                   push ebp
// 0057b051  8d6e0c               lea ebp, [esi + 0xc]
// 0057b054  837d0008             cmp dword ptr [ebp], 8
// 0057b058  7325                 jae 0x57b07f
// 0057b05a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057b05e  8b8f44010000         mov ecx, dword ptr [edi + 0x144]
// 0057b064  6a08                 push 8
// 0057b066  55                   push ebp
// 0057b067  8d5618               lea edx, [esi + 0x18]
// 0057b06a  52                   push edx
// 0057b06b  8b542424             mov edx, dword ptr [esp + 0x24]
// 0057b06f  50                   push eax
// 0057b070  8b4104               mov eax, dword ptr [ecx + 4]
// 0057b073  53                   push ebx
// 0057b074  52                   push edx
// 0057b075  57                   push edi
// 0057b076  ffd0                 call eax
// 0057b078  83c41c               add esp, 0x1c
// 0057b07b  837d0008             cmp dword ptr [ebp], 8
// 0057b07f  7549                 jne 0x57b0ca
// 0057b081  8b8f48010000         mov ecx, dword ptr [edi + 0x148]
// 0057b087  8b4104               mov eax, dword ptr [ecx + 4]
// 0057b08a  8d5618               lea edx, [esi + 0x18]
// 0057b08d  52                   push edx
// 0057b08e  57                   push edi
// 0057b08f  ffd0                 call eax
// 0057b091  83c408               add esp, 8
// 0057b094  84c0                 test al, al
// 0057b096  7426                 je 0x57b0be
// 0057b098  807e1000             cmp byte ptr [esi + 0x10], 0
// 0057b09c  7406                 je 0x57b0a4
// 0057b09e  ff03                 inc dword ptr [ebx]
// 0057b0a0  c6461000             mov byte ptr [esi + 0x10], 0
// 0057b0a4  ff4608               inc dword ptr [esi + 8]
// 0057b0a7  c7450000000000       mov dword ptr [ebp], 0
// 0057b0ae  8b4e08               mov ecx, dword ptr [esi + 8]
// 0057b0b1  3b8fe0000000         cmp ecx, dword ptr [edi + 0xe0]
// 0057b0b7  729b                 jb 0x57b054
// 0057b0b9  5d                   pop ebp
// 0057b0ba  5b                   pop ebx
// 0057b0bb  5f                   pop edi
// 0057b0bc  5e                   pop esi
// 0057b0bd  c3                   ret 
// 0057b0be  807e1000             cmp byte ptr [esi + 0x10], 0
// 0057b0c2  7506                 jne 0x57b0ca
// 0057b0c4  ff0b                 dec dword ptr [ebx]
// 0057b0c6  c6461001             mov byte ptr [esi + 0x10], 1
// 0057b0ca  5d                   pop ebp
// 0057b0cb  5b                   pop ebx
// 0057b0cc  5f                   pop edi
// 0057b0cd  5e                   pop esi
// 0057b0ce  c3                   ret 
// library jpeg-6b/jcmainct.c (function _process_data_simple_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c

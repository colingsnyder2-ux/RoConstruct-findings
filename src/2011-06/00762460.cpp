// roc 2011-06 00762460  unit: seg_00760000  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00762460
//
// 00762460  56                   push esi
// 00762461  8b742408             mov esi, dword ptr [esp + 8]
// 00762465  57                   push edi
// 00762466  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0076246a  81ffefd8ffff         cmp edi, 0xffffd8ef
// 00762470  7516                 jne 0x762488
// 00762472  8b4614               mov eax, dword ptr [esi + 0x14]
// 00762475  3b4628               cmp eax, dword ptr [esi + 0x28]
// 00762478  750e                 jne 0x762488
// 0076247a  68b864ab00           push 0xab64b8
// 0076247f  56                   push esi
// 00762480  e86bb70100           call 0x77dbf0
// 00762485  83c408               add esp, 8
// 00762488  8bc7                 mov eax, edi
// 0076248a  8bce                 mov ecx, esi
// 0076248c  e81ffdffff           call 0x7621b0
// 00762491  81ffefd8ffff         cmp edi, 0xffffd8ef
// 00762497  7529                 jne 0x7624c2
// 00762499  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0076249c  8b5104               mov edx, dword ptr [ecx + 4]
// 0076249f  8b4e08               mov ecx, dword ptr [esi + 8]
// 007624a2  8b02                 mov eax, dword ptr [edx]
// 007624a4  8b51f0               mov edx, dword ptr [ecx - 0x10]
// 007624a7  89500c               mov dword ptr [eax + 0xc], edx
// 007624aa  8b4e08               mov ecx, dword ptr [esi + 8]
// 007624ad  ba04000000           mov edx, 4
// 007624b2  3951f8               cmp dword ptr [ecx - 8], edx
// 007624b5  7c58                 jl 0x76250f
// 007624b7  8b49f0               mov ecx, dword ptr [ecx - 0x10]
// 007624ba  f6410503             test byte ptr [ecx + 5], 3
// 007624be  744f                 je 0x76250f
// 007624c0  eb3d                 jmp 0x7624ff
// 007624c2  8b4e08               mov ecx, dword ptr [esi + 8]
// 007624c5  8b51f0               mov edx, dword ptr [ecx - 0x10]
// 007624c8  83e910               sub ecx, 0x10
// 007624cb  81ffeed8ffff         cmp edi, 0xffffd8ee
// 007624d1  8910                 mov dword ptr [eax], edx
// 007624d3  8b5104               mov edx, dword ptr [ecx + 4]
// 007624d6  895004               mov dword ptr [eax + 4], edx
// 007624d9  8b4908               mov ecx, dword ptr [ecx + 8]
// 007624dc  894808               mov dword ptr [eax + 8], ecx
// 007624df  7d2e                 jge 0x76250f
// 007624e1  8b4608               mov eax, dword ptr [esi + 8]
// 007624e4  ba04000000           mov edx, 4
// 007624e9  3950f8               cmp dword ptr [eax - 8], edx
// 007624ec  7c21                 jl 0x76250f
// 007624ee  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 007624f1  f6410503             test byte ptr [ecx + 5], 3
// 007624f5  7418                 je 0x76250f
// 007624f7  8b4614               mov eax, dword ptr [esi + 0x14]
// 007624fa  8b4004               mov eax, dword ptr [eax + 4]
// 007624fd  8b00                 mov eax, dword ptr [eax]
// 007624ff  845005               test byte ptr [eax + 5], dl
// 00762502  740b                 je 0x76250f
// 00762504  51                   push ecx
// 00762505  50                   push eax
// 00762506  56                   push esi
// 00762507  e8844d0700           call 0x7d7290
// 0076250c  83c40c               add esp, 0xc
// 0076250f  834608f0             add dword ptr [esi + 8], -0x10
// 00762513  5f                   pop edi
// 00762514  5e                   pop esi
// 00762515  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_replace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c

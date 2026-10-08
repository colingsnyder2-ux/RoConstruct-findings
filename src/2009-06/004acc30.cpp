// from server: 100% by auto
// roc 2009-06 004acc30  unit: G3D::Win32Window  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004acc30
//
// 004acc30  6aff                 push -1
// 004acc32  68b37e8500           push 0x857eb3
// 004acc37  64a100000000         mov eax, dword ptr fs:[0]
// 004acc3d  50                   push eax
// 004acc3e  64892500000000       mov dword ptr fs:[0], esp
// 004acc45  51                   push ecx
// 004acc46  53                   push ebx
// 004acc47  33db                 xor ebx, ebx
// 004acc49  895c2410             mov dword ptr [esp + 0x10], ebx
// 004acc4d  381d34d1a300         cmp byte ptr [0xa3d134], bl
// 004acc53  7422                 je 0x4acc77
// 004acc55  8d4c2458             lea ecx, [esp + 0x58]
// 004acc59  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004acc61  ff15c4e48900         call dword ptr [0x89e4c4]
// 004acc67  5b                   pop ebx
// 004acc68  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004acc6c  64890d00000000       mov dword ptr fs:[0], ecx
// 004acc73  83c410               add esp, 0x10
// 004acc76  c3                   ret 
// 004acc77  b810000000           mov eax, 0x10
// 004acc7c  56                   push esi
// 004acc7d  68f0010000           push 0x1f0
// 004acc82  c60534d1a30001       mov byte ptr [0xa3d134], 1
// 004acc89  885c245e             mov byte ptr [esp + 0x5e], bl
// 004acc8d  89442420             mov dword ptr [esp + 0x20], eax
// 004acc91  89442424             mov dword ptr [esp + 0x24], eax
// 004acc95  885c245d             mov byte ptr [esp + 0x5d], bl
// 004acc99  e89abd2600           call 0x718a38
// 004acc9e  83c404               add esp, 4
// 004acca1  89442408             mov dword ptr [esp + 8], eax
// 004acca5  c644241401           mov byte ptr [esp + 0x14], 1
// 004accaa  3bc3                 cmp eax, ebx
// 004accac  7412                 je 0x4accc0
// 004accae  6a01                 push 1
// 004accb0  8d4c2420             lea ecx, [esp + 0x20]
// 004accb4  51                   push ecx
// 004accb5  8bc8                 mov ecx, eax
// 004accb7  e844f7ffff           call 0x4ac400
// 004accbc  8bf0                 mov esi, eax
// 004accbe  eb02                 jmp 0x4accc2
// 004accc0  33f6                 xor esi, esi
// 004accc2  8b0deccea300         mov ecx, dword ptr [0xa3ceec]
// 004accc8  885c2414             mov byte ptr [esp + 0x14], bl
// 004acccc  3bf1                 cmp esi, ecx
// 004accce  7410                 je 0x4acce0
// 004accd0  3bcb                 cmp ecx, ebx
// 004accd2  740c                 je 0x4acce0
// 004accd4  8b11                 mov edx, dword ptr [ecx]
// 004accd6  8b829c000000         mov eax, dword ptr [edx + 0x9c]
// 004accdc  6a01                 push 1
// 004accde  ffd0                 call eax
// 004acce0  8d4c245c             lea ecx, [esp + 0x5c]
// 004acce4  8935eccea300         mov dword ptr [0xa3ceec], esi
// 004accea  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004accf2  ff15c4e48900         call dword ptr [0x89e4c4]
// 004accf8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004accfc  5e                   pop esi
// 004accfd  5b                   pop ebx
// 004accfe  64890d00000000       mov dword ptr fs:[0], ecx
// 004acd05  83c410               add esp, 0x10
// 004acd08  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?createShareWindow@Win32Window@G3D@@CAXVSettings@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

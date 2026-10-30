// roc 2007-03 00522820  unit: seg_00520000  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00522820
//
// 00522820  56                   push esi
// 00522821  8b742408             mov esi, dword ptr [esp + 8]
// 00522825  8b4604               mov eax, dword ptr [esi + 4]
// 00522828  8b08                 mov ecx, dword ptr [eax]
// 0052282a  57                   push edi
// 0052282b  6a1c                 push 0x1c
// 0052282d  6a01                 push 1
// 0052282f  56                   push esi
// 00522830  ffd1                 call ecx
// 00522832  8bf8                 mov edi, eax
// 00522834  89be8c010000         mov dword ptr [esi + 0x18c], edi
// 0052283a  83c40c               add esp, 0xc
// 0052283d  c70720275200         mov dword ptr [edi], 0x522720
// 00522843  c7470800000000       mov dword ptr [edi + 8], 0
// 0052284a  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 00522851  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00522855  7459                 je 0x5228b0
// 00522857  807c241000           cmp byte ptr [esp + 0x10], 0
// 0052285c  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00522862  894710               mov dword ptr [edi + 0x10], eax
// 00522865  742f                 je 0x522896
// 00522867  8b5660               mov edx, dword ptr [esi + 0x60]
// 0052286a  55                   push ebp
// 0052286b  8b6e04               mov ebp, dword ptr [esi + 4]
// 0052286e  50                   push eax
// 0052286f  50                   push eax
// 00522870  52                   push edx
// 00522871  e8aa1dffff           call 0x514620
// 00522876  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00522879  83c408               add esp, 8
// 0052287c  50                   push eax
// 0052287d  8b4664               mov eax, dword ptr [esi + 0x64]
// 00522880  0faf465c             imul eax, dword ptr [esi + 0x5c]
// 00522884  50                   push eax
// 00522885  6a00                 push 0
// 00522887  6a01                 push 1
// 00522889  56                   push esi
// 0052288a  ffd1                 call ecx
// 0052288c  83c418               add esp, 0x18
// 0052288f  5d                   pop ebp
// 00522890  894708               mov dword ptr [edi + 8], eax
// 00522893  5f                   pop edi
// 00522894  5e                   pop esi
// 00522895  c3                   ret 
// 00522896  8b5604               mov edx, dword ptr [esi + 4]
// 00522899  8b4a08               mov ecx, dword ptr [edx + 8]
// 0052289c  50                   push eax
// 0052289d  8b4664               mov eax, dword ptr [esi + 0x64]
// 005228a0  0faf465c             imul eax, dword ptr [esi + 0x5c]
// 005228a4  50                   push eax
// 005228a5  6a01                 push 1
// 005228a7  56                   push esi
// 005228a8  ffd1                 call ecx
// 005228aa  83c410               add esp, 0x10
// 005228ad  89470c               mov dword ptr [edi + 0xc], eax
// 005228b0  5f                   pop edi
// 005228b1  5e                   pop esi
// 005228b2  c3                   ret 
// library jpeg-6b/jdpostct.c (function _jinit_d_post_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c

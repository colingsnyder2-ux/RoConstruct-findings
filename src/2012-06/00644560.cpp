// roc 2012-06 00644560  unit: seg_00640000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00644560
//
// 00644560  8b442408             mov eax, dword ptr [esp + 8]
// 00644564  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00644568  56                   push esi
// 00644569  8b31                 mov esi, dword ptr [ecx]
// 0064456b  85c0                 test eax, eax
// 0064456d  7d1a                 jge 0x644589
// 0064456f  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 00644573  7406                 je 0x64457b
// 00644575  837e6803             cmp dword ptr [esi + 0x68], 3
// 00644579  7c09                 jl 0x644584
// 0064457b  8b4608               mov eax, dword ptr [esi + 8]
// 0064457e  51                   push ecx
// 0064457f  ffd0                 call eax
// 00644581  83c404               add esp, 4
// 00644584  ff466c               inc dword ptr [esi + 0x6c]
// 00644587  5e                   pop esi
// 00644588  c3                   ret 
// 00644589  394668               cmp dword ptr [esi + 0x68], eax
// 0064458c  7c09                 jl 0x644597
// 0064458e  51                   push ecx
// 0064458f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00644592  ffd1                 call ecx
// 00644594  83c404               add esp, 4
// 00644597  5e                   pop esi
// 00644598  c3                   ret 
// library jpeg-6b/jerror.c (function _emit_message)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c

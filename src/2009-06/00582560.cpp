// roc 2009-06 00582560  unit: seg_00580000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00582560
//
// 00582560  8b442408             mov eax, dword ptr [esp + 8]
// 00582564  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00582568  56                   push esi
// 00582569  8b31                 mov esi, dword ptr [ecx]
// 0058256b  85c0                 test eax, eax
// 0058256d  7d1a                 jge 0x582589
// 0058256f  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 00582573  7406                 je 0x58257b
// 00582575  837e6803             cmp dword ptr [esi + 0x68], 3
// 00582579  7c09                 jl 0x582584
// 0058257b  8b4608               mov eax, dword ptr [esi + 8]
// 0058257e  51                   push ecx
// 0058257f  ffd0                 call eax
// 00582581  83c404               add esp, 4
// 00582584  ff466c               inc dword ptr [esi + 0x6c]
// 00582587  5e                   pop esi
// 00582588  c3                   ret 
// 00582589  394668               cmp dword ptr [esi + 0x68], eax
// 0058258c  7c09                 jl 0x582597
// 0058258e  51                   push ecx
// 0058258f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00582592  ffd1                 call ecx
// 00582594  83c404               add esp, 4
// 00582597  5e                   pop esi
// 00582598  c3                   ret 
// library jpeg-6b/jerror.c (function _emit_message)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c

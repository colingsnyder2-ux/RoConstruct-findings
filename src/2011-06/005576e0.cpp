// from server: 100% by auto
// roc 2011-06 005576e0  unit: seg_00550000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005576e0
//
// 005576e0  8b442408             mov eax, dword ptr [esp + 8]
// 005576e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005576e8  56                   push esi
// 005576e9  8b31                 mov esi, dword ptr [ecx]
// 005576eb  85c0                 test eax, eax
// 005576ed  7d1a                 jge 0x557709
// 005576ef  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 005576f3  7406                 je 0x5576fb
// 005576f5  837e6803             cmp dword ptr [esi + 0x68], 3
// 005576f9  7c09                 jl 0x557704
// 005576fb  8b4608               mov eax, dword ptr [esi + 8]
// 005576fe  51                   push ecx
// 005576ff  ffd0                 call eax
// 00557701  83c404               add esp, 4
// 00557704  ff466c               inc dword ptr [esi + 0x6c]
// 00557707  5e                   pop esi
// 00557708  c3                   ret 
// 00557709  394668               cmp dword ptr [esi + 0x68], eax
// 0055770c  7c09                 jl 0x557717
// 0055770e  51                   push ecx
// 0055770f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00557712  ffd1                 call ecx
// 00557714  83c404               add esp, 4
// 00557717  5e                   pop esi
// 00557718  c3                   ret 
// library jpeg-6b/jerror.c (function _emit_message)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jerror.c

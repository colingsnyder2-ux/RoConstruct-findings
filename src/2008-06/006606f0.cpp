// from server: 100% by auto
// roc 2008-06 006606f0  unit: RBX::FilterStairs  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006606f0
//
// 006606f0  8b442404             mov eax, dword ptr [esp + 4]
// 006606f4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006606f8  53                   push ebx
// 006606f9  55                   push ebp
// 006606fa  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006606fe  56                   push esi
// 006606ff  8b7010               mov esi, dword ptr [eax + 0x10]
// 00660702  8b5610               mov edx, dword ptr [esi + 0x10]
// 00660705  8b460c               mov eax, dword ptr [esi + 0xc]
// 00660708  57                   push edi
// 00660709  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0066070d  57                   push edi
// 0066070e  55                   push ebp
// 0066070f  51                   push ecx
// 00660710  52                   push edx
// 00660711  ffd0                 call eax
// 00660713  8bd8                 mov ebx, eax
// 00660715  83c410               add esp, 0x10
// 00660718  85db                 test ebx, ebx
// 0066071a  7513                 jne 0x66072f
// 0066071c  85ff                 test edi, edi
// 0066071e  760f                 jbe 0x66072f
// 00660720  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00660724  6a04                 push 4
// 00660726  51                   push ecx
// 00660727  e82419fcff           call 0x622050
// 0066072c  83c408               add esp, 8
// 0066072f  2bfd                 sub edi, ebp
// 00660731  017e44               add dword ptr [esi + 0x44], edi
// 00660734  5f                   pop edi
// 00660735  5e                   pop esi
// 00660736  5d                   pop ebp
// 00660737  8bc3                 mov eax, ebx
// 00660739  5b                   pop ebx
// 0066073a  c3                   ret 
// library lua-5.1.4/lmem.c (function _luaM_realloc_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmem.c

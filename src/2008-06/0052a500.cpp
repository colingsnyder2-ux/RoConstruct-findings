// from server: 100% by colin
// roc 2008-06 0052a500  unit: seg_00520000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052a500
//
// 0052a500  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0052a504  85c9                 test ecx, ecx
// 0052a506  7424                 je 0x52a52c
// 0052a508  8b542408             mov edx, dword ptr [esp + 8]
// 0052a50c  85d2                 test edx, edx
// 0052a50e  741c                 je 0x52a52c
// 0052a510  8b814c020000         mov eax, dword ptr [ecx + 0x24c]
// 0052a516  85c0                 test eax, eax
// 0052a518  740a                 je 0x52a524
// 0052a51a  89542408             mov dword ptr [esp + 8], edx
// 0052a51e  894c2404             mov dword ptr [esp + 4], ecx
// 0052a522  ffe0                 jmp eax
// 0052a524  52                   push edx
// 0052a525  ff15c0288000         call dword ptr [0x8028c0]
// 0052a52b  59                   pop ecx
// 0052a52c  c3                   ret 
// library libpng-1.2.5-dll/pngmem.c (function _png_free)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5-dll pngmem.c

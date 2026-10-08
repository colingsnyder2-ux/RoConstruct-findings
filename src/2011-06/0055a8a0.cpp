// from server: 100% by auto
// roc 2011-06 0055a8a0  unit: seg_00550000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0055a8a0
//
// 0055a8a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055a8a4  8b814c010000         mov eax, dword ptr [ecx + 0x14c]
// 0055a8aa  85c0                 test eax, eax
// 0055a8ac  7406                 je 0x55a8b4
// 0055a8ae  894c2404             mov dword ptr [esp + 4], ecx
// 0055a8b2  ffe0                 jmp eax
// 0055a8b4  c3                   ret 
// library libpng-1.2.5/pngwio.c (function _png_flush)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwio.c

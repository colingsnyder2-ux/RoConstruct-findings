// from server: 100% by auto
// roc 2008-06 0051db10  unit: seg_00510000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051db10
//
// 0051db10  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0051db14  8b814c010000         mov eax, dword ptr [ecx + 0x14c]
// 0051db1a  85c0                 test eax, eax
// 0051db1c  7406                 je 0x51db24
// 0051db1e  894c2404             mov dword ptr [esp + 4], ecx
// 0051db22  ffe0                 jmp eax
// 0051db24  c3                   ret 
// library libpng-1.2.5/pngwio.c (function _png_flush)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwio.c

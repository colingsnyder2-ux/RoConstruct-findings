// from server: 100% by auto
// roc 2009-06 00581640  unit: seg_00580000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00581640
//
// 00581640  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00581644  8b814c010000         mov eax, dword ptr [ecx + 0x14c]
// 0058164a  85c0                 test eax, eax
// 0058164c  7406                 je 0x581654
// 0058164e  894c2404             mov dword ptr [esp + 4], ecx
// 00581652  ffe0                 jmp eax
// 00581654  c3                   ret 
// library libpng-1.2.5/pngwio.c (function _png_flush)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwio.c

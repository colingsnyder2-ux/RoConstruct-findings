// from server: 100% by colin
// roc 2008-06 0051db30  unit: seg_00510000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051db30
//
// 0051db30  8b442404             mov eax, dword ptr [esp + 4]
// 0051db34  8b4054               mov eax, dword ptr [eax + 0x54]
// 0051db37  85c0                 test eax, eax
// 0051db39  740a                 je 0x51db45
// 0051db3b  89442404             mov dword ptr [esp + 4], eax
// 0051db3f  ff2518288000         jmp dword ptr [0x802818]
// 0051db45  c3                   ret 
// library libpng-1.2.5-dll/pngwio.c (function _png_default_flush)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5-dll pngwio.c

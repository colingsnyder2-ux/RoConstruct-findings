// from server: 100% by auto
// roc 2008-06 0051dbc0  unit: seg_00510000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051dbc0
//
// 0051dbc0  53                   push ebx
// 0051dbc1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0051dbc5  83fb08               cmp ebx, 8
// 0051dbc8  56                   push esi
// 0051dbc9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051dbcd  7e0e                 jle 0x51dbdd
// 0051dbcf  68c4958200           push 0x8295c4
// 0051dbd4  56                   push esi
// 0051dbd5  e8d6bd0000           call 0x5299b0
// 0051dbda  83c408               add esp, 8
// 0051dbdd  85db                 test ebx, ebx
// 0051dbdf  0f9cc0               setl al
// 0051dbe2  fec8                 dec al
// 0051dbe4  22c3                 and al, bl
// 0051dbe6  88862c010000         mov byte ptr [esi + 0x12c], al
// 0051dbec  5e                   pop esi
// 0051dbed  5b                   pop ebx
// 0051dbee  c3                   ret 
// library libpng-1.2.5/png.c (function _png_set_sig_bytes)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c

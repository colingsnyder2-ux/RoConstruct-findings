// from server: 100% by auto
// roc 2007-08 00520680  unit: seg_00520000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00520680
//
// 00520680  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00520684  660fb601             movzx ax, byte ptr [ecx]
// 00520688  660fb64901           movzx cx, byte ptr [ecx + 1]
// 0052068d  66c1e008             shl ax, 8
// 00520691  6603c1               add ax, cx
// 00520694  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_get_uint_16)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c

// roc 2011-06 0055a040  unit: seg_00550000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0055a040
//
// 0055a040  837c240400           cmp dword ptr [esp + 4], 0
// 0055a045  741b                 je 0x55a062
// 0055a047  8b442408             mov eax, dword ptr [esp + 8]
// 0055a04b  85c0                 test eax, eax
// 0055a04d  7413                 je 0x55a062
// 0055a04f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055a053  8b11                 mov edx, dword ptr [ecx]
// 0055a055  895044               mov dword ptr [eax + 0x44], edx
// 0055a058  8a4904               mov cl, byte ptr [ecx + 4]
// 0055a05b  83480802             or dword ptr [eax + 8], 2
// 0055a05f  884848               mov byte ptr [eax + 0x48], cl
// 0055a062  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sBIT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
